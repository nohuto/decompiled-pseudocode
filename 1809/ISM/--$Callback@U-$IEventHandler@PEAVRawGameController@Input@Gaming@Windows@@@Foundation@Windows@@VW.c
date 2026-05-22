/*
 * XREFs of ??$Callback@U?$IEventHandler@PEAVRawGameController@Input@Gaming@Windows@@@Foundation@Windows@@VWGIRawInputProvider@@PEAUIInspectable@@PEAUIRawGameController@Input@Gaming@3@@WRL@Microsoft@@YA?AV?$ComPtr@U?$IEventHandler@PEAVRawGameController@Input@Gaming@Windows@@@Foundation@Windows@@@01@PEAVWGIRawInputProvider@@P83@EAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z@Z @ 0x18006C570
 * Callers:
 *     ?StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x18006B80C (-StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback<Windows::Foundation::IEventHandler<Windows::Gaming::Input::RawGameController *>,WGIRawInputProvider,IInspectable *,Windows::Gaming::Input::IRawGameController *>(
        _QWORD *a1,
        __int64 a2,
        _OWORD *a3)
{
  _DWORD *v3; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v7; // rcx
  _QWORD *result; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-28h]

  *(_QWORD *)v9 = a2;
  v3 = 0LL;
  *(_OWORD *)&v9[8] = *a3;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    v7 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v5 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::Gaming::Input::RawGameController *>>::`vftable';
    v5[3] = 1;
    if ( v7 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v7 + 8LL))(v7);
    v3 = v6;
    *((_OWORD *)v6 + 1) = *(_OWORD *)v9;
    *(_QWORD *)v6 = off_18013C2F0;
    *((_QWORD *)v6 + 4) = *(_QWORD *)&v9[16];
  }
  result = a1;
  *a1 = v3;
  return result;
}
