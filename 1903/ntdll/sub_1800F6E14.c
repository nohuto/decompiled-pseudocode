/*
 * XREFs of sub_1800F6E14 @ 0x1800F6E14
 * Callers:
 *     sub_1800F7234 @ 0x1800F7234 (sub_1800F7234.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x18009C900 (ZwQueryInformationFile.c)
 */

__int64 __fastcall sub_1800F6E14(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+48h] [rbp-20h]

  result = ZwQueryInformationFile();
  if ( (int)result >= 0 )
  {
    *a2 = v4;
    return 0LL;
  }
  return result;
}
