/*
 * XREFs of ?NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z @ 0x18006D878
 * Callers:
 *     ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x18006B260 (-OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Inp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006C0E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerIn.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006C190 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInp.c)
 *     ?ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z @ 0x18006DC48 (-ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z.c)
 *     ?NotifyDeviceAttach@WGIController@@AEAAJPEAUIRawInputProvider@@@Z @ 0x18006EBD0 (-NotifyDeviceAttach@WGIController@@AEAAJPEAUIRawInputProvider@@@Z.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController_____ptr64_Windows::System::UserChangedEventArgs_____ptr64___lambda_03b1f35a5530b3ed62fc5b4204ace512___ @ 0x18006FB8C (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Gaming--Input--IGameCo.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WGIController::NotifyAttachedAndStart(WGIController *this, struct IRawInputProvider *a2)
{
  _DWORD *v4; // rbx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // r9
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  _QWORD *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  _QWORD *v17; // [rsp+60h] [rbp+30h] BYREF
  volatile signed __int64 *v18; // [rsp+70h] [rbp+40h] BYREF
  __int64 v19; // [rsp+78h] [rbp+48h] BYREF

  if ( !*((_QWORD *)this + 21) )
  {
    v4 = operator new(0x3D8uLL);
    v17 = v4;
    memset_0(v4, 0, 0x3D8uLL);
    v4[2] = 984;
    *((_QWORD *)this + 21) = v4;
    **((_DWORD **)this + 21) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12));
    *(_DWORD *)(*((_QWORD *)this + 21) + 4LL) = *((_DWORD *)this + 41);
    *(_DWORD *)(*((_QWORD *)this + 21) + 8LL) = 984;
    v5 = WGIController::NotifyDeviceAttach(this, a2);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x17C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v5);
      JUMPOUT(0x18006DACCLL);
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, WGIController *))(**((_QWORD **)this + 8) + 160LL))(
           *((_QWORD *)this + 8),
           this);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x17D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
  }
  if ( !*((_QWORD *)this + 9) )
    return 0LL;
  v17 = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::AddRef((__int64)this);
  v18 = (volatile signed __int64 *)this;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::AddRef((__int64)this);
  Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController_____ptr64_Windows::System::UserChangedEventArgs_____ptr64___lambda_03b1f35a5530b3ed62fc5b4204ace512___(
    &v19,
    &v18);
  if ( v18 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v18);
  v7 = v19;
  if ( v19 )
  {
    v11 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
    }
    v12 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD **))this + 9))(
            *((_QWORD *)this + 9),
            &GUID_1baf6522_5f64_42c5_8267_b9fe2215bfbd,
            &v17);
    v8 = v12;
    if ( v12 < 0 )
    {
      v10 = 397LL;
LABEL_15:
      v9 = (unsigned int)v12;
      goto LABEL_16;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD *, __int64, char *))(*v17 + 80LL))(v17, v7, (char *)this + 248);
    v8 = v12;
    if ( v12 < 0 )
    {
      v10 = 398LL;
      goto LABEL_15;
    }
    WGIController::ApplyUserSettingsForController(this, 0LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release((volatile signed __int64 *)this);
    v15 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
    }
    return 0LL;
  }
  v8 = -2147024882;
  v9 = 2147942414LL;
  v10 = 395LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
    (const char *)v9);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release((volatile signed __int64 *)this);
  v13 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v13 + 16LL))(v13, *v13);
  }
  return v8;
}
