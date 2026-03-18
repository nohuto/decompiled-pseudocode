/*
 * XREFs of McTemplateK0q @ 0x1C010D17C
 * Callers:
 *     EtwTracePowerOnMonitorEnd @ 0x1C0066C9C (EtwTracePowerOnMonitorEnd.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C0066E00 (EtwTracPowerOnMonitoreBegin.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd @ 0x1C00A0770 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin @ 0x1C00A0790 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin.c)
 *     EtwTraceAuditApiRegisterRawInputDevices @ 0x1C00A1380 (EtwTraceAuditApiRegisterRawInputDevices.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C00A8460 (EtwTraceWinlogonSleepStartEvent.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00A8A40 (EtwTraceWinlogonSleepEndEvent.c)
 *     EtwTracePowerOnGdiEnd @ 0x1C00B7B80 (EtwTracePowerOnGdiEnd.c)
 *     EtwTracexxxUserResetDisplayDeviceEnd @ 0x1C00B7E70 (EtwTracexxxUserResetDisplayDeviceEnd.c)
 *     EtwTracexxxUserResetDisplayDeviceBegin @ 0x1C00B7E90 (EtwTracexxxUserResetDisplayDeviceBegin.c)
 *     EtwTracePowerOnGdiBegin @ 0x1C00B7EB0 (EtwTracePowerOnGdiBegin.c)
 *     EtwTraceContactVisualizationInfo @ 0x1C010AD80 (EtwTraceContactVisualizationInfo.c)
 *     EtwTraceConvertibleState @ 0x1C010ADE0 (EtwTraceConvertibleState.c)
 *     EtwTraceDockState @ 0x1C010AF90 (EtwTraceDockState.c)
 *     EtwTraceEdgyDetectionStop @ 0x1C010B050 (EtwTraceEdgyDetectionStop.c)
 *     EtwTracePointerDeviceTransformationStart @ 0x1C010B900 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1C010B930 (EtwTracePointerDeviceTransformationStop.c)
 *     EtwTracePointerPredictionStart @ 0x1C010B9C0 (EtwTracePointerPredictionStart.c)
 *     EtwTracePointerPredictionStop @ 0x1C010B9F0 (EtwTracePointerPredictionStop.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C010BADC (EtwTraceScreenSaverProcessEvent.c)
 *     EtwTraceTouchPadConfidenceUpped @ 0x1C010BDE0 (EtwTraceTouchPadConfidenceUpped.c)
 *     EtwTraceTouchPadTypeDiscovered @ 0x1C010BFF0 (EtwTraceTouchPadTypeDiscovered.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x1C012FAB0 (EtwTraceSPIBlockedByFiltering.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0058898 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
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
