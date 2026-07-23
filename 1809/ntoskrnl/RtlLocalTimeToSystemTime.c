/*
 * XREFs of RtlLocalTimeToSystemTime @ 0x140891770
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401B89B0 (ZwQuerySystemInformation.c)
 */

NTSTATUS __stdcall RtlLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  NTSTATUS result; // eax
  _BYTE SystemInformation[16]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-38h]

  result = ZwQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL);
  if ( result >= 0 )
  {
    SystemTime->QuadPart = v6 + LocalTime->QuadPart;
    return 0;
  }
  return result;
}
