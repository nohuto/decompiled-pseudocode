/*
 * XREFs of GreSetWindowOrg @ 0x1C00F2B74
 * Callers:
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F2780 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C008ACA4 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall GreSetWindowOrg(HDC a1, int a2, int a3)
{
  DC *v5; // rdx
  unsigned int v6; // ebx
  DC *v7; // rcx
  DC *v9[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v11[16]; // [rsp+40h] [rbp-10h] BYREF

  MDCOBJ::MDCOBJ((MDCOBJ *)v9, a1);
  if ( v9[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v9, -2147483132);
    v5 = v9[0];
    v6 = 1;
    if ( (*(_DWORD *)(*((_QWORD *)v9[0] + 10) + 8LL) & 0x100) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v10, (struct XDCOBJ *)v9, 1026);
      if ( v10[0] )
        EXFORMOBJ::bXform(
          (EXFORMOBJ *)v10,
          (struct _POINTFIX *)(*((_QWORD *)v9[0] + 10) + 84LL),
          (struct _POINTL *)(*((_QWORD *)v9[0] + 10) + 76LL),
          1uLL);
      *(_DWORD *)(*((_QWORD *)v9[0] + 10) + 8LL) &= ~0x100u;
      v5 = v9[0];
    }
    *(_DWORD *)(*((_QWORD *)v5 + 10) + 8LL) |= 0x200u;
    *(_DWORD *)(*((_QWORD *)v9[0] + 10) + 352LL) |= 0x2010u;
    *(_DWORD *)(*((_QWORD *)v9[0] + 10) + 320LL) = a2;
    *(_DWORD *)(*((_QWORD *)v9[0] + 10) + 324LL) = a3;
    v7 = v9[0];
    *(_DWORD *)(*((_QWORD *)v9[0] + 10) + 316LL) = a2;
    DC::MirrorWindowOrg(v7);
    EXFORMOBJ::vInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v9, 0x402u, 0);
    if ( v9[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  }
  else
  {
    return 0;
  }
  return v6;
}
