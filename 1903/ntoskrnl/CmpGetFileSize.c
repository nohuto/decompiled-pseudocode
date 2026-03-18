/*
 * XREFs of CmpGetFileSize @ 0x140660D44
 * Callers:
 *     CmpInitializeActualFileSizes @ 0x140660C30 (CmpInitializeActualFileSizes.c)
 *     CmpLoadHiveThread @ 0x140757530 (CmpLoadHiveThread.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1401C02F0 (ZwQueryInformationFile.c)
 */

NTSTATUS __fastcall CmpGetFileSize(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK v4; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+48h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v4.Pointer = 0LL;
  v4.Information = 0LL;
  result = ZwQueryInformationFile(a1, &v4, &v5, 0x18u, FileStandardInformation);
  if ( result >= 0 )
  {
    *a2 = v6;
    return 0;
  }
  return result;
}
