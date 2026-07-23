/*
 * XREFs of ExpSaPageGroupDescriptorFree @ 0x14016F268
 * Callers:
 *     ExpSaAllocatorOptimizeList @ 0x14016F1DC (ExpSaAllocatorOptimizeList.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140004950 (KeQueryMaximumProcessorCountEx.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     ExpSaBinaryArrayRemove @ 0x14016F5D4 (ExpSaBinaryArrayRemove.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpSaPageGroupDescriptorFree(ULONG_PTR BugCheckParameter2)
{
  ULONG MaximumProcessorCount; // eax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // rbp
  unsigned __int8 AbEntrySummary; // cl
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rsi
  int SessionId; // eax
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned int v15; // ecx
  ULONG_PTR v16; // rbx
  struct _KTHREAD *v17; // rbx
  unsigned __int8 v18; // bp
  unsigned int v19; // edx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  _KLOCK_ENTRY *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v28; // [rsp+88h] [rbp+10h] BYREF
  int v29; // [rsp+90h] [rbp+18h] BYREF
  int v30; // [rsp+98h] [rbp+20h]

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v29 = 0;
  CurrentThread = KeGetCurrentThread();
  v4 = MaximumProcessorCount;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(
      0x192u,
      (ULONG_PTR)CurrentThread,
      (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock,
      KeGetCurrentIrql(),
      0LL);
  AbEntrySummary = CurrentThread->AbEntrySummary;
  v6 = -1;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v8 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, &ExSaPageGroupDescriptorArrayLock);
      goto LABEL_40;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v7, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
  v8 = (__int64)&CurrentThread->LockEntries[v7];
  if ( v8 )
  {
    if ( (unsigned __int64)&ExSaPageGroupDescriptorArrayLock >= 0xFFFF800000000000uLL
      && byte_140467140[(((unsigned __int64)&ExSaPageGroupDescriptorArrayLock >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v8 + 40) = SessionId;
    *(_QWORD *)(v8 + 32) = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_8;
  }
LABEL_40:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&ExSaPageGroupDescriptorArrayLock, &v29);
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v10);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      &ExSaPageGroupDescriptorArrayLock,
      (_RTL_BALANCED_NODE *)v8,
      (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( (_DWORD)v4 )
  {
    v13 = 0LL;
    do
    {
      v14 = *(unsigned int *)(BugCheckParameter2 + 32);
      _BitScanReverse(&v15, v14);
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + ExSaPageArrays) + 8LL * (v15 - 2))
                      + 8LL * ((unsigned int)v14 ^ (1 << v15))
                      + 8);
      ExpSaBinaryArrayRemove(*(_QWORD *)(v13 + ExSaPageArrays), v14);
      ExFreeHeapPool(v16);
      v13 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, *(unsigned int *)(BugCheckParameter2 + 32));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock);
  v28 = 0;
  v17 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExSaPageGroupDescriptorArrayLock) == 1 )
    v6 = MmGetSessionIdEx((__int64)v17->ApcState.Process);
  --v17->SpecialApcDisable;
  v18 = ++v17->AbAllocationRegionCount;
  v19 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v11 = !_BitScanReverse((unsigned int *)&v20, v19);
    v30 = v20;
    if ( v11 )
      break;
    v21 = 1 << v20;
    v22 = v20;
    v23 = &v17->LockEntries[v22];
    v19 &= ~v21;
    if ( (v23->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v23->LockState.0 & 1) == 0
      && (*(_QWORD *)&v23->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL)
      && v23->LockState.SessionId == v6 )
    {
      v23->AcquiredByte &= ~1u;
      if ( v23->LockState.0 )
      {
        if ( v23 )
        {
          v23->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v23->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v17->LockEntries[v22].TreeNode);
          v28 = v23->BoostBitmap.AllFields & 0x1FFFF;
          v23->BoostBitmap.AllFields &= 0xFFFE0000;
          v23->ThreadLocalFlags &= ~1u;
          v23->LockState.0 = 0LL;
          v24 = ((char *)v23 - (char *)v17 - 800) / 96;
          if ( v18 == 1 )
            v17->AbEntrySummary |= 1 << v24;
          else
            _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v24);
          goto LABEL_34;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v17, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, v6, 0LL);
LABEL_34:
  --v17->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v17, (__int64)&ExSaPageGroupDescriptorArrayLock, &v28);
  v11 = v17->SpecialApcDisable++ == -1;
  if ( v11 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
    KiCheckForKernelApcDelivery(v25);
  return ExFreeHeapPool(BugCheckParameter2);
}
