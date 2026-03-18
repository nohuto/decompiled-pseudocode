/*
 * XREFs of NtGdiOffsetClipRgn @ 0x1C0124590
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0036028 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C005A87C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C005D7B4 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00610E8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall NtGdiOffsetClipRgn(HDC a1, LONG a2, LONG a3)
{
  __int64 v5; // rbx
  unsigned int v6; // ebx
  struct REGION *v8; // rax
  DC *v9[2]; // [rsp+28h] [rbp-39h] BYREF
  __int64 v10; // [rsp+38h] [rbp-29h] BYREF
  int v11; // [rsp+40h] [rbp-21h]
  __int64 v12; // [rsp+48h] [rbp-19h] BYREF
  __int64 v13; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v14[2]; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v15[32]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v16; // [rsp+88h] [rbp+27h] BYREF
  int v17; // [rsp+90h] [rbp+2Fh]
  int v18; // [rsp+94h] [rbp+33h]
  __int16 v19; // [rsp+98h] [rbp+37h]
  struct _POINTL v20; // [rsp+E0h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( !v9[0] )
  {
    EngSetLastError(6u);
    v6 = 0;
    goto LABEL_7;
  }
  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  v19 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v9, 1);
  if ( (v15[24] & 1) == 0 )
    goto LABEL_10;
  v5 = *((_QWORD *)v9[0] + 20);
  if ( !v5 )
  {
    v6 = 2;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(v5 + 32) > 1u )
  {
    v12 = *((_QWORD *)v9[0] + 20);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v10, *(_DWORD *)(v5 + 80));
    if ( !v10 )
    {
      EngSetLastError(8u);
      if ( v11 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
      goto LABEL_10;
    }
    RGNOBJ::vCopy((RGNOBJ *)&v10, (struct RGNOBJ *)&v12);
    v5 = v10;
    ++*(_DWORD *)(v10 + 32);
    --*(_DWORD *)(v12 + 32);
    *((_QWORD *)v9[0] + 20) = v5;
    if ( v11 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
  }
  v13 = v5;
  v20.x = a2;
  v20.y = a3;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v14, (struct XDCOBJ *)v9, -2147483132);
  if ( (*(_DWORD *)(v14[0] + 32LL) & 2) == 0
    && !EXFORMOBJ::bXform((EXFORMOBJ *)v14, (struct _VECTORL *)&v20, (struct _VECTORL *)&v20, 1uLL)
    || !RGNOBJ::bOffset((RGNOBJ *)&v13, &v20) )
  {
    EngSetLastError(0x3EBu);
LABEL_10:
    v6 = 0;
    goto LABEL_5;
  }
  DC::bTightenRao(v9[0]);
  v8 = DC::prgnVisSnap(v9[0]);
  DC::vUpdate_VisRect(v9[0], v8);
  v6 = RGNOBJ::iComplexity((RGNOBJ *)&v13);
LABEL_5:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v15);
  if ( v16 )
    DLODCOBJ::vUnlock((DLODCOBJ *)&v16);
LABEL_7:
  if ( v9[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  return v6;
}
