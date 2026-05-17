/*
 * XREFs of RtlSystemTimeToLocalTime @ 0x18007A7F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x18009CDA0 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall RtlSystemTimeToLocalTime(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-38h]

  result = ZwQuerySystemInformation(3LL, v5, 48LL, 0LL);
  if ( (int)result >= 0 )
  {
    *a2 = *a1 - v6;
    return 0LL;
  }
  return result;
}
