/*
 * XREFs of sub_1800F6E14 @ 0x1800F6E14
 * Callers:
 *     sub_1800F7234 @ 0x1800F7234 (sub_1800F7234.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x18009C900 (ZwQueryInformationFile.c)
 */

NTSTATUS __fastcall sub_1800F6E14(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  _BYTE FileInformation[8]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+48h] [rbp-20h]

  result = ZwQueryInformationFile(a1, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  if ( result >= 0 )
  {
    *a2 = v6;
    return 0;
  }
  return result;
}
