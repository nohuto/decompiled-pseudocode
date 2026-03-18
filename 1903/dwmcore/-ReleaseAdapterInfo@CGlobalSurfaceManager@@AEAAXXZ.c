/*
 * XREFs of ?ReleaseAdapterInfo@CGlobalSurfaceManager@@AEAAXXZ @ 0x1800D3CC4
 * Callers:
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800CED90 (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800E2518 (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x18019C10C (--1CGlobalSurfaceManager@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CGlobalSurfaceManager::ReleaseAdapterInfo(CGlobalSurfaceManager *this)
{
  unsigned int i; // edi
  void *v3; // rcx

  for ( i = 0; i < *((_DWORD *)this + 128); ++i )
  {
    v3 = *(void **)(*((_QWORD *)this + 61) + 16LL * i + 8);
    if ( v3 )
      CloseHandle(v3);
  }
  *((_DWORD *)this + 128) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 488, 0x10u);
  *((_BYTE *)this + 552) = 0;
}
