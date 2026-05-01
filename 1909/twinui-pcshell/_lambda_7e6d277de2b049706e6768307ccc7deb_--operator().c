/*
 * XREFs of _lambda_7e6d277de2b049706e6768307ccc7deb_::operator() @ 0x1802F731C
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_7e6d277de2b049706e6768307ccc7deb__void_::Invoke @ 0x1802F8D10 (Platform--Details--__abi_FunctorCapture__lambda_7e6d277de2b049706e6768307ccc7deb__void_--Invoke.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18003B698 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180090190 (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802D1FA4 (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x1802D262C (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802D2E40 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802D2F28 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ @ 0x1802DABF8 (-get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_7e6d277de2b049706e6768307ccc7deb_::operator()(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 (__fastcall ***v5)(_QWORD, __int64, __int64 *); // rbx
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // rdi
  int v8; // eax
  bool v9; // [rsp+38h] [rbp-59h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, __int64, __int64 *); // [rsp+40h] [rbp-51h]
  __int64 v11; // [rsp+48h] [rbp-49h]
  __int64 v12; // [rsp+50h] [rbp-41h]
  LPVOID v13[4]; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v14[24]; // [rsp+78h] [rbp-19h] BYREF
  int v15; // [rsp+90h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp+17h] BYREF
  bool *v17; // [rsp+C8h] [rbp+37h]
  int v18; // [rsp+D0h] [rbp+3Fh]
  int v19; // [rsp+D4h] [rbp+43h]

  v11 = -2LL;
  v2 = (__int64)(a1 + 1);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 1),
    (wil::ActivityThreadWatcher *)v13);
  v3 = Windows::UI::Xaml::IWindow::Content::get(*a1);
  v5 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(v3);
  v10 = v5;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v9 = v5 != 0LL;
  v6 = (const struct _TlgProvider_t *)wil::details::static_lazy<XamlSwitcherLogging>::get(
                                        v4,
                                        (void (__cdecl *)())lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v6 > 5u )
  {
    v17 = &v9;
    v18 = 1;
    v19 = 0;
    TlgWrite(v6, &unk_1804FC709, (LPCGUID)(*(_QWORD *)(v2 + 48) + 8LL), 0LL, 3u, &pData);
  }
  if ( v5 )
  {
    v7 = __abi_winrt_cast_to(0, v5, (__int64)&_uuidof__AVAltTab_Switcher_Experiences_ComposableShell_WindowsInternal__);
    v12 = v7;
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 120LL))(v7);
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v2);
  if ( v5 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v5)[2])(v5);
  if ( v15 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v14);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v13);
}
