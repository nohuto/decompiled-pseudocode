/*
 * XREFs of DrvDxgkWriteDiagEntry @ 0x1C004BB20
 * Callers:
 *     LogDiagSDC @ 0x1C004B714 (LogDiagSDC.c)
 *     ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C004B7FC (-LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKH.c)
 *     DrvLogDiagDisplayChange @ 0x1C004BA80 (DrvLogDiagDisplayChange.c)
 *     xxxUserChangeDisplaySettings @ 0x1C004C7F0 (xxxUserChangeDisplaySettings.c)
 *     PowerDimUndimResend @ 0x1C006D7D4 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x1C00A466C (PowerDimMonitor.c)
 *     PowerUnDimMonitor @ 0x1C00A5200 (PowerUnDimMonitor.c)
 *     ?SetMonitorBrightness@@YAJU_LUID@@IIIPEAUBRIGHTNESS_SENSOR_DATA@@@Z @ 0x1C00D2D8C (-SetMonitorBrightness@@YAJU_LUID@@IIIPEAUBRIGHTNESS_SENSOR_DATA@@@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00D4800 (DrvDxgkLogCodePointPacket.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvDxgkWriteDiagEntry()
{
  return ((__int64 (*)(void))qword_1C01A1AC8)();
}
