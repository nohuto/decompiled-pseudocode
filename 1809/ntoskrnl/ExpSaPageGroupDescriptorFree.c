/*
 * XREFs of ExpSaPageGroupDescriptorFree @ 0x14031F7AC
 * Callers:
 *     ExpSaAllocatorOptimizeList @ 0x14031F694 (ExpSaAllocatorOptimizeList.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400A69C0 (KeQueryMaximumProcessorCountEx.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExpSaBinaryArrayRemove @ 0x14031F764 (ExpSaBinaryArrayRemove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall ExpSaPageGroupDescriptorFree(_DWORD *P)
{
  __int64 MaximumProcessorCount; // rdi
  _RTL_BALANCED_NODE *v3; // rax
  signed __int8 v4; // cf
  _RTL_BALANCED_NODE *v5; // rbx
  __int64 v6; // rsi
  unsigned int v7; // edx
  unsigned int v8; // ecx
  __int64 v9; // r9
  int v10; // r8d
  __int64 v11; // rcx
  void *v12; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v15; // si
  unsigned int v16; // r8d
  int v17; // eax
  __int64 v18; // rcx
  _KLOCK_ENTRY *v19; // rdi
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // [rsp+68h] [rbp+10h] BYREF
  int v25; // [rsp+70h] [rbp+18h]
  int v26; // [rsp+78h] [rbp+20h]

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v3 = KeAbPreAcquire((ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v3, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  if ( v5 )
    BYTE2(v5[1].Left) |= 1u;
  if ( (_DWORD)MaximumProcessorCount )
  {
    v6 = 0LL;
    do
    {
      v7 = P[8];
      _BitScanReverse(&v8, v7);
      v9 = *(_QWORD *)(v6 + ExSaPageArrays);
      v10 = 1 << v8;
      v11 = v8 - 2;
      v26 = v11;
      v12 = *(void **)(*(_QWORD *)(v9 + 8 * v11) + 8LL * (v7 ^ v10) + 8);
      ExpSaBinaryArrayRemove(v9, v7);
      ExFreePoolWithTag(v12, 0);
      v6 += 8LL;
      --MaximumProcessorCount;
    }
    while ( MaximumProcessorCount );
  }
  ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, P[8]);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock);
  v24 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExSaPageGroupDescriptorArrayLock) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --CurrentThread->SpecialApcDisable;
  v15 = ++CurrentThread->AbAllocationRegionCount;
  v16 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v20 = !_BitScanReverse((unsigned int *)&v21, v16);
    v25 = v21;
    if ( v20 )
      goto LABEL_20;
    v17 = 1 << v21;
    v18 = v21;
    v19 = &CurrentThread->LockEntries[v18];
    v16 &= ~v17;
    if ( (v19->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v19->LockState.0 & 1) == 0
      && (*(_QWORD *)&v19->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL)
      && v19->LockState.SessionId == (_DWORD)SessionId )
    {
      v19->AcquiredByte &= ~1u;
      if ( v19->LockState.0 )
        break;
    }
  }
  if ( !v19 )
  {
LABEL_20:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(
        0x162u,
        (ULONG_PTR)CurrentThread,
        (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock,
        (unsigned int)SessionId,
        0LL);
    goto LABEL_27;
  }
  v19->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v19->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v18].TreeNode, SessionId);
  v24 = 0;
  v24 = v19->BoostBitmap.AllFields & 0x1FFFF;
  v19->BoostBitmap.AllFields &= 0xFFFE0000;
  v19->ThreadLocalFlags &= ~1u;
  v19->LockState.0 = 0LL;
  v22 = ((char *)v19 - (char *)CurrentThread - 800) / 96;
  if ( v15 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v22;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v22);
LABEL_27:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&ExSaPageGroupDescriptorArrayLock, (__int64)&v24);
  v20 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v20 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v23);
  ExFreePoolWithTag(P, 0);
}
