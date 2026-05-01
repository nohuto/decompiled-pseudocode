/*
 * XREFs of ?OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ @ 0x1802E8A8C
 * Callers:
 *     ?AltTabHookProc@AltTabWindowHook@@CA_JH_K_J@Z @ 0x1802E82A0 (-AltTabHookProc@AltTabWindowHook@@CA_JH_K_J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802B042C (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??1?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802B0740 (--1-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802B1174 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802B2A84 (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_2e36a2b14ac9c065e7d81a4387bad0af___ @ 0x1802E6EC4 (CreationThreadDispatcher--RunAsync__lambda_2e36a2b14ac9c065e7d81a4387bad0af___.c)
 *     ?StartActivity@OnAltKeyUp@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x1802E91C4 (-StartActivity@OnAltKeyUp@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall XamlAltTabViewController::OnAltKeyUp(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // r14
  int v6; // eax
  int v7[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v8; // [rsp+30h] [rbp-D8h]
  __int64 v9; // [rsp+38h] [rbp-D0h]
  __int64 v10; // [rsp+40h] [rbp-C8h]
  __int64 v11; // [rsp+48h] [rbp-C0h]
  __int64 v12; // [rsp+50h] [rbp-B8h]
  _QWORD v13[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v9 = -2LL;
  v2 = *(_QWORD *)(a1 + 56);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v13,
    (__int64)"OnAltKeyUp");
  v13[0] = &XamlSwitcherTelemetry::OnAltKeyUp::`vftable';
  XamlSwitcherTelemetry::OnAltKeyUp::StartActivity((XamlSwitcherTelemetry::OnAltKeyUp *)v13, v2 != 0);
  if ( !*(_BYTE *)(a1 + 160) && *(_QWORD *)(a1 + 56) )
  {
    v3 = __abi_winrt_ptr_ctor(a1);
    v10 = v3;
    v4 = __abi_winrt_ptr_ctor(a1);
    v11 = v4;
    v5 = __abi_winrt_ptr_ctor(v3);
    v12 = v5;
    *(_QWORD *)v7 = __abi_winrt_ptr_ctor(v4);
    v8 = __abi_winrt_ptr_ctor(v5);
    v6 = CreationThreadDispatcher::RunAsync__lambda_2e36a2b14ac9c065e7d81a4387bad0af___(
           *(_QWORD *)(a1 + 88),
           (__int64 *)v7);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        139LL,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewcontroller.cpp",
        (const char *)(unsigned int)v6);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v13);
  v13[0] = &XamlSwitcherTelemetry::OnAltKeyUp::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v13);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v13);
}
