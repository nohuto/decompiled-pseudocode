/*
 * XREFs of ??4CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180319DF4
 * Callers:
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180319F34 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18005FA28 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto_ea_18005FA28.c)
 *     ??4?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005FBBC (--4-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto_ea_18005FBBC.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x18031129C (--1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 */

_QWORD *__fastcall StartWindowTelemetry::CortanaLauncherInvokeActivity::operator=(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD v6[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    v6,
    (__int64)a1,
    a3);
  v6[0] = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1,
    a2);
  StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity((StartWindowTelemetry::CortanaLauncherInvokeActivity *)v6);
  return a1;
}
