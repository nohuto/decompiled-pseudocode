/*
 * XREFs of NtGdiOffsetClipRgn @ 0x1C012E870
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0078C9C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C008B6A0 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C008BC88 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
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
  __int64 v16; // [rsp+88h] [rbp+27h]
  int v17; // [rsp+90h] [rbp+2Fh]
  int v18; // [rsp+94h] [rbp+33h]
  struct _POINTL v19; // [rsp+E0h] [rbp+7Fh] BYREF

  MDCOBJ::MDCOBJ((MDCOBJ *)v9, a1);
  if ( v9[0] )
  {
    v16 = 0LL;
    v17 = 0;
    v18 = 0;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v9, 1);
    if ( (v15[24] & 1) != 0 )
    {
      v5 = *((_QWORD *)v9[0] + 21);
      if ( !v5 )
      {
        v6 = 2;
LABEL_5:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v15);
        goto LABEL_6;
      }
      if ( *(_DWORD *)(v5 + 32) > 1u )
      {
        v12 = *((_QWORD *)v9[0] + 21);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v10, *(_DWORD *)(v5 + 80));
        if ( !v10 )
        {
          EngSetLastError(8u);
          if ( v11 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
          goto LABEL_9;
        }
        RGNOBJ::vCopy((RGNOBJ *)&v10, (struct RGNOBJ *)&v12);
        v5 = v10;
        ++*(_DWORD *)(v10 + 32);
        --*(_DWORD *)(v12 + 32);
        *((_QWORD *)v9[0] + 21) = v5;
        if ( v11 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
      }
      v13 = v5;
      v19.x = a2;
      v19.y = a3;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v14, (struct XDCOBJ *)v9, -2147483132);
      if ( ((*(_DWORD *)(v14[0] + 32LL) & 2) != 0
         || EXFORMOBJ::bXform((EXFORMOBJ *)v14, (struct _VECTORL *)&v19, (struct _VECTORL *)&v19, 1uLL))
        && RGNOBJ::bOffset((RGNOBJ *)&v13, &v19) )
      {
        DC::bTightenRao(v9[0]);
        v8 = DC::prgnVisSnap(v9[0]);
        DC::vUpdate_VisRect(v9[0], v8);
        v6 = RGNOBJ::iComplexity((RGNOBJ *)&v13);
        goto LABEL_5;
      }
      EngSetLastError(0x3EBu);
    }
LABEL_9:
    v6 = 0;
    goto LABEL_5;
  }
  EngSetLastError(6u);
  v6 = 0;
LABEL_6:
  if ( v9[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  return v6;
}
