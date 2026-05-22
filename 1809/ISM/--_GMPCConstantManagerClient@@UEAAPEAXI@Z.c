/*
 * XREFs of ??_GMPCConstantManagerClient@@UEAAPEAXI@Z @ 0x1800E0700
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004F1F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ??1?$vector@V?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800E14D4 (--1-$vector@V-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

MPCConstantManagerClient *__fastcall MPCConstantManagerClient::`scalar deleting destructor'(
        MPCConstantManagerClient *this,
        char a2)
{
  __int64 v4; // rcx
  void (__fastcall ***v5)(_QWORD); // rax
  __int64 v6; // rcx

  std::vector<wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>>::~vector<wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>>((char *)this + 64);
  std::vector<wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>>::~vector<wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>>((char *)this + 40);
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    v5 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
    (**v5)(v5);
  }
  v6 = *((_QWORD *)this + 3);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release((volatile signed __int32 *)(2 * v6));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
