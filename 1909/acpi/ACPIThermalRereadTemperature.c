/*
 * XREFs of ACPIThermalRereadTemperature @ 0x1C005FD04
 * Callers:
 *     AcpiDiagThermalPollingTimerRoutine @ 0x1C0049210 (AcpiDiagThermalPollingTimerRoutine.c)
 * Callees:
 *     ACPIThermalLoopEx @ 0x1C0008C54 (ACPIThermalLoopEx.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qssdddd @ 0x1C00601E8 (WPP_RECORDER_SF_qssdddd.c)
 */

void __fastcall ACPIThermalRereadTemperature(__int64 a1)
{
  union _LARGE_INTEGER v2; // [rsp+60h] [rbp-28h] BYREF
  struct _TIME_FIELDS v3; // [rsp+68h] [rbp-20h] BYREF

  *(_QWORD *)&v3.Year = 0LL;
  *(_QWORD *)&v3.Minute = 0LL;
  v2.QuadPart = MEMORY[0xFFFFF78000000008];
  RtlTimeToTimeFields(&v2, &v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qssdddd(WPP_GLOBAL_Control->DeviceExtension, v3.Second, v3.Minute, v3.Hour);
  ACPIThermalLoopEx(a1, 536870914, 0);
}
