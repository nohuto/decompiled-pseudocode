/*
 * XREFs of ?ReleaseBufferResources@CHwCompSwapChainTarget@@IEAAXXZ @ 0x180240364
 * Callers:
 *     ??1CHwCompSwapChainTarget@@MEAA@XZ @ 0x18023F6F0 (--1CHwCompSwapChainTarget@@MEAA@XZ.c)
 *     ?EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18023FAA4 (-EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwCompSwapChainTarget@@UEAAXXZ @ 0x1802403E0 (-ReleaseResourcesForDisplayChange@CHwCompSwapChainTarget@@UEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VCD3DSurface@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C993C (-reset@-$com_ptr_t@VCD3DSurface@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwCompSwapChainTarget::ReleaseBufferResources(CHwCompSwapChainTarget *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx

  v1 = (__int64 *)((char *)this + 224);
  v3 = *((_QWORD *)this + 28);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)(v3 + 24) + 32LL))(v3 + 24, (char *)this + 200);
    wil::com_ptr_t<CD3DSurface,wil::err_returncode_policy>::reset(v1);
  }
  wil::com_ptr_t<CD3DSurface,wil::err_returncode_policy>::reset((__int64 *)this + 29);
  **((_DWORD **)this + 30) = 0;
  **((_DWORD **)this + 39) = 0;
  **((_DWORD **)this + 48) = 0;
}
