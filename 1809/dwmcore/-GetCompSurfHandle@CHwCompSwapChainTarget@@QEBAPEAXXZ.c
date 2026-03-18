/*
 * XREFs of ?GetCompSurfHandle@CHwCompSwapChainTarget@@QEBAPEAXXZ @ 0x180200968
 * Callers:
 *     ?EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ @ 0x18015E68C (-EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ.c)
 *     ?EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015F568 (-EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::GetCompSurfHandle(CHwCompSwapChainTarget *this)
{
  void (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v1 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 35);
  if ( v1 )
  {
    (**v1)(v1, &GUID_7652c85a_0df5_4567_bcdd_8176a332b99b, &v3);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 88LL))(v3, &v4);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v4;
}
