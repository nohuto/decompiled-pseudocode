/*
 * XREFs of BiLogFileOwnerProcess @ 0x140348C2C
 * Callers:
 *     BiLoadSystemStore @ 0x14073B314 (BiLoadSystemStore.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1401C02F0 (ZwQueryInformationFile.c)
 *     ZwQueryInformationProcess @ 0x1401C03F0 (ZwQueryInformationProcess.c)
 *     ZwOpenProcess @ 0x1401C0590 (ZwOpenProcess.c)
 *     ZwOpenFile @ 0x1401C0730 (ZwOpenFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     IopDmaOverrideConflict @ 0x1406F3320 (IopDmaOverrideConflict.c)
 *     BiLogMessage @ 0x14073E4B4 (BiLogMessage.c)
 */

NTSTATUS __fastcall BiLogFileOwnerProcess(UNICODE_STRING *a1, ULONG a2)
{
  unsigned int *v3; // rsi
  _QWORD *v4; // rdi
  NTSTATUS result; // eax
  NTSTATUS v6; // eax
  const wchar_t *v7; // rdx
  unsigned int *PoolWithTag; // rax
  const wchar_t *v9; // rdx
  unsigned int v10; // r14d
  NTSTATUS v11; // eax
  unsigned int v12; // eax
  NTSTATUS v13; // eax
  const wchar_t *v14; // r9
  CLIENT_ID ClientId; // [rsp+30h] [rbp-59h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES v18; // [rsp+80h] [rbp-9h] BYREF
  ULONG Length; // [rsp+F8h] [rbp+6Fh] BYREF
  HANDLE ProcessHandle; // [rsp+100h] [rbp+77h] BYREF
  HANDLE FileHandle; // [rsp+108h] [rbp+7Fh] BYREF

  Length = a2;
  ClientId.UniqueProcess = 0LL;
  ClientId.UniqueThread = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(&v18, 0, sizeof(v18));
  v3 = 0LL;
  ProcessHandle = 0LL;
  FileHandle = 0LL;
  v4 = 0LL;
  result = IopDmaOverrideConflict();
  if ( !(_BYTE)result )
    return result;
  BiLogMessage(2LL, L"Attempting to determine owner of file %ws.", a1->Buffer);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4020u);
  if ( v6 < 0 )
  {
    v7 = L"Failed to open file attributes. Status: %x";
LABEL_4:
    result = BiLogMessage(4LL, v7, (unsigned int)v6);
LABEL_29:
    if ( ProcessHandle )
      result = ZwClose(ProcessHandle);
    if ( v4 )
      result = ExFreeHeapPool((ULONG_PTR)v4);
    goto LABEL_33;
  }
  Length = 1024;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x4B444342u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = L"Failed to allocate process ID buffer.";
LABEL_7:
    result = BiLogMessage(4LL, v9);
    goto LABEL_29;
  }
  v6 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, PoolWithTag, Length, FileProcessIdsUsingFileInformation);
  if ( v6 < 0 )
  {
    v7 = L"Failed to query processes. Status: %x";
    goto LABEL_4;
  }
  if ( !*v3 )
  {
    v9 = L"No processes are using this file.";
    goto LABEL_7;
  }
  result = BiLogMessage(2LL, L"Found %d processes using this file.");
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
        result = BiLogMessage(4LL, L"Failed to query process information for size. Status: %x", v12);
        goto LABEL_28;
      }
      v4 = ExAllocatePoolWithTag(PagedPool, Length, 0x4B444342u);
      if ( !v4 )
      {
        result = BiLogMessage(4LL, L"Failed to allocate memory for space for process name.");
        goto LABEL_29;
      }
      v13 = ZwQueryInformationProcess(ProcessHandle, ProcessImageFileName, v4, Length, &Length);
      if ( v13 < 0 )
      {
        result = BiLogMessage(4LL, L"Failed to query process info. Status: %x", (unsigned int)v13);
        goto LABEL_29;
      }
      if ( *(_WORD *)v4 )
        v14 = (const wchar_t *)v4[1];
      else
        v14 = L"System";
      BiLogMessage(4LL, L"Process Name [%d]: %ws", v10, v14);
      ZwClose(ProcessHandle);
      ProcessHandle = 0LL;
      result = ExFreeHeapPool((ULONG_PTR)v4);
      ++v10;
      v4 = 0LL;
      if ( v10 >= *v3 )
        goto LABEL_29;
    }
    result = BiLogMessage(4LL, L"Failed to open process. Status: %x", (unsigned int)v11);
LABEL_28:
    v4 = 0LL;
    goto LABEL_29;
  }
LABEL_33:
  if ( v3 )
    result = ExFreeHeapPool((ULONG_PTR)v3);
  if ( FileHandle )
    return ZwClose(FileHandle);
  return result;
}
