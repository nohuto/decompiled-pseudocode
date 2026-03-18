/*
 * XREFs of DbgkpWerWriteTriageDump @ 0x14084C2E8
 * Callers:
 *     DbgkpWerCaptureLiveTriageDump @ 0x14084B9E8 (DbgkpWerCaptureLiveTriageDump.c)
 * Callees:
 *     DbgPrintEx @ 0x140126B10 (DbgPrintEx.c)
 *     ZwWriteFile @ 0x1401C0D50 (ZwWriteFile.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     DbgkpWerUpdateTriageDumpHeader @ 0x14084C0E0 (DbgkpWerUpdateTriageDumpHeader.c)
 *     DbgkpWerWriteSecondaryData @ 0x14084C174 (DbgkpWerWriteSecondaryData.c)
 */

__int64 __fastcall DbgkpWerWriteTriageDump(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int updated; // ebx
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp+8h] BYREF

  FileHandle = 0LL;
  v2 = *(_QWORD *)(a1 + 104);
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  v3 = WerLiveKernelOpenDumpFile(v2, &FileHandle);
  updated = v3;
  if ( v3 >= 0 )
  {
    updated = DbgkpWerUpdateTriageDumpHeader(a1);
    if ( updated >= 0 )
    {
      v5 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, *(PVOID *)(a1 + 144), *(_DWORD *)(a1 + 152), 0LL, 0LL);
      updated = v5;
      if ( v5 >= 0 )
      {
        v6 = DbgkpWerWriteSecondaryData(a1, FileHandle);
        updated = v6;
        if ( v6 < 0 )
          DbgPrintEx(5u, 0, "DBGK: Writing secondary data failed with Status 0x%X\n", (unsigned int)v6);
      }
      else
      {
        DbgPrintEx(5u, 0, "DBGK: Triage dump write failed with Status 0x%X\n", (unsigned int)v5);
      }
    }
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: DbgkWerWriteTriageDump: WerLiveKernelOpenDumpFile failed, status 0x%X\n", (unsigned int)v3);
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)updated;
}
