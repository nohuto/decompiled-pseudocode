/*
 * XREFs of ??0WGIController@@QEAA@XZ @ 0x1800A8890
 * Callers:
 *     ??$MakeAndInitialize@VWGIController@@V1@AEAPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIGameInputServer@@PEAVWGIRawInputProvider@@@Details@WRL@Microsoft@@YAJPEAPEAVWGIController@@AEAPEAUIRawGameController@Input@Gaming@Windows@@$$QEAPEAUIRawInputClient@@$$QEAPEAUIMessageSession@@$$QEAPEAUIGameInputServer@@$$QEAPEAVWGIRawInputProvider@@@Z @ 0x1800A6E48 (--$MakeAndInitialize@VWGIController@@V1@AEAPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRaw.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

WGIController *__fastcall WGIController::WGIController(WGIController *this)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  WGIController *result; // rax
  _OWORD v6[4]; // [rsp+20h] [rbp-48h] BYREF

  *((_QWORD *)this + 7) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::`vftable'{for `Windows::Gaming::Input::Custom::IGameControllerInputSink'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::`vftable'{for `Windows::Gaming::Input::Custom::IGipGameControllerInputSink'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::`vftable'{for `Windows::Gaming::Input::Custom::IHidGameControllerInputSink'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &WGIController::`vftable'{for `Windows::Gaming::Input::Custom::IGameControllerInputSink'};
  *((_QWORD *)this + 1) = &WGIController::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>'};
  *((_QWORD *)this + 2) = &WGIController::`vftable'{for `Windows::Gaming::Input::Custom::IGipGameControllerInputSink'};
  *((_QWORD *)this + 3) = &WGIController::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>'};
  *((_QWORD *)this + 4) = &WGIController::`vftable'{for `Windows::Gaming::Input::Custom::IHidGameControllerInputSink'};
  *((_QWORD *)this + 5) = &WGIController::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 43) = 0;
  *((_QWORD *)this + 23) = 0LL;
  memset_0(v6, 0, sizeof(v6));
  v2 = v6[1];
  *((_OWORD *)this + 12) = v6[0];
  v3 = v6[2];
  *((_OWORD *)this + 13) = v2;
  v4 = v6[3];
  *((_OWORD *)this + 14) = v3;
  *((_OWORD *)this + 15) = v4;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  result = this;
  *((_BYTE *)this + 276) = 0;
  return result;
}
