/*
 * XREFs of ?Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x1C00F8C8C
 * Callers:
 *     ?CreateRegionFromRect@@YAJAEBUtagRECT@@PEAPEAUIRegion@@@Z @ 0x1C00F8D30 (-CreateRegionFromRect@@YAJAEBUtagRECT@@PEAPEAUIRegion@@@Z.c)
 * Callees:
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C001BAA4 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegion::Create(struct _RECTL *a1, struct CRegion **a2)
{
  int v4; // edi
  __int64 v5; // rax
  CRegion *v6; // rbx

  *a2 = 0LL;
  v4 = -1073741801;
  v5 = Win32AllocPool(24LL, 0x6E677247u);
  v6 = (CRegion *)v5;
  if ( v5 )
  {
    *(_DWORD *)(v5 + 12) = 0;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)v5 = &CRegion::`vftable';
    *(_DWORD *)(v5 + 8) = 1;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v4 = CRegion::InitializeFromRect(v6, a1);
    if ( v4 < 0 )
      (**(void (__fastcall ***)(CRegion *))v6)(v6);
    else
      *a2 = v6;
  }
  return (unsigned int)v4;
}
