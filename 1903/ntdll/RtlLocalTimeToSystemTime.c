/*
 * XREFs of RtlLocalTimeToSystemTime @ 0x1800E4220
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x18009CDA0 (ZwQuerySystemInformation.c)
 */

NTSTATUS __stdcall RtlLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  NTSTATUS result; // eax
  __int64 v5; // [rsp+30h] [rbp-38h]

  result = ZwQuerySystemInformation();
  if ( result >= 0 )
  {
    SystemTime->QuadPart = v5 + LocalTime->QuadPart;
    return 0;
  }
  return result;
}
