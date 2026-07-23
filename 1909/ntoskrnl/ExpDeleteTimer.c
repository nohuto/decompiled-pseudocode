/*
 * XREFs of ExpDeleteTimer @ 0x1400E2CF0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     PsRemoveVirtualizedTimer @ 0x140090268 (PsRemoveVirtualizedTimer.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PoDestroyReasonContext @ 0x1400D64DC (PoDestroyReasonContext.c)
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

BOOLEAN __fastcall ExpDeleteTimer(PKTIMER a1)
{
  LIST_ENTRY *p_WaitListHead; // r14
  KIRQL v3; // al
  KIRQL v4; // bl
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v7; // r13
  struct _KTHREAD *v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // r15d
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v12; // dl
  __int64 v13; // rsi
  int SessionId; // eax
  __int64 v15; // rdx
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
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  int v31; // [rsp+80h] [rbp+8h] BYREF
  int v32; // [rsp+88h] [rbp+10h] BYREF
  int v33; // [rsp+90h] [rbp+18h]
  int v34; // [rsp+98h] [rbp+20h]

  p_WaitListHead = &a1[4].Header.WaitListHead;
  if ( !a1[4].Header.WaitListHead.Flink )
    goto LABEL_2;
  CurrentThread = KeGetCurrentThread();
  v7 = *(_QWORD **)&a1[4].Header.Lock;
  --CurrentThread->KernelApcDisable;
  v8 = KeGetCurrentThread();
  v32 = 0;
  --v8->SpecialApcDisable;
  if ( ++v8->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v8, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
  LOBYTE(v9) = v8->AbEntrySummary;
  v10 = -1;
  if ( !(_BYTE)v9 )
  {
    if ( !v8->AbOrphanedEntrySummary )
    {
      v13 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v8, &ExpWakeTimerLock);
      goto LABEL_18;
    }
    AbOrphanedEntrySummary = v8->AbOrphanedEntrySummary;
    v8->AbOrphanedEntrySummary = 0;
    LOBYTE(v9) = AbOrphanedEntrySummary | v8->AbEntrySummary;
  }
  v12 = v9;
  _BitScanForward((unsigned int *)&v9, (unsigned __int8)v9);
  v34 = v9;
  v8->AbEntrySummary = v12 & ~(1 << v9);
  v13 = (__int64)&v8->LockEntries[v9];
  if ( !v13 )
  {
LABEL_18:
    _interlockedbittestandset((volatile signed __int32 *)&v8->116 + 1, 0x10u);
    goto LABEL_21;
  }
  if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
    && byte_140467140[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx((__int64)v8->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v13 + 40) = SessionId;
  *(_QWORD *)(v13 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_21:
  --v8->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v8, (__int64)&ExpWakeTimerLock, &v32);
  v16 = v8->SpecialApcDisable++ == -1;
  if ( v16 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
    KiCheckForKernelApcDelivery(1LL, v15);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v13, &ExpWakeTimerLock);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  Flink = p_WaitListHead->Flink;
  Blink = p_WaitListHead->Blink;
  if ( p_WaitListHead->Flink->Blink != p_WaitListHead || Blink->Flink != p_WaitListHead )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  p_WaitListHead->Flink = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  v31 = 0;
  v20 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpWakeTimerLock) == 1 )
    v10 = MmGetSessionIdEx((__int64)v20->ApcState.Process);
  --v20->SpecialApcDisable;
  v21 = ++v20->AbAllocationRegionCount;
  v22 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v16 = !_BitScanReverse((unsigned int *)&v23, v22);
    v33 = v23;
    if ( v16 )
      break;
    v24 = (__int64)&v20->LockEntries[v23];
    v22 &= ~(1 << v23);
    if ( (*(_BYTE *)(v24 + 26) & 1) != 0
      && (*(_DWORD *)(v24 + 32) & 1) == 0
      && (*(_QWORD *)(v24 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v24 + 40) == v10 )
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
          v31 = v25;
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
    KeBugCheckEx(0x162u, (ULONG_PTR)v20, (ULONG_PTR)&ExpWakeTimerLock, v10, 0LL);
LABEL_46:
  --v20->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v20, (__int64)&ExpWakeTimerLock, &v31);
  v16 = v20->SpecialApcDisable++ == -1;
  if ( v16 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery(v29, v28);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v7 )
    PoDestroyReasonContext(v7);
LABEL_2:
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a1[1]);
  v4 = v3;
  if ( a1[4].DueTime.QuadPart )
  {
    PsRemoveVirtualizedTimer((PVOID *)&a1[4].DueTime, &a1[4].TimerListEntry.Flink, (KSPIN_LOCK *)&a1[1], v3);
  }
  else
  {
    KxReleaseSpinLock((PKSPIN_LOCK)&a1[1]);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v4);
  }
  return KeCancelTimer(a1);
}
