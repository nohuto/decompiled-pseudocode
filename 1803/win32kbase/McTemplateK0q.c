/*
 * XREFs of McTemplateK0q @ 0x1C00ADFE8
 * Callers:
 *     EtwTraceAuditApiRegisterRawInputDevices @ 0x1C0013A80 (EtwTraceAuditApiRegisterRawInputDevices.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd @ 0x1C006D040 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd.c)
 *     EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin @ 0x1C006D060 (EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C00AB574 (EtwTracPowerOnMonitoreBegin.c)
 *     EtwTraceContactVisualizationInfo @ 0x1C00AB870 (EtwTraceContactVisualizationInfo.c)
 *     EtwTraceConvertibleState @ 0x1C00AB910 (EtwTraceConvertibleState.c)
 *     EtwTraceDockState @ 0x1C00ABCC0 (EtwTraceDockState.c)
 *     EtwTraceEdgyDetectionStop @ 0x1C00ABD80 (EtwTraceEdgyDetectionStop.c)
 *     EtwTracePointerDeviceTransformationStart @ 0x1C00AC4E0 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1C00AC510 (EtwTracePointerDeviceTransformationStop.c)
 *     EtwTracePointerPredictionStart @ 0x1C00AC5A0 (EtwTracePointerPredictionStart.c)
 *     EtwTracePointerPredictionStop @ 0x1C00AC5D0 (EtwTracePointerPredictionStop.c)
 *     EtwTracePowerOnGdiBegin @ 0x1C00AC660 (EtwTracePowerOnGdiBegin.c)
 *     EtwTracePowerOnGdiEnd @ 0x1C00AC690 (EtwTracePowerOnGdiEnd.c)
 *     EtwTracePowerOnMonitorEnd @ 0x1C00AC6B8 (EtwTracePowerOnMonitorEnd.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C00AC7A0 (EtwTraceScreenSaverProcessEvent.c)
 *     EtwTraceTouchPadConfidenceUpped @ 0x1C00ACAE0 (EtwTraceTouchPadConfidenceUpped.c)
 *     EtwTraceTouchPadTypeDiscovered @ 0x1C00ACD10 (EtwTraceTouchPadTypeDiscovered.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00AD3B0 (EtwTraceWinlogonSleepEndEvent.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C00AD3E0 (EtwTraceWinlogonSleepStartEvent.c)
 *     EtwTracexxxUserResetDisplayDeviceBegin @ 0x1C00AD410 (EtwTracexxxUserResetDisplayDeviceBegin.c)
 *     EtwTracexxxUserResetDisplayDeviceEnd @ 0x1C00AD440 (EtwTracexxxUserResetDisplayDeviceEnd.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x1C00DA200 (EtwTraceSPIBlockedByFiltering.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C00AD480 (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0q(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  v6 = &v9;
  v8 = 0;
  v7 = 4;
  return McGenEventWriteKM(a1, a2, &W32kControlGuid, 2u, &v5);
}
