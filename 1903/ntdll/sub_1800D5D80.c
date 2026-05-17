/*
 * XREFs of sub_1800D5D80 @ 0x1800D5D80
 * Callers:
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x18009CDA0 (ZwQuerySystemInformation.c)
 */

__int64 sub_1800D5D80()
{
  __int64 result; // rax
  unsigned int v1; // [rsp+28h] [rbp-50h]
  unsigned int v2; // [rsp+38h] [rbp-40h]
  __int64 v3; // [rsp+48h] [rbp-30h]

  qword_180165010 = 0LL;
  result = ZwQuerySystemInformation();
  if ( (int)result >= 0 )
  {
    qword_180165018 = v1;
    qword_180165008 = v2;
    qword_180165020 = v3;
    return 0LL;
  }
  return result;
}
