/*
 * XREFs of PopValidateExistingHiberFile @ 0x14074A868
 * Callers:
 *     PopCreateHiberFile @ 0x14074A544 (PopCreateHiberFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1401C02F0 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1401C05B0 (ZwSetInformationFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall PopValidateExistingHiberFile(HANDLE FileHandle, __int64 *a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-9h] BYREF
  _QWORD FileInformation[2]; // [rsp+48h] [rbp+7h] BYREF
  __int64 v7; // [rsp+58h] [rbp+17h]
  _DWORD v8[10]; // [rsp+60h] [rbp+1Fh] BYREF

  FileInformation[0] = 0LL;
  FileInformation[1] = 0LL;
  v7 = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  result = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  if ( result >= 0 )
  {
    if ( BYTE5(v7) || FileInformation[0] < *a2 || (unsigned int)v7 > 1 )
      result = -1073741823;
    if ( result >= 0 )
    {
      memset(v8, 0, sizeof(v8));
      v8[8] = 8198;
      result = ZwSetInformationFile(FileHandle, &IoStatusBlock, v8, 0x28u, FileBasicInformation);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
