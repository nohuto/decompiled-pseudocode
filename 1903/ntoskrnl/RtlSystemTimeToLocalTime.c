/*
 * XREFs of RtlSystemTimeToLocalTime @ 0x140784600
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401C0790 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __stdcall RtlSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  NTSTATUS result; // eax
  _QWORD SystemInformation[6]; // [rsp+20h] [rbp-48h] BYREF

  memset(SystemInformation, 0, sizeof(SystemInformation));
  result = ZwQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL);
  if ( result >= 0 )
  {
    LocalTime->QuadPart = SystemTime->QuadPart - SystemInformation[2];
    return 0;
  }
  return result;
}
