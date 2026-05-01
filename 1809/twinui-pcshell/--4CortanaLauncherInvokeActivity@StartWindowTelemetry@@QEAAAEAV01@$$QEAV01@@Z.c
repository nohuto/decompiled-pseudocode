/*
 * XREFs of ??4CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802A2600
 * Callers:
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x1802A2740 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180012668 (--0-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflector_ea_180012668.c)
 *     ??4?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800128C0 (--4-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflector_ea_1800128C0.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x180299F80 (--1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall StartWindowTelemetry::CortanaLauncherInvokeActivity::operator=(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v6[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    v6,
    a1,
    a3);
  v6[0] = (volatile signed __int32 *)&StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1,
    a2);
  StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity(v6);
  return a1;
}
