/*
 * XREFs of McTemplateK0q @ 0x1C010FAEC
 * Callers:
 *     EtwTracePowerOnMonitorEnd @ 0x1C005B67C (EtwTracePowerOnMonitorEnd.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C005B7E0 (EtwTracPowerOnMonitoreBegin.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd @ 0x1C00A18C0 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin @ 0x1C00A18E0 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin.c)
 *     EtwTraceAuditApiRegisterRawInputDevices @ 0x1C00A2400 (EtwTraceAuditApiRegisterRawInputDevices.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C00A9210 (EtwTraceWinlogonSleepStartEvent.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00A9900 (EtwTraceWinlogonSleepEndEvent.c)
 *     EtwTracePowerOnGdiEnd @ 0x1C00BABE0 (EtwTracePowerOnGdiEnd.c)
 *     EtwTracexxxUserResetDisplayDeviceEnd @ 0x1C00BAED0 (EtwTracexxxUserResetDisplayDeviceEnd.c)
 *     EtwTracexxxUserResetDisplayDeviceBegin @ 0x1C00BAEF0 (EtwTracexxxUserResetDisplayDeviceBegin.c)
 *     EtwTracePowerOnGdiBegin @ 0x1C00BAF10 (EtwTracePowerOnGdiBegin.c)
 *     EtwTraceContactVisualizationInfo @ 0x1C010D6F0 (EtwTraceContactVisualizationInfo.c)
 *     EtwTraceConvertibleState @ 0x1C010D750 (EtwTraceConvertibleState.c)
 *     EtwTraceDockState @ 0x1C010D900 (EtwTraceDockState.c)
 *     EtwTraceEdgyDetectionStop @ 0x1C010D9C0 (EtwTraceEdgyDetectionStop.c)
 *     EtwTracePointerDeviceTransformationStart @ 0x1C010E270 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1C010E2A0 (EtwTracePointerDeviceTransformationStop.c)
 *     EtwTracePointerPredictionStart @ 0x1C010E330 (EtwTracePointerPredictionStart.c)
 *     EtwTracePointerPredictionStop @ 0x1C010E360 (EtwTracePointerPredictionStop.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C010E44C (EtwTraceScreenSaverProcessEvent.c)
 *     EtwTraceTouchPadConfidenceUpped @ 0x1C010E750 (EtwTraceTouchPadConfidenceUpped.c)
 *     EtwTraceTouchPadTypeDiscovered @ 0x1C010E960 (EtwTraceTouchPadTypeDiscovered.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x1C0132150 (EtwTraceSPIBlockedByFiltering.c)
 * Callees:
 *     McGenEventWrite @ 0x1C006C7F8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
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
