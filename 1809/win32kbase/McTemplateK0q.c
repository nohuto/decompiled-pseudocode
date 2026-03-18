/*
 * XREFs of McTemplateK0q @ 0x1C00E945C
 * Callers:
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd @ 0x1C008D730 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin @ 0x1C008D750 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin.c)
 *     EtwTraceAuditApiRegisterRawInputDevices @ 0x1C008D820 (EtwTraceAuditApiRegisterRawInputDevices.c)
 *     EtwTracePowerOnMonitorEnd @ 0x1C00977F0 (EtwTracePowerOnMonitorEnd.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C0097940 (EtwTracPowerOnMonitoreBegin.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C00A4180 (EtwTraceWinlogonSleepStartEvent.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00A41A0 (EtwTraceWinlogonSleepEndEvent.c)
 *     EtwTracePowerOnGdiEnd @ 0x1C00A6340 (EtwTracePowerOnGdiEnd.c)
 *     EtwTracexxxUserResetDisplayDeviceEnd @ 0x1C00A6360 (EtwTracexxxUserResetDisplayDeviceEnd.c)
 *     EtwTracexxxUserResetDisplayDeviceBegin @ 0x1C00A6380 (EtwTracexxxUserResetDisplayDeviceBegin.c)
 *     EtwTracePowerOnGdiBegin @ 0x1C00A63A0 (EtwTracePowerOnGdiBegin.c)
 *     EtwTraceContactVisualizationInfo @ 0x1C00E6120 (EtwTraceContactVisualizationInfo.c)
 *     EtwTraceConvertibleState @ 0x1C00E61C0 (EtwTraceConvertibleState.c)
 *     EtwTraceDockState @ 0x1C00E6370 (EtwTraceDockState.c)
 *     EtwTraceEdgyDetectionStop @ 0x1C00E6430 (EtwTraceEdgyDetectionStop.c)
 *     EtwTracePointerDeviceTransformationStart @ 0x1C00E7CB0 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1C00E7CE0 (EtwTracePointerDeviceTransformationStop.c)
 *     EtwTracePointerPredictionStart @ 0x1C00E7D70 (EtwTracePointerPredictionStart.c)
 *     EtwTracePointerPredictionStop @ 0x1C00E7DA0 (EtwTracePointerPredictionStop.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C00E7E8C (EtwTraceScreenSaverProcessEvent.c)
 *     EtwTraceTouchPadConfidenceUpped @ 0x1C00E8190 (EtwTraceTouchPadConfidenceUpped.c)
 *     EtwTraceTouchPadTypeDiscovered @ 0x1C00E83A0 (EtwTraceTouchPadTypeDiscovered.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x1C0107EA0 (EtwTraceSPIBlockedByFiltering.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0050EB8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0q(struct _MCGEN_TRACE_CONTEXT *a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  v6 = &v9;
  v8 = 0;
  v7 = 4;
  return McGenEventWrite(a1, a2, (LPCGUID)&Context.Flags, 2u, &v5);
}
