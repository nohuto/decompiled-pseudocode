/*
 * XREFs of ACPIThermalRereadTemperature @ 0x1C005DE58
 * Callers:
 *     AcpiDiagThermalPollingTimerRoutine @ 0x1C0047BA0 (AcpiDiagThermalPollingTimerRoutine.c)
 * Callees:
 *     ACPIThermalLoopEx @ 0x1C0012518 (ACPIThermalLoopEx.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qssdddd @ 0x1C005E328 (WPP_RECORDER_SF_qssdddd.c)
 */

void __fastcall ACPIThermalRereadTemperature(__int64 a1)
{
  union _LARGE_INTEGER v2; // [rsp+60h] [rbp-28h] BYREF
  struct _TIME_FIELDS v3; // [rsp+68h] [rbp-20h] BYREF

  v2.QuadPart = MEMORY[0xFFFFF78000000008];
  RtlTimeToTimeFields(&v2, &v3);
  WPP_RECORDER_SF_qssdddd(WPP_GLOBAL_Control->DeviceExtension, v3.Second, v3.Minute, v3.Hour);
  ACPIThermalLoopEx(a1, 536870914, 0);
}
