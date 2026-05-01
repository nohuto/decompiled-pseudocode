/*
 * XREFs of ?StartActivity@OnAltKeyUp@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x1802E91C4
 * Callers:
 *     ?OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ @ 0x1802E8A8C (-OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x1802B310C (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 *     ?zInternalStart@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802B3208 (-zInternalStart@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 */

void __fastcall XamlSwitcherTelemetry::OnAltKeyUp::StartActivity(
        XamlSwitcherTelemetry::OnAltKeyUp *this,
        unsigned __int8 a2)
{
  __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // rdi
  const GUID *v6; // rax
  DWORD CurrentThreadId; // [rsp+38h] [rbp-19h] BYREF
  int v8; // [rsp+3Ch] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  __int64 *v10; // [rsp+68h] [rbp+17h]
  int v11; // [rsp+70h] [rbp+1Fh]
  int v12; // [rsp+74h] [rbp+23h]
  DWORD *p_CurrentThreadId; // [rsp+78h] [rbp+27h]
  int v14; // [rsp+80h] [rbp+2Fh]
  int v15; // [rsp+84h] [rbp+33h]
  int *v16; // [rsp+88h] [rbp+37h]
  int v17; // [rsp+90h] [rbp+3Fh]
  int v18; // [rsp+94h] [rbp+43h]

  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v5 = (const struct _TlgProvider_t *)wil::details::static_lazy<XamlSwitcherLogging>::get(
                                        v4,
                                        (void (__cdecl *)())lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v5 > 5u )
  {
    v12 = 0;
    v10 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v11 = 8;
    v15 = 0;
    v18 = 0;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v8 = a2;
    v16 = &v8;
    v14 = 4;
    v17 = 4;
    v6 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v5, &unk_1804D6B80, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v6, 5u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((XamlSwitcherTelemetry::OnAltKeyUp *)((char *)this + 8));
}
