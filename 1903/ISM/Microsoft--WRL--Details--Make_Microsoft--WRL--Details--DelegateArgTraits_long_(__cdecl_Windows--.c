/*
 * XREFs of Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Gaming::Input::RawGameController___Windows::Gaming::Input::IRawGameController_____::_)(IInspectable___Windows::Gaming::Input::IRawGameController__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::Gaming::Input::RawGameController_____lambda_7b568ea129b9f9a0025e265315dc2196___1_IInspectable___Windows::Gaming::Input::IRawGameController_____lambda_7b568ea129b9f9a0025e265315dc2196___ @ 0x1800270D4
 * Callers:
 *     ?StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x180026E28 (-StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029740 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_180029740.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Gaming::Input::RawGameController___Windows::Gaming::Input::IRawGameController_____::___IInspectable___Windows::Gaming::Input::IRawGameController____::DelegateInvokeHelper_Windows::Foundation::IEventHandler_Windows::Gaming::Input::RawGameController_____lambda_7b568ea129b9f9a0025e265315dc2196___1_IInspectable___Windows::Gaming::Input::IRawGameController_____lambda_7b568ea129b9f9a0025e265315dc2196___(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v6; // rcx

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v6 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v4 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::Gaming::Input::RawGameController *>>::`vftable';
    v4[3] = 1;
    if ( v6 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v6 + 8LL))(v6);
    *((_OWORD *)v5 + 1) = *(_OWORD *)a2;
    *((_QWORD *)v5 + 4) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)v5 = off_18016E598;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawInputProvider>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
