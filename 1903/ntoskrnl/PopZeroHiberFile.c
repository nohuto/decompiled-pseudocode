/*
 * XREFs of PopZeroHiberFile @ 0x1408A86CC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopEnableHiberFile @ 0x14074AAD0 (PopEnableHiberFile.c)
 * Callees:
 *     MmZeroPageWrite @ 0x1400FCF78 (MmZeroPageWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1401C02F0 (ZwQueryInformationFile.c)
 *     PopDiagTraceZeroHiberFile @ 0x1405ADE64 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x1405ADE80 (PopDiagTraceZeroHiberFileEnd.c)
 */

void __fastcall PopZeroHiberFile(HANDLE FileHandle, __int64 a2)
{
  __int64 v4; // rcx
  signed __int64 v5; // rax
  signed __int64 v6; // [rsp+30h] [rbp-40h] BYREF
  __int64 v7; // [rsp+38h] [rbp-38h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  _QWORD FileInformation[3]; // [rsp+50h] [rbp-20h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(FileInformation, 0, sizeof(FileInformation));
  PopDiagTraceZeroHiberFile();
  if ( ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation) >= 0 )
  {
    v6 = 0LL;
    v4 = FileInformation[0];
    v5 = 0LL;
    do
    {
      v7 = v4 - v5;
      if ( (int)MmZeroPageWrite(a2, (__int64)&v6, &v7, 0x10000u) >= 0 )
        break;
      v4 = FileInformation[0];
      v5 = (v6 & 0xFFFFFFFFFFFF0000uLL) + 0x10000;
      v6 = v5;
    }
    while ( v5 < FileInformation[0] );
  }
  PopDiagTraceZeroHiberFileEnd();
}
