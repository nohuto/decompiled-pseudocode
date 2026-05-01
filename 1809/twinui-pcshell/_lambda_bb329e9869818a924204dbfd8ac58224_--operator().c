/*
 * XREFs of _lambda_bb329e9869818a924204dbfd8ac58224_::operator() @ 0x18027F22C
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_bb329e9869818a924204dbfd8ac58224__void_::Invoke @ 0x180280140 (Platform--Details--__abi_FunctorCapture__lambda_bb329e9869818a924204dbfd8ac58224__void_--Invoke.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18008B0EC (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18025B7BC (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ @ 0x180262C48 (-get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ.c)
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x18027C31C (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18028151C (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_bb329e9869818a924204dbfd8ac58224_::operator()(int *a1)
{
  int *v2; // r14
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 (__fastcall ***v5)(_QWORD, __int64, __int64 *); // rdi
  const struct _TlgProvider_t *v6; // rcx
  int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // eax
  bool v11; // [rsp+38h] [rbp-69h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, __int64, __int64 *); // [rsp+40h] [rbp-61h]
  __int64 v13; // [rsp+48h] [rbp-59h]
  __int64 v14; // [rsp+50h] [rbp-51h]
  LPVOID v15[4]; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v16[24]; // [rsp+78h] [rbp-29h] BYREF
  int v17; // [rsp+90h] [rbp-11h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp+7h] BYREF
  bool *v19; // [rsp+C8h] [rbp+27h]
  int v20; // [rsp+D0h] [rbp+2Fh]
  int v21; // [rsp+D4h] [rbp+33h]

  v13 = -2LL;
  v2 = a1 + 4;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 4),
    (wil::ActivityThreadWatcher *)v15);
  v3 = Windows::UI::Xaml::IWindow::Content::get(*((_QWORD *)a1 + 1));
  v5 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(v3);
  v12 = v5;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v11 = v5 != 0LL;
  v6 = (const struct _TlgProvider_t *)wil::details::static_lazy<XamlSwitcherLogging>::get(
                                        v4,
                                        (void (__cdecl *)())lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v6 > 5u )
  {
    v19 = &v11;
    v20 = 1;
    v21 = 0;
    TlgWrite(v6, &unk_18046040B, (LPCGUID)(*((_QWORD *)v2 + 6) + 8LL), 0LL, 3u, &pData);
  }
  if ( v5 )
  {
    v7 = *a1;
    v8 = __abi_winrt_cast_to(0, v5, (__int64)&_uuidof__AVAltTab_Switcher_Experiences_ComposableShell_WindowsInternal__);
    v14 = v8;
    LOBYTE(v9) = v7 == 6;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 112LL))(v8, v9);
    if ( v10 < 0 )
      __abi_WinRTraiseException(v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v2);
  if ( v5 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v5)[2])(v5);
  if ( v17 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v16);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v15);
}
