/*
 * XREFs of RtlpGetFileSize @ 0x1800F92BC
 * Callers:
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800F9620 (RtlpOpenAndMapCustomCultureFile.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtQueryInformationFile @ 0x1800A0520 (NtQueryInformationFile.c)
 */

NTSTATUS __fastcall RtlpGetFileSize(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  _BYTE FileInformation[8]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+48h] [rbp-20h]

  result = NtQueryInformationFile(a1, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  if ( result >= 0 )
  {
    *a2 = v6;
    return 0;
  }
  return result;
}
