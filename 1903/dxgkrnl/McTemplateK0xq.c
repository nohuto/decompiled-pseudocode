/*
 * XREFs of McTemplateK0xq @ 0x1C003566C
 * Callers:
 *     ?CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z @ 0x1C00325B4 (-CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C00333A0 (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0033CA0 (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C00347E4 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C0034D2C (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C004A57C (-DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiCancelSuspendAdapterTimer @ 0x1C004A608 (DpiCancelSuspendAdapterTimer.c)
 *     DpiRequestDevicePowerIrp @ 0x1C004A86C (DpiRequestDevicePowerIrp.c)
 *     DpiSetDevicePowerTransitionState @ 0x1C004AEAC (DpiSetDevicePowerTransitionState.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C004C32C (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C004C358 (DpiMiracastEtwLogStopMiracastSessionStage.c)
 *     DpiDispatchCreate @ 0x1C00E8390 (DpiDispatchCreate.c)
 *     DpiDispatchInternalIoctl @ 0x1C00E8950 (DpiDispatchInternalIoctl.c)
 *     DxgkGetDeviceStateInternal @ 0x1C012F1F0 (DxgkGetDeviceStateInternal.c)
 *     DpiDispatchCleanupAndClose @ 0x1C013B380 (DpiDispatchCleanupAndClose.c)
 *     ?DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z @ 0x1C013E180 (-DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z.c)
 *     DpiDispatchPnp @ 0x1C013FE00 (DpiDispatchPnp.c)
 *     DpiDispatchIoctl @ 0x1C0145780 (DpiDispatchIoctl.c)
 *     DpiDispatchPower @ 0x1C01551A0 (DpiDispatchPower.c)
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 *     ?ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C01F608C (-ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z.c)
 *     DpiDispatchSystemControl @ 0x1C029DEC0 (DpiDispatchSystemControl.c)
 *     ?DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDATE@@@Z @ 0x1C02A8A88 (-DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDAT.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C02AA5C0 (DpiFdoThermalPassiveCooling.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C02AEF5C (DpiDxgkDdiRemoveDevice.c)
 *     DpiDxgkDdiStopDevice @ 0x1C02AF114 (DpiDxgkDdiStopDevice.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0001E14 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

ULONG McTemplateK0xq(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  va_list v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  va_list v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  va_copy(v8, va1);
  v10 = 0;
  v9 = 4;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&DxgkControlGuid_Context, a2, a3, 3u, &v4);
}
