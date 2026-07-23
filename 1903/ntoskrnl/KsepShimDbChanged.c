/*
 * XREFs of KsepShimDbChanged @ 0x14018289C
 * Callers:
 *     KseQueryDeviceData @ 0x14074CE50 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140882810 (KseQueryDeviceDataList.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KsepLogError @ 0x140182C30 (KsepLogError.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1401C02F0 (ZwQueryInformationFile.c)
 *     ZwOpenFile @ 0x1401C0730 (ZwOpenFile.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KsepDebugPrint @ 0x1402B7054 (KsepDebugPrint.c)
 */

__int64 KsepShimDbChanged()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // esi
  NTSTATUS v2; // edx
  __int64 v3; // rax
  const char *v4; // rdx
  char v5; // al
  struct _KTHREAD *v6; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v8; // r14
  unsigned int v9; // edx
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  _KLOCK_ENTRY *v14; // rdi
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  NTSTATUS v20; // edx
  __int64 v21; // rax
  _DWORD v22[2]; // [rsp+38h] [rbp-49h] BYREF
  HANDLE FileHandle; // [rsp+40h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-19h] BYREF
  _QWORD FileInformation[5]; // [rsp+98h] [rbp+17h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(FileInformation, 0, sizeof(FileInformation));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  FileHandle = 0LL;
  v1 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\AppPatch\\drvmain.sdb");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( v2 >= 0 )
  {
    v20 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
    if ( v20 >= 0 )
    {
      if ( KsepSdbFileTime )
      {
        if ( FileInformation[2] != KsepSdbFileTime )
        {
          KsepSdbFileTime = FileInformation[2];
          v1 = 1;
        }
      }
      else
      {
        KsepSdbFileTime = FileInformation[2];
      }
      goto LABEL_6;
    }
    v21 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v21 + 1] = v20;
    KsepHistoryErrors[2 * v21] = 590554;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: ZwQueryInformationFile failed getting DB file!\n");
    v4 = "KSE: ZwQueryInformationFile failed getting DB file!\n";
  }
  else
  {
    v3 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v3 + 1] = v2;
    KsepHistoryErrors[2 * v3] = 590541;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: ZwOpenFile failed opening DB file!\n");
    v4 = "KSE: ZwOpenFile failed opening DB file!\n";
  }
  KsepLogError(0LL, v4);
LABEL_6:
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  v22[0] = 0;
  v6 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&KsepShimDbLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
  else
    SessionId = -1;
  --v6->SpecialApcDisable;
  v8 = ++v6->AbAllocationRegionCount;
  v9 = ((char)v6->AbEntrySummary | (char)v6->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v10 = !_BitScanReverse((unsigned int *)&v11, v9);
    v22[1] = v11;
    if ( v10 )
      break;
    v12 = 1 << v11;
    v13 = v11;
    v14 = &v6->LockEntries[v13];
    v9 &= ~v12;
    if ( (v14->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v14->LockState.0 & 1) == 0
      && (*(_QWORD *)&v14->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&KsepShimDbLock & 0x7FFFFFFFFFFFFFFCLL)
      && v14->LockState.SessionId == SessionId )
    {
      v14->AcquiredByte &= ~1u;
      if ( v14->LockState.0 )
      {
        if ( v14 )
        {
          v14->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v14->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v6->LockEntries[v13].TreeNode);
          v15 = v14->BoostBitmap.AllFields & 0x1FFFF;
          v16 = v14->BoostBitmap.AllFields & 0xFFFE0000;
          v14->ThreadLocalFlags &= ~1u;
          v22[0] = v15;
          v14->BoostBitmap.AllFields = v16;
          v14->LockState.0 = 0LL;
          v17 = ((char *)v14 - (char *)v6 - 800) / 96;
          if ( v8 == 1 )
            v6->AbEntrySummary |= 1 << v17;
          else
            _InterlockedOr8((volatile signed __int8 *)&v6->AbOrphanedEntrySummary, 1 << v17);
          goto LABEL_21;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v6->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v6, (ULONG_PTR)&KsepShimDbLock, SessionId, 0LL);
LABEL_21:
  --v6->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v6, (__int64)&KsepShimDbLock, v22);
  v10 = v6->SpecialApcDisable++ == -1;
  if ( v10 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
    KiCheckForKernelApcDelivery(v18);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( FileHandle )
    ZwClose(FileHandle);
  return v1;
}
