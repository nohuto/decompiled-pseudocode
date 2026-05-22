/*
 * XREFs of Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController_____ptr64_Windows::System::UserChangedEventArgs_____ptr64___lambda_03b1f35a5530b3ed62fc5b4204ace512___ @ 0x18006FB8C
 * Callers:
 *     ?NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z @ 0x18006D878 (-NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController_____ptr64_Windows::System::UserChangedEventArgs_____ptr64___lambda_03b1f35a5530b3ed62fc5b4204ace512___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v7; // rcx
  _QWORD *result; // rax

  v2 = 0LL;
  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    v7 = Microsoft::WRL::Details::ModuleBase::module_;
    *v5 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Gaming::Input::IGameController *,Windows::System::UserChangedEventArgs *>>::`vftable';
    *((_DWORD *)v5 + 3) = 1;
    if ( v7 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v7 + 8LL))(v7);
    v6[2] = 0LL;
    if ( v6 + 2 != a2 )
    {
      v6[2] = *a2;
      *a2 = 0LL;
    }
    v2 = v6;
    *v6 = off_18013C4C0;
  }
  result = a1;
  *a1 = v2;
  return result;
}
