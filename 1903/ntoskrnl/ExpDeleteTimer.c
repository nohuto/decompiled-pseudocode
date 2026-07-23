/*
 * XREFs of ExpDeleteTimer @ 0x1400B2C00
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KeCancelTimer @ 0x1400B2CA0 (KeCancelTimer.c)
 *     PoDestroyReasonContext @ 0x1400ECD28 (PoDestroyReasonContext.c)
 *     PsRemoveVirtualizedTimer @ 0x14013377C (PsRemoveVirtualizedTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

BOOLEAN __fastcall ExpDeleteTimer(PKTIMER a1)
{
  LIST_ENTRY *p_WaitListHead; // r14
  KIRQL v3; // al
  __int64 v4; // r9
  KIRQL v5; // bl
  struct _KTHREAD *CurrentThread; // r12
  void *v8; // r13
  struct _KTHREAD *v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // r15d
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v13; // dl
  __int64 v14; // rsi
  int SessionId; // eax
  bool v16; // zf
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _KTHREAD *v20; // rbx
  unsigned __int8 v21; // r14
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rsi
  int v25; // eax
  unsigned int v26; // ecx
  unsigned __int8 v27; // al
  __int64 v28; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  int v30; // [rsp+80h] [rbp+8h] BYREF
  int v31; // [rsp+88h] [rbp+10h] BYREF
  int v32; // [rsp+90h] [rbp+18h]
  int v33; // [rsp+98h] [rbp+20h]

  p_WaitListHead = &a1[4].Header.WaitListHead;
  if ( !a1[4].Header.WaitListHead.Flink )
    goto LABEL_2;
  CurrentThread = KeGetCurrentThread();
  v8 = *(void **)&a1[4].Header.Lock;
  --CurrentThread->KernelApcDisable;
  v9 = KeGetCurrentThread();
  v31 = 0;
  --v9->SpecialApcDisable;
  if ( ++v9->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v9, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
  LOBYTE(v10) = v9->AbEntrySummary;
  v11 = -1;
  if ( !(_BYTE)v10 )
  {
    if ( !v9->AbOrphanedEntrySummary )
    {
      v14 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v9, &ExpWakeTimerLock);
      goto LABEL_18;
    }
    AbOrphanedEntrySummary = v9->AbOrphanedEntrySummary;
    v9->AbOrphanedEntrySummary = 0;
    LOBYTE(v10) = AbOrphanedEntrySummary | v9->AbEntrySummary;
  }
  v13 = v10;
  _BitScanForward((unsigned int *)&v10, (unsigned __int8)v10);
  v33 = v10;
  v9->AbEntrySummary = v13 & ~(1 << v10);
  v14 = (__int64)&v9->LockEntries[v10];
  if ( !v14 )
  {
LABEL_18:
    _interlockedbittestandset((volatile signed __int32 *)&v9->116 + 1, 0x10u);
    goto LABEL_21;
  }
  if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
    && byte_140467440[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v14 + 40) = SessionId;
  *(_QWORD *)(v14 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_21:
  --v9->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v9, (__int64)&ExpWakeTimerLock, &v31);
  v16 = v9->SpecialApcDisable++ == -1;
  if ( v16 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
    KiCheckForKernelApcDelivery(1LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, (_RTL_BALANCED_NODE *)v14, (ULONG_PTR)&ExpWakeTimerLock);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  Flink = p_WaitListHead->Flink;
  Blink = p_WaitListHead->Blink;
  if ( p_WaitListHead->Flink->Blink != p_WaitListHead || Blink->Flink != p_WaitListHead )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  p_WaitListHead->Flink = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  v30 = 0;
  v20 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpWakeTimerLock) == 1 )
    v11 = MmGetSessionIdEx((__int64)v20->ApcState.Process);
  --v20->SpecialApcDisable;
  v21 = ++v20->AbAllocationRegionCount;
  v22 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v16 = !_BitScanReverse((unsigned int *)&v23, v22);
    v32 = v23;
    if ( v16 )
      break;
    v24 = (__int64)&v20->LockEntries[v23];
    v22 &= ~(1 << v23);
    if ( (*(_BYTE *)(v24 + 26) & 1) != 0
      && (*(_DWORD *)(v24 + 32) & 1) == 0
      && (*(_QWORD *)(v24 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v24 + 40) == v11 )
    {
      *(_BYTE *)(v24 + 26) &= ~1u;
      if ( *(_QWORD *)(v24 + 32) )
      {
        if ( v24 )
        {
          *(_BYTE *)(v24 + 32) |= 2u;
          if ( *(__int64 *)(v24 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v24);
          v25 = *(_DWORD *)(v24 + 88) & 0x1FFFF;
          v26 = *(_DWORD *)(v24 + 88) & 0xFFFE0000;
          *(_BYTE *)(v24 + 25) &= ~1u;
          v30 = v25;
          *(_DWORD *)(v24 + 88) = v26;
          *(_QWORD *)(v24 + 32) = 0LL;
          v27 = 1 << ((char)(v24 - (_BYTE)v20 - 32) / 96);
          if ( v21 == 1 )
            v20->AbEntrySummary |= v27;
          else
            _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, v27);
          goto LABEL_46;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v20, (ULONG_PTR)&ExpWakeTimerLock, v11, 0LL);
LABEL_46:
  --v20->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v20, (__int64)&ExpWakeTimerLock, &v30);
  v16 = v20->SpecialApcDisable++ == -1;
  if ( v16 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery(v28);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v8 )
    PoDestroyReasonContext(v8);
LABEL_2:
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a1[1]);
  v5 = v3;
  if ( a1[4].DueTime.QuadPart )
  {
    LOBYTE(v4) = v3;
    PsRemoveVirtualizedTimer(&a1[4].DueTime, &a1[4].TimerListEntry, &a1[1], v4);
  }
  else
  {
    KxReleaseSpinLock((PKSPIN_LOCK)&a1[1]);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v5);
  }
  return KeCancelTimer(a1);
}
