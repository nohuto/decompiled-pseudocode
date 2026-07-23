/*
 * XREFs of DbgkpWerWriteTriageDump @ 0x140814388
 * Callers:
 *     DbgkpWerCaptureLiveTriageDump @ 0x140813A9C (DbgkpWerCaptureLiveTriageDump.c)
 * Callees:
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     ZwWriteFile @ 0x1401B83F0 (ZwWriteFile.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     DbgkpWerUpdateTriageDumpHeader @ 0x140814188 (DbgkpWerUpdateTriageDumpHeader.c)
 *     DbgkpWerWriteSecondaryData @ 0x140814234 (DbgkpWerWriteSecondaryData.c)
 */

__int64 __fastcall DbgkpWerWriteTriageDump(__int64 a1)
{
  int v2; // eax
  int updated; // ebx
  NTSTATUS v4; // eax
  NTSTATUS v5; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp+8h] BYREF

  FileHandle = 0LL;
  v2 = WerLiveKernelOpenDumpFile(*(_QWORD *)(a1 + 104), &FileHandle);
  updated = v2;
  if ( v2 >= 0 )
  {
    updated = DbgkpWerUpdateTriageDumpHeader(a1);
    if ( updated >= 0 )
    {
      v4 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, *(PVOID *)(a1 + 144), *(_DWORD *)(a1 + 152), 0LL, 0LL);
      updated = v4;
      if ( v4 >= 0 )
      {
        v5 = DbgkpWerWriteSecondaryData(a1, FileHandle);
        updated = v5;
        if ( v5 < 0 )
          DbgPrintEx(5u, 0, "DBGK: Writing secondary data failed with Status 0x%X\n", (unsigned int)v5);
      }
      else
      {
        DbgPrintEx(5u, 0, "DBGK: Triage dump write failed with Status 0x%X\n", (unsigned int)v4);
      }
    }
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: DbgkWerWriteTriageDump: WerLiveKernelOpenDumpFile failed, status 0x%X\n", (unsigned int)v2);
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)updated;
}
