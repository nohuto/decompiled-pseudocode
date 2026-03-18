/*
 * XREFs of RtlLocalTimeToSystemTime @ 0x1408CE0F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401C1310 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __stdcall RtlLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  NTSTATUS result; // eax
  _QWORD SystemInformation[6]; // [rsp+20h] [rbp-48h] BYREF

  memset(SystemInformation, 0, sizeof(SystemInformation));
  result = ZwQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL);
  if ( result >= 0 )
  {
    SystemTime->QuadPart = SystemInformation[2] + LocalTime->QuadPart;
    return 0;
  }
  return result;
}
