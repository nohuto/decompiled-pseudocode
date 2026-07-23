/*
 * XREFs of DbgkCaptureLiveKernelDump @ 0x14026E15C
 * Callers:
 *     NtSystemDebugControl @ 0x1408DBAF0 (NtSystemDebugControl.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1401B8510 (ZwQueryInformationFile.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406726C0 (ObReferenceObjectByHandleWithTag.c)
 *     DbgkpWerAllocatePool @ 0x1408138E4 (DbgkpWerAllocatePool.c)
 *     DbgkpWerFreePool @ 0x140813EF8 (DbgkpWerFreePool.c)
 *     IoCaptureLiveDump @ 0x140820184 (IoCaptureLiveDump.c)
 *     ObOpenObjectByPointerWithTag @ 0x1408625C0 (ObOpenObjectByPointerWithTag.c)
 */

__int64 __fastcall DbgkCaptureLiveKernelDump(__int64 a1)
{
  KPROCESSOR_MODE PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Status; // ebx
  void *Pool; // rax
  __int64 v7; // rsi
  void *v8; // rcx
  NTSTATUS v9; // eax
  PVOID v10; // r9
  const CHAR *v11; // r8
  void *v12; // rcx
  PVOID v13; // r15
  NTSTATUS v14; // eax
  int v15; // eax
  int v16; // eax
  ULONG Tag[2]; // [rsp+20h] [rbp-30h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-10h] BYREF
  char FileInformation; // [rsp+90h] [rbp+40h] BYREF
  HANDLE FileHandle; // [rsp+98h] [rbp+48h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+50h] BYREF
  PVOID v22; // [rsp+A8h] [rbp+58h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !a1 )
    return 3221225485LL;
  if ( PreviousMode == 1 && (*(_DWORD *)(a1 + 56) & 4) != 0 && KdPitchDebugger && !KdLocalDebugEnabled )
    return 3221226324LL;
  FileHandle = 0LL;
  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  v22 = 0LL;
  --CurrentThread->KernelApcDisable;
  if ( _InterlockedExchange(&DbgkpBusy, 1) != 1 )
  {
    Pool = (void *)DbgkpWerAllocatePool(0x30uLL);
    v7 = (__int64)Pool;
    if ( Pool )
    {
      memset(Pool, 0, 0x30uLL);
      *(_DWORD *)v7 = 1;
      *(_DWORD *)(v7 + 4) = 48;
      v8 = *(void **)(a1 + 48);
      if ( v8
        && (v9 = ObReferenceObjectByHandleWithTag(
                   v8,
                   0x100001u,
                   (POBJECT_TYPE)ExEventObjectType,
                   PreviousMode,
                   0x57676244u,
                   &Object,
                   0LL),
            Status = v9,
            v9 < 0) )
      {
        v10 = *(PVOID *)(a1 + 48);
        v11 = "DBGK: Invalid event handle %p, status 0x%X\n";
      }
      else
      {
        v12 = *(void **)(a1 + 40);
        if ( !v12 )
        {
          Status = -1073741811;
          goto LABEL_37;
        }
        v9 = ObReferenceObjectByHandleWithTag(
               v12,
               2u,
               (POBJECT_TYPE)IoFileObjectType,
               PreviousMode,
               0x57676244u,
               &v22,
               0LL);
        Status = v9;
        if ( v9 >= 0 )
        {
          v13 = v22;
          v9 = ObOpenObjectByPointerWithTag(
                 v22,
                 0x200u,
                 0LL,
                 2u,
                 (POBJECT_TYPE)IoFileObjectType,
                 0,
                 0x57676244u,
                 &FileHandle);
          Status = v9;
          if ( v9 >= 0 )
          {
            v14 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 4u, FileModeInformation);
            Status = v14;
            if ( v14 >= 0 )
            {
              Status = IoStatusBlock.Status;
              if ( IoStatusBlock.Status >= 0 )
              {
                if ( (FileInformation & 0x30) != 0 )
                {
                  *(_QWORD *)(v7 + 8) = FileHandle;
                  *(_QWORD *)(v7 + 16) = Object;
                  v15 = *(_DWORD *)(a1 + 56);
                  if ( (v15 & 4) != 0 )
                  {
                    *(_DWORD *)(v7 + 24) |= 4u;
                    v15 = *(_DWORD *)(a1 + 56);
                  }
                  if ( (v15 & 8) != 0 )
                    *(_DWORD *)(v7 + 24) |= 0x10u;
                  if ( (*(_DWORD *)(a1 + 60) & 1) != 0 )
                    *(_DWORD *)(v7 + 28) |= 1u;
                  DbgPrintEx(5u, 3u, "DBGK: Calling IoCaptureLiveDump\n");
                  v16 = IoCaptureLiveDump(
                          *(_DWORD *)(a1 + 4),
                          *(_QWORD *)(a1 + 8),
                          *(_QWORD *)(a1 + 16),
                          *(_QWORD *)(a1 + 24),
                          *(_QWORD *)(a1 + 32),
                          v7,
                          0LL);
                  Status = v16;
                  if ( v16 < 0 )
                    DbgPrintEx(5u, 0, "DBGK: IoCaptureLiveDump failed, status 0x%X\n", v16);
                }
                else
                {
                  Status = -1073741811;
                  DbgPrintEx(5u, 1u, "DBGK: File was not opened for synchronous access.\n");
                }
              }
              else
              {
                DbgPrintEx(
                  5u,
                  1u,
                  "DBGK: ZwQueryInformationFile IoStatusBlock.Status is failure, status 0x%X\n",
                  (unsigned int)IoStatusBlock.Status);
              }
            }
            else
            {
              DbgPrintEx(5u, 1u, "DBGK: ZwQueryInformationFile failed for dump file, status 0x%X\n", (unsigned int)v14);
            }
            goto LABEL_37;
          }
          v10 = v13;
          v11 = "DBGK: ObOpenObjectByPointerWithTag failed for file %p, status 0x%X\n";
        }
        else
        {
          v10 = *(PVOID *)(a1 + 40);
          v11 = "DBGK: Invalid file handle %p, ObReferenceObjectByHandleWithTag returns status 0x%X\n";
        }
      }
      Tag[0] = v9;
      DbgPrintEx(5u, 1u, v11, v10, *(_QWORD *)Tag);
    }
    else
    {
      DbgPrintEx(5u, 0, "DBGK: Could not allocate IoLivedumpControl\n");
      Status = -1073741801;
    }
LABEL_37:
    if ( FileHandle )
      ZwClose(FileHandle);
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x57676244u);
    if ( v22 )
      ObfDereferenceObjectWithTag(v22, 0x57676244u);
    if ( v7 )
      DbgkpWerFreePool(v7);
    _InterlockedExchange(&DbgkpBusy, 0);
    goto LABEL_46;
  }
  Status = -1073741267;
LABEL_46:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return Status;
}
