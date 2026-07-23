/*
 * XREFs of FsRtlAcquireEofLock @ 0x14009A7B0
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     FsRtlpWaitForIoAtEof @ 0x14009AA84 (FsRtlpWaitForIoAtEof.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x14009C690 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x14009E6F0 (ExpReleaseFastMutexContended.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

char __fastcall FsRtlAcquireEofLock(__int64 a1, volatile signed __int32 *a2)
{
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR v4; // rdi
  __int64 v5; // rcx
  char v6; // dl
  __int64 v7; // rbp
  int SessionId; // eax
  bool v9; // zf
  unsigned __int8 CurrentIrql; // bl
  ULONG_PTR v11; // rbx
  unsigned __int8 v12; // di
  unsigned __int32 v13; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  struct _KPRCB *CurrentPrcb; // rcx
  int v17; // [rsp+70h] [rbp+8h] BYREF
  volatile signed __int32 *v18; // [rsp+78h] [rbp+10h]
  int v19; // [rsp+80h] [rbp+18h]
  volatile signed __int32 *v20; // [rsp+88h] [rbp+20h]

  v18 = a2;
  CurrentThread = KeGetCurrentThread();
  v17 = 0;
  v20 = a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v4, KeGetCurrentIrql(), 0LL);
  LOBYTE(v5) = CurrentThread->AbEntrySummary;
  if ( !(_BYTE)v5 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v7 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v4);
      goto LABEL_32;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v5) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  v6 = v5;
  _BitScanForward((unsigned int *)&v5, (unsigned __int8)v5);
  v19 = v5;
  CurrentThread->AbEntrySummary = v6 & ~(1 << v5);
  v7 = (__int64)&CurrentThread->LockEntries[v5];
  if ( !v7 )
  {
LABEL_32:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_8;
  }
  if ( v4 >= 0xFFFF800000000000uLL && byte_140467440[((v4 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v7 + 40) = SessionId;
  *(_QWORD *)(v7 + 32) = v4 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v4, &v17);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v4, 0) )
    ExpAcquireFastMutexContended(v4, (PRTL_BALANCED_NODE)v7);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v4 + 48) = CurrentIrql;
  if ( v20 )
    _InterlockedIncrement(v20);
  if ( *(struct _KTHREAD **)a1 == CurrentThread )
  {
    ++*(_WORD *)(a1 + 38);
  }
  else if ( *(_QWORD *)a1 )
  {
    FsRtlpWaitForIoAtEof(a1, v18, -1LL);
  }
  else
  {
    *(_QWORD *)a1 = CurrentThread;
    *(_WORD *)(a1 + 38) = 1;
  }
  if ( v18 )
    _InterlockedIncrement(v18);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v12 = *(_BYTE *)(v11 + 48);
  *(_QWORD *)(v11 + 8) = 0LL;
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)v11, 1, 0);
  if ( v13 )
    ExpReleaseFastMutexContended(v11, v13);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v12);
  return KeAbPostRelease(v11);
}
