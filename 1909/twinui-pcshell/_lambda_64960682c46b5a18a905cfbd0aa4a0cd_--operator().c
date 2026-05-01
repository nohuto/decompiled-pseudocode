/*
 * XREFs of _lambda_64960682c46b5a18a905cfbd0aa4a0cd_::operator() @ 0x1802DBB84
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_64960682c46b5a18a905cfbd0aa4a0cd__void_::Invoke @ 0x1802DC290 (Platform--Details--__abi_FunctorCapture__lambda_64960682c46b5a18a905cfbd0aa4a0cd__void_--Invoke.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802CF90C (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??1?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802CFC20 (--1-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802D0654 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802D1FA4 (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?StartActivity@RunWindowCallback@XamlExplorerHostTelemetry@@QEAAXXZ @ 0x1802DC630 (-StartActivity@RunWindowCallback@XamlExplorerHostTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_64960682c46b5a18a905cfbd0aa4a0cd_::operator()(__int64 a1)
{
  _QWORD v2[40]; // [rsp+30h] [rbp-158h] BYREF

  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v2,
    (__int64)"RunWindowCallback");
  v2[0] = &XamlExplorerHostTelemetry::RunWindowCallback::`vftable';
  XamlExplorerHostTelemetry::RunWindowCallback::StartActivity((XamlExplorerHostTelemetry::RunWindowCallback *)v2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16), *(_QWORD *)a1);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v2);
  v2[0] = &XamlExplorerHostTelemetry::RunWindowCallback::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v2);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v2);
}
