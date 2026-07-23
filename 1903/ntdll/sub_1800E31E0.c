/*
 * XREFs of sub_1800E31E0 @ 0x1800E31E0
 * Callers:
 *     LdrResSearchResource @ 0x180056760 (LdrResSearchResource.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x18009C900 (ZwQueryInformationFile.c)
 */

NTSTATUS __fastcall sub_1800E31E0(char *a1)
{
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  _BYTE FileInformation[40]; // [rsp+40h] [rbp-38h] BYREF

  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return -1073741816;
  else
    return ZwQueryInformationFile(a1, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
}
