/*
 * XREFs of RtlSystemTimeToLocalTime @ 0x14075EC40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401B8830 (ZwQuerySystemInformation.c)
 */

NTSTATUS __stdcall RtlSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  NTSTATUS result; // eax
  _BYTE SystemInformation[16]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-38h]

  result = ZwQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL);
  if ( result >= 0 )
  {
    LocalTime->QuadPart = SystemTime->QuadPart - v6;
    return 0;
  }
  return result;
}
