/*
 * XREFs of ExpSaAllocatorFree @ 0x14016EA70
 * Callers:
 *     ExSaFree @ 0x14016EA00 (ExSaFree.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400EF6F0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     ExpSaPageGroupFreeMemory @ 0x14016EE64 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaAllocatorOptimizeList @ 0x14016F1DC (ExpSaAllocatorOptimizeList.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

char __fastcall ExpSaAllocatorFree(ULONG_PTR BugCheckParameter2, __int64 *a2, __int64 a3, unsigned int a4)
{
  char v7; // r12
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 AbEntrySummary; // cl
  __int64 v10; // rax
  __int64 v11; // r15
  int SessionId; // eax
  __int64 v13; // rcx
  bool v14; // zf
  int v15; // eax
  $C6908ADE9723D0A04AF8EE82D8D15C40 *v16; // rax
  struct _KTHREAD *v17; // rbx
  ULONG_PTR v18; // r9
  unsigned __int8 v19; // r14
  unsigned int v20; // edx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  _KLOCK_ENTRY *v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _KTHREAD *v27; // rbp
  unsigned __int8 v28; // cl
  unsigned __int8 v29; // al
  __int64 v30; // rax
  __int64 v31; // r15
  int v32; // eax
  __int64 v33; // rcx
  __int64 *v34; // rax
  __int64 **v35; // rcx
  __int64 **v36; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v39; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v40[21]; // [rsp+34h] [rbp-54h] BYREF
  int v41; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v42; // [rsp+A8h] [rbp+20h]

  v42 = a4;
  if ( *((_DWORD *)a2 + 10) != 1 )
  {
    v40[0] = 0;
    v7 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( ++CurrentThread->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( !AbEntrySummary )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        v11 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
        goto LABEL_47;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      AbEntrySummary = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
    }
    _BitScanForward((unsigned int *)&v10, AbEntrySummary);
    v40[3] = v10;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v10);
    v11 = (__int64)&CurrentThread->LockEntries[v10];
    if ( v11 )
    {
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && *((_BYTE *)&MiState[1488] + ((BugCheckParameter2 >> 39) & 0x1FF)) == 1 )
      {
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      }
      else
      {
        SessionId = -1;
      }
      *(_DWORD *)(v11 + 40) = SessionId;
      *(_QWORD *)(v11 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
      goto LABEL_9;
    }
LABEL_47:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_9:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, v40);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v13);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, (_RTL_BALANCED_NODE *)v11, BugCheckParameter2);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    goto LABEL_16;
  }
  v39 = 0;
  v7 = 1;
  v27 = KeGetCurrentThread();
  --v27->SpecialApcDisable;
  if ( ++v27->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v27, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  v28 = v27->AbEntrySummary;
  if ( !v28 )
  {
    if ( !v27->AbOrphanedEntrySummary )
    {
      v31 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v27, BugCheckParameter2);
      goto LABEL_63;
    }
    v29 = v27->AbOrphanedEntrySummary;
    v27->AbOrphanedEntrySummary = 0;
    v28 = v29 | v27->AbEntrySummary;
  }
  _BitScanForward((unsigned int *)&v30, v28);
  v40[2] = v30;
  v27->AbEntrySummary = v28 & ~(1 << v30);
  v31 = (__int64)&v27->LockEntries[v30];
  if ( v31 )
  {
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
      && *((_BYTE *)&MiState[1488] + ((BugCheckParameter2 >> 39) & 0x1FF)) == 1 )
    {
      v32 = MmGetSessionIdEx((__int64)v27->ApcState.Process);
    }
    else
    {
      v32 = -1;
    }
    *(_DWORD *)(v31 + 40) = v32;
    *(_QWORD *)(v31 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    goto LABEL_66;
  }
LABEL_63:
  _interlockedbittestandset((volatile signed __int32 *)&v27->116 + 1, 0x10u);
LABEL_66:
  --v27->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v27, BugCheckParameter2, &v39);
  v14 = v27->SpecialApcDisable++ == -1;
  if ( v14 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
    KiCheckForKernelApcDelivery(v33);
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, (_RTL_BALANCED_NODE *)v31, BugCheckParameter2);
  if ( v31 )
    *(_BYTE *)(v31 + 26) |= 1u;
  *((_DWORD *)a2 + 10) = 0;
  v34 = (__int64 *)*a2;
  if ( *(__int64 **)(*a2 + 8) != a2
    || (v35 = (__int64 **)a2[1], *v35 != a2)
    || (*v35 = v34,
        v34[1] = (__int64)v35,
        v36 = *(__int64 ***)(BugCheckParameter2 + 16),
        *v36 != (__int64 *)(BugCheckParameter2 + 8)) )
  {
    __fastfail(3u);
  }
  *a2 = BugCheckParameter2 + 8;
  a2[1] = (__int64)v36;
  *v36 = a2;
  *(_QWORD *)(BugCheckParameter2 + 16) = a2;
LABEL_16:
  if ( (unsigned __int8)ExpSaPageGroupFreeMemory(a2, a3, v42) )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 64));
    LOBYTE(v15) = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u) | 2;
  }
  else
  {
    v15 = *(_DWORD *)(BugCheckParameter2 + 64);
  }
  if ( (v15 & 2) != 0 )
  {
    if ( v7 || _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) == 17 )
      goto LABEL_27;
    v7 = 0;
  }
  if ( !v7 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
    LOBYTE(v16) = KeAbPostRelease(BugCheckParameter2);
    return (char)v16;
  }
LABEL_27:
  ExpSaAllocatorOptimizeList(BugCheckParameter2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  v41 = 0;
  v17 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    v18 = (unsigned int)MmGetSessionIdEx((__int64)v17->ApcState.Process);
  else
    v18 = 0xFFFFFFFFLL;
  --v17->SpecialApcDisable;
  v19 = ++v17->AbAllocationRegionCount;
  v20 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v21, v20);
    v40[1] = v21;
    if ( v14 )
      break;
    v22 = 1 << v21;
    v23 = v21;
    v24 = &v17->LockEntries[v23];
    v20 &= ~v22;
    if ( (v24->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v24->LockState.0 & 1) == 0
      && (*(_QWORD *)&v24->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && v24->LockState.SessionId == (_DWORD)v18 )
    {
      v24->AcquiredByte &= ~1u;
      if ( v24->LockState.0 )
      {
        if ( v24 )
        {
          v24->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v24->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v17->LockEntries[v23].TreeNode);
          v41 = v24->BoostBitmap.AllFields & 0x1FFFF;
          v24->BoostBitmap.AllFields &= 0xFFFE0000;
          v24->ThreadLocalFlags &= ~1u;
          v24->LockState.0 = 0LL;
          v25 = ((char *)v24 - (char *)v17 - 800) / 96;
          if ( v19 == 1 )
            v17->AbEntrySummary |= 1 << v25;
          else
            _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v25);
          goto LABEL_43;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v17, BugCheckParameter2, v18, 0LL);
LABEL_43:
  --v17->AbAllocationRegionCount;
  LOBYTE(v16) = KiAbThreadRemoveBoosts((ULONG_PTR)v17, BugCheckParameter2, &v41);
  v14 = v17->SpecialApcDisable++ == -1;
  if ( v14 )
  {
    v16 = &v17->152;
    if ( ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v16->ApcState.ApcListHead[0].Flink != v16 )
      LOBYTE(v16) = KiCheckForKernelApcDelivery(v26);
  }
  return (char)v16;
}
