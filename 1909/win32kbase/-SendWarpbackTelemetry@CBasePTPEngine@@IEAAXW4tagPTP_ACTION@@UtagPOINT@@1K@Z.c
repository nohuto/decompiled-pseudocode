/*
 * XREFs of ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1C0196F84
 * Callers:
 *     ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x1C01932EC (-DoTPButtonWarpBack@CPTPEngine@@AEAA-AUtagPOINT@@PEAUPTPInput@@@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C01938F8 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 * Callees:
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0196ED4 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

void *__fastcall CBasePTPEngine::SendWarpbackTelemetry(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  _BYTE v10[28]; // [rsp+20h] [rbp-40h]
  __int128 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]

  v11 = a2;
  v12 = 0LL;
  CBasePTPEngine::SendTelemetryOutput(a1, 4, (__int64)&v11);
  *(_QWORD *)&v10[12] = a4;
  *(_DWORD *)&v10[20] = a5;
  *(_DWORD *)v10 = a2;
  *(_QWORD *)&v10[4] = a3;
  v12 = *(_QWORD *)&v10[16];
  v11 = *(_OWORD *)v10;
  return CBasePTPEngine::SendTelemetryOutput(a1, 7, (__int64)&v11);
}
