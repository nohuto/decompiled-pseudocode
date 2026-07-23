/*
 * XREFs of sub_1800D5D80 @ 0x1800D5D80
 * Callers:
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x18009CDA0 (ZwQuerySystemInformation.c)
 */

NTSTATUS sub_1800D5D80()
{
  NTSTATUS result; // eax
  _BYTE SystemInformation[8]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v2; // [rsp+28h] [rbp-50h]
  unsigned int v3; // [rsp+38h] [rbp-40h]
  __int64 v4; // [rsp+48h] [rbp-30h]

  stru_180165010.Ptr = 0LL;
  result = ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    qword_180165018 = v2;
    qword_180165008 = v3;
    qword_180165020 = v4;
    return 0;
  }
  return result;
}
