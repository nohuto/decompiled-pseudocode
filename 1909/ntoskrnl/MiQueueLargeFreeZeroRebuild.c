/*
 * XREFs of MiQueueLargeFreeZeroRebuild @ 0x1400C4F60
 * Callers:
 *     MiInsertLargePageInNodeList @ 0x14002F220 (MiInsertLargePageInNodeList.c)
 *     MiLargePageFreeToZero @ 0x1400C4B30 (MiLargePageFreeToZero.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItemToPartition @ 0x140080598 (ExQueueWorkItemToPartition.c)
 *     MiPageToNode @ 0x1400C53C4 (MiPageToNode.c)
 *     PsReferencePartitionSafe @ 0x1400C5438 (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x1400C5468 (PsDereferencePartition.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryAcquirePushLockShared @ 0x1400C74B0 (ExfTryAcquirePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 __fastcall MiQueueLargeFreeZeroRebuild(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 result; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // zf
  volatile signed __int64 *v16; // r9
  __int64 v17; // rcx
  unsigned int v18; // esi
  unsigned __int64 v19; // rbp
  __int64 v20; // r10
  _QWORD *v21; // r9
  unsigned __int64 v22; // r8
  unsigned __int8 AbEntrySummary; // al
  __int64 v24; // rcx
  int SessionId; // eax
  __int64 v26; // rsi
  unsigned __int16 *v27; // rdi
  KIRQL v28; // al
  __int64 v29; // rcx
  KIRQL v30; // r14
  int v31; // r15d
  char v32; // al
  unsigned __int8 AbOrphanedEntrySummary; // al
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v35; // [rsp+30h] [rbp-48h]
  int v37; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v38; // [rsp+98h] [rbp+20h]

  v4 = a3 + 1;
  result = a3;
  v6 = MiLargePageSizes[v4];
  v35 = a3;
  v7 = MiLargePageSizes[a3];
  v8 = a2 & ~(v7 - 1);
  if ( !a2 )
    return result;
  v38 = MiPageToNode(a2);
  v37 = 0;
  v9 = a1 + 184;
  CurrentThread = KeGetCurrentThread();
  v11 = v38;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount == 1 )
  {
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( !AbEntrySummary )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        v12 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
        {
LABEL_27:
          if ( !v12 )
          {
            _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
            goto LABEL_4;
          }
          if ( v9 >= 0xFFFF800000000000uLL )
          {
            if ( byte_140467140[((v9 >> 39) & 0x1FF) - 256] == 1 )
            {
              SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
              v9 = a1 + 184;
              goto LABEL_32;
            }
            v9 = a1 + 184;
          }
          SessionId = -1;
LABEL_32:
          *(_DWORD *)(v12 + 40) = SessionId;
          *(_QWORD *)(v12 + 32) = v9 & 0x7FFFFFFFFFFFFFFCLL;
          goto LABEL_4;
        }
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v9);
LABEL_26:
        v9 = a1 + 184;
        goto LABEL_27;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      AbEntrySummary = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
    }
    _BitScanForward((unsigned int *)&v24, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v24);
    v12 = (__int64)&CurrentThread->LockEntries[v24];
    goto LABEL_26;
  }
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
  v12 = 0LL;
LABEL_4:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v9, &v37);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v14, v13);
  v16 = (volatile signed __int64 *)(a1 + 184);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 184), 17LL, 0LL) )
    goto LABEL_8;
  result = ExfTryAcquirePushLockShared(a1 + 184);
  if ( (_BYTE)result )
  {
    v16 = (volatile signed __int64 *)(a1 + 184);
LABEL_8:
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    v17 = 48 * v8 - 0x58000000000LL;
    v18 = 0;
    v19 = v7 / v6;
    if ( v7 / v6 )
    {
      v20 = 48 * v6;
      v21 = (_QWORD *)(48 * v8 - 0x57FFFFFFFD8LL);
      do
      {
        if ( v8 > 0xFFFFFFFFFLL )
          break;
        if ( (*v21 & 0x20000000000000LL) == 0 )
          break;
        v22 = *(_QWORD *)(v17 + 40);
        if ( *(_QWORD *)(qword_140465E88 + 8 * ((v22 >> 40) & 0x3FF)) != a1 )
          break;
        if ( (*(_BYTE *)(v17 + 34) & 7u) > 1 )
          break;
        if ( (v22 & 0xFFFFFFFFFLL) != MiLargePageContainingFrames[v4] )
          break;
        if ( *(__int64 *)(v17 + 8) >= 0 )
          break;
        ++v18;
        v8 += v6;
        v21 = (_QWORD *)((char *)v21 + v20);
        v17 += v20;
      }
      while ( v18 < v19 );
      v11 = v38;
      v16 = (volatile signed __int64 *)(a1 + 184);
    }
    if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared(v16);
      v16 = (volatile signed __int64 *)(a1 + 184);
    }
    KeAbPostRelease((ULONG_PTR)v16);
    result = v18;
    if ( v18 == v19 )
    {
      v26 = *(_QWORD *)(a1 + 168);
      if ( *(_QWORD *)(v26 + 16) )
      {
        result = PsReferencePartitionSafe(*(_QWORD *)(a1 + 168));
        if ( (_BYTE)result )
        {
          v27 = (unsigned __int16 *)(a1 + 520 * v35 + 5040);
          v28 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 6116));
          v29 = *v27;
          v30 = v28;
          if ( *(_QWORD *)&v27[4 * v29 + 4] )
            *((_BYTE *)v27 + 4) = 1;
          else
            ++v27[1];
          v31 = 0;
          *(_QWORD *)&v27[4 * v29 + 4] = a2;
          if ( ++*v27 == 64 )
            *v27 = 0;
          v32 = *(_BYTE *)(a1 + 6112);
          if ( v32 != -1 )
            *(_BYTE *)(a1 + 6112) = ++v32;
          if ( v32 != 8 || *(_BYTE *)(a1 + 6113) )
          {
            v31 = 1;
          }
          else
          {
            *(_BYTE *)(a1 + 6113) = 1;
            *(_QWORD *)(a1 + 6104) = a1;
            *(_QWORD *)(a1 + 6096) = MiRebuildLargeZeroPage;
            *(_QWORD *)(a1 + 6080) = 0LL;
            ExQueueWorkItemToPartition((_QWORD *)(a1 + 6080), 1, v11, v26);
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 6116));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v30 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          result = v30;
          __writecr8(v30);
          if ( v31 == 1 )
            return PsDereferencePartition(v26);
        }
      }
    }
    return result;
  }
  if ( v12 )
    return KeAbPostReleaseEx(a1 + 184);
  return result;
}
