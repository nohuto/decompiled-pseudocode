/*
 * XREFs of ??0LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x1800116A4
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180012230 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180076D90 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ??0XamlLauncherState@@QEAA@XZ @ 0x180299BF0 (--0XamlLauncherState@@QEAA@XZ.c)
 * Callees:
 *     ??0?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180012698 (--0-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflector_ea_180012698.c)
 */

CommonStartTelemetry::LauncherInvokeActivity *__fastcall CommonStartTelemetry::LauncherInvokeActivity::LauncherInvokeActivity(
        CommonStartTelemetry::LauncherInvokeActivity *this)
{
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
  return this;
}
