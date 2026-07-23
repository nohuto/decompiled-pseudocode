/*
 * XREFs of BiLogFileOwnerProcess @ 0x1403275E0
 * Callers:
 *     BiLoadSystemStore @ 0x1407120C8 (BiLoadSystemStore.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1401B8510 (ZwQueryInformationFile.c)
 *     ZwQueryInformationProcess @ 0x1401B8610 (ZwQueryInformationProcess.c)
 *     ZwOpenProcess @ 0x1401B87B0 (ZwOpenProcess.c)
 *     ZwOpenFile @ 0x1401B8950 (ZwOpenFile.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopDmaOverrideConflict @ 0x1406D5100 (IopDmaOverrideConflict.c)
 *     BiLogMessage @ 0x140715354 (BiLogMessage.c)
 */

void __fastcall BiLogFileOwnerProcess(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  UNICODE_STRING *v6; // r9
  NTSTATUS v7; // eax
  unsigned int *PoolWithTag; // rax
  NTSTATUS v9; // eax
  unsigned int v10; // r14d
  NTSTATUS v11; // eax
  unsigned int v12; // eax
  NTSTATUS v13; // eax
  const wchar_t *v14; // r9
  CLIENT_ID ClientId; // [rsp+30h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES v18; // [rsp+80h] [rbp+7h] BYREF
  ULONG Length; // [rsp+E8h] [rbp+6Fh] BYREF
  HANDLE ProcessHandle; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE FileHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  Length = a2;
  v3 = 0LL;
  ProcessHandle = 0LL;
  FileHandle = 0LL;
  v4 = 0LL;
  if ( !(unsigned __int8)IopDmaOverrideConflict(a1, a2, a3, a1) )
    return;
  BiLogMessage(2LL, L"Attempting to determine owner of file %ws.", *(_QWORD *)(v5 + 8));
  ObjectAttributes.ObjectName = v6;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4020u);
  if ( v7 < 0 )
  {
    BiLogMessage(4LL, L"Failed to open file attributes. Status: %x", (unsigned int)v7);
    goto LABEL_29;
  }
  Length = 1024;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x4B444342u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
  {
    BiLogMessage(4LL, L"Failed to allocate process ID buffer.");
    goto LABEL_29;
  }
  v9 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, PoolWithTag, Length, FileProcessIdsUsingFileInformation);
  if ( v9 < 0 )
  {
    BiLogMessage(4LL, L"Failed to query processes. Status: %x", (unsigned int)v9);
LABEL_29:
    if ( ProcessHandle )
      ZwClose(ProcessHandle);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x4B444342u);
    goto LABEL_33;
  }
  if ( !*v3 )
  {
    BiLogMessage(4LL, L"No processes are using this file.");
    goto LABEL_29;
  }
  BiLogMessage(2LL, L"Found %d processes using this file.");
  ProcessHandle = 0LL;
  v10 = 0;
  if ( *v3 )
  {
    while ( 1 )
    {
      ClientId.UniqueThread = 0LL;
      ClientId.UniqueProcess = *(HANDLE *)&v3[2 * v10 + 2];
      v18.Length = 48;
      memset(&v18.RootDirectory, 0, 20);
      *(_OWORD *)&v18.SecurityDescriptor = 0LL;
      v11 = ZwOpenProcess(&ProcessHandle, 0x1000u, &v18, &ClientId);
      if ( v11 < 0 )
        break;
      Length = 0;
      v12 = ZwQueryInformationProcess(ProcessHandle, ProcessImageFileName, 0LL, 0, &Length);
      if ( v12 != -2147483643 && v12 != -1073741789 && v12 != -1073741820 )
      {
        BiLogMessage(4LL, L"Failed to query process information for size. Status: %x", v12);
        goto LABEL_28;
      }
      v4 = ExAllocatePoolWithTag(PagedPool, Length, 0x4B444342u);
      if ( !v4 )
      {
        BiLogMessage(4LL, L"Failed to allocate memory for space for process name.");
        goto LABEL_29;
      }
      v13 = ZwQueryInformationProcess(ProcessHandle, ProcessImageFileName, v4, Length, &Length);
      if ( v13 < 0 )
      {
        BiLogMessage(4LL, L"Failed to query process info. Status: %x", (unsigned int)v13);
        goto LABEL_29;
      }
      if ( *(_WORD *)v4 )
        v14 = (const wchar_t *)v4[1];
      else
        v14 = L"System";
      BiLogMessage(4LL, L"Process Name [%d]: %ws", v10, v14);
      ZwClose(ProcessHandle);
      ProcessHandle = 0LL;
      ExFreePoolWithTag(v4, 0x4B444342u);
      ++v10;
      v4 = 0LL;
      if ( v10 >= *v3 )
        goto LABEL_29;
    }
    BiLogMessage(4LL, L"Failed to open process. Status: %x", (unsigned int)v11);
LABEL_28:
    v4 = 0LL;
    goto LABEL_29;
  }
LABEL_33:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  if ( FileHandle )
    ZwClose(FileHandle);
}
