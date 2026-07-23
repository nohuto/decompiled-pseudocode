/*
 * XREFs of PopFxClearDirectedDripsCandidateDeviceList @ 0x1402F2554
 * Callers:
 *     PopDirectedDripsResumeDevices @ 0x1408A43B4 (PopDirectedDripsResumeDevices.c)
 *     PopDisengageDirectedDrips @ 0x1408A46C4 (PopDisengageDirectedDrips.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

_QWORD *PopFxClearDirectedDripsCandidateDeviceList()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR i; // rax
  struct _KTHREAD *v2; // rbx
  unsigned int v3; // esi
  unsigned int SessionId; // edx
  unsigned __int8 v5; // bp
  unsigned int v6; // r8d
  int v7; // eax
  __int64 v8; // rcx
  _KLOCK_ENTRY *v9; // rdi
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *v16; // rbx
  unsigned __int8 v17; // bp
  unsigned int v18; // edx
  int v19; // eax
  __int64 v20; // rcx
  _KLOCK_ENTRY *v21; // rdi
  __int64 v22; // rcx
  int v23; // ecx
  unsigned int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v28; // [rsp+70h] [rbp+8h] BYREF
  int v29; // [rsp+78h] [rbp+10h] BYREF
  int v30; // [rsp+80h] [rbp+18h]
  int v31; // [rsp+88h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxBlockingDeviceListLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    _InterlockedAnd((volatile signed __int32 *)(i + 816), 0xFFFFFFBF);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  v28 = 0;
  v2 = KeGetCurrentThread();
  v3 = -1;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxDeviceListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v2->ApcState.Process);
  else
    SessionId = -1;
  --v2->SpecialApcDisable;
  v5 = ++v2->AbAllocationRegionCount;
  v6 = ((char)v2->AbEntrySummary | (char)v2->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v10 = !_BitScanReverse((unsigned int *)&v11, v6);
    v30 = v11;
    if ( v10 )
      goto LABEL_16;
    v7 = 1 << v11;
    v8 = v11;
    v9 = &v2->LockEntries[v8];
    v6 &= ~v7;
    if ( (v9->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v9->LockState.0 & 1) == 0
      && (*(_QWORD *)&v9->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && v9->LockState.SessionId == SessionId )
    {
      v9->AcquiredByte &= ~1u;
      if ( v9->LockState.0 )
        break;
    }
  }
  if ( !v9 )
  {
LABEL_16:
    if ( (*((_DWORD *)&v2->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v2, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
    goto LABEL_23;
  }
  v9->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v9->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v2->LockEntries[v8].TreeNode);
  v12 = v9->BoostBitmap.AllFields & 0x1FFFF;
  v13 = v9->BoostBitmap.AllFields & 0xFFFE0000;
  v9->ThreadLocalFlags &= ~1u;
  v28 = v12;
  v9->BoostBitmap.AllFields = v13;
  v9->LockState.0 = 0LL;
  v14 = ((char *)v9 - (char *)v2 - 800) / 96;
  if ( v5 == 1 )
    v2->AbEntrySummary |= 1 << v14;
  else
    _InterlockedOr8((volatile signed __int8 *)&v2->AbOrphanedEntrySummary, 1 << v14);
LABEL_23:
  --v2->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v2, (__int64)&PopFxDeviceListLock, &v28);
  v10 = v2->SpecialApcDisable++ == -1;
  if ( v10 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v2->ApcState.ApcListHead[0].Flink != &v2->152 )
    KiCheckForKernelApcDelivery(v15);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxBlockingDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxBlockingDeviceListLock);
  v29 = 0;
  v16 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxBlockingDeviceListLock) == 1 )
    v3 = MmGetSessionIdEx((__int64)v16->ApcState.Process);
  --v16->SpecialApcDisable;
  v17 = ++v16->AbAllocationRegionCount;
  v18 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v10 = !_BitScanReverse((unsigned int *)&v22, v18);
    v31 = v22;
    if ( v10 )
      goto LABEL_38;
    v19 = 1 << v22;
    v20 = v22;
    v21 = &v16->LockEntries[v20];
    v18 &= ~v19;
    if ( (v21->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v21->LockState.0 & 1) == 0
      && (*(_QWORD *)&v21->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopFxBlockingDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && v21->LockState.SessionId == v3 )
    {
      v21->AcquiredByte &= ~1u;
      if ( v21->LockState.0 )
        break;
    }
  }
  if ( !v21 )
  {
LABEL_38:
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, (ULONG_PTR)&PopFxBlockingDeviceListLock, v3, 0LL);
    goto LABEL_45;
  }
  v21->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v21->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v16->LockEntries[v20].TreeNode);
  v23 = v21->BoostBitmap.AllFields & 0x1FFFF;
  v24 = v21->BoostBitmap.AllFields & 0xFFFE0000;
  v21->ThreadLocalFlags &= ~1u;
  v29 = v23;
  v21->BoostBitmap.AllFields = v24;
  v21->LockState.0 = 0LL;
  v25 = ((char *)v21 - (char *)v16 - 800) / 96;
  if ( v17 == 1 )
    v16->AbEntrySummary |= 1 << v25;
  else
    _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v25);
LABEL_45:
  --v16->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v16, (__int64)&PopFxBlockingDeviceListLock, &v29);
  v10 = v16->SpecialApcDisable++ == -1;
  if ( v10 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery(v26);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
