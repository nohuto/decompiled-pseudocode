/*
 * XREFs of ?ReleaseBufferResources@CHwCompSwapChainTarget@@IEAAXXZ @ 0x180201024
 * Callers:
 *     ??1CHwCompSwapChainTarget@@MEAA@XZ @ 0x180200388 (--1CHwCompSwapChainTarget@@MEAA@XZ.c)
 *     ?EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18020073C (-EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwCompSwapChainTarget@@UEAAXXZ @ 0x1802010C0 (-ReleaseResourcesForDisplayChange@CHwCompSwapChainTarget@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwCompSwapChainTarget::ReleaseBufferResources(CHwCompSwapChainTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + 36);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)(v2 + 24) + 32LL))(v2 + 24, (char *)this + 264);
    v3 = *((_QWORD *)this + 36);
    *((_QWORD *)this + 36) = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v4 = *((_QWORD *)this + 37);
  *((_QWORD *)this + 37) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  **((_DWORD **)this + 38) = 0;
  **((_DWORD **)this + 47) = 0;
  **((_DWORD **)this + 56) = 0;
}
