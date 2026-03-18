/*
 * XREFs of NtGdiPtVisible @ 0x1C0299820
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0036028 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C005ED08 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0075C14 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall NtGdiPtVisible(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  char *v6; // rcx
  struct REGION *v8; // [rsp+28h] [rbp-29h] BYREF
  DC *v9[2]; // [rsp+30h] [rbp-21h] BYREF
  _BYTE v10[24]; // [rsp+40h] [rbp-11h] BYREF
  _BYTE v11[32]; // [rsp+58h] [rbp+7h] BYREF
  __int64 v12; // [rsp+78h] [rbp+27h] BYREF
  int v13; // [rsp+80h] [rbp+2Fh]
  int v14; // [rsp+84h] [rbp+33h]
  __int16 v15; // [rsp+88h] [rbp+37h]
  struct _POINTL v16; // [rsp+D0h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    v12 = 0LL;
    v13 = 0;
    v14 = 0;
    v5 = 1;
    v15 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v11, (struct XDCOBJ *)v9, 1);
    if ( (v11[24] & 1) != 0 )
    {
      v8 = XDCOBJ::prgnEffRao(v9);
      v16.x = a2;
      v16.y = a3;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v10, (struct XDCOBJ *)v9, -2147483132);
      EXFORMOBJ::bXform((EXFORMOBJ *)v10, &v16, 1LL);
      v6 = (char *)v9[0] + 1024;
      if ( (*((_DWORD *)v9[0] + 10) & 1) == 0 )
        v6 = (char *)v9[0] + 1016;
      v16.x += *(_DWORD *)v6;
      v16.y += *((_DWORD *)v6 + 1);
      v5 = RGNOBJ::bInside((RGNOBJ *)&v8, &v16) == 2;
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v11);
    if ( v12 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v12);
  }
  else
  {
    EngSetLastError(6u);
    v5 = -1;
  }
  if ( v9[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  return v5;
}
