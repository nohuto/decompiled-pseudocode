/*
 * XREFs of KeStartThread @ 0x1400D3A34
 * Callers:
 *     KiInitializeIdleThread @ 0x140572E48 (KiInitializeIdleThread.c)
 *     PspInsertThread @ 0x140622450 (PspInsertThread.c)
 * Callees:
 *     KiFreezeSingleThread @ 0x140002A34 (KiFreezeSingleThread.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiUpdateThreadPriority @ 0x1400D0DC0 (KiUpdateThreadPriority.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400D1644 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x1400D563C (KiUpdateNodeAffinitizedFlag.c)
 *     KiSelectIdealProcessor @ 0x1400D56E8 (KiSelectIdealProcessor.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KeSelectNodeForAffinity @ 0x1401157D8 (KeSelectNodeForAffinity.c)
 *     KeFirstGroupAffinityEx @ 0x14012E300 (KeFirstGroupAffinityEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiExtendProcessAffinity @ 0x14029C270 (KiExtendProcessAffinity.c)
 *     EtwTraceIdealProcessor @ 0x14030FFFC (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeStartThread(__int64 a1, unsigned __int64 *a2, unsigned int *a3)
{
  unsigned __int64 *v4; // rsi
  __int64 v6; // rbp
  unsigned int v7; // r12d
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *v9; // rdi
  unsigned __int8 CurrentIrql; // cl
  char BasePriority; // al
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // ebp
  _LIST_ENTRY *p_ThreadListHead; // rsi
  __int64 v17; // r14
  int QuantumReset; // eax
  int v19; // edx
  __int64 v20; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v22; // rax
  __int64 result; // rax
  _LIST_ENTRY **v24; // rcx
  _LIST_ENTRY *p_ProcessListEntry; // rax
  char v26; // dl
  char v27; // cl
  __int64 v28; // r8
  unsigned __int64 v29; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  char v31; // [rsp+20h] [rbp-78h]
  unsigned __int8 v32; // [rsp+28h] [rbp-70h]
  volatile signed __int64 *v33[3]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-50h] BYREF
  __int64 v35; // [rsp+50h] [rbp-48h]

  v4 = a2;
  if ( !a3 && a2 && *a2 )
  {
    v6 = KeSelectNodeForAffinity(a2);
    v31 = 0;
    v7 = *(_DWORD *)(v6 + 100);
  }
  else
  {
    v6 = 0LL;
    v31 = 1;
    v7 = 0;
    if ( !a2 )
    {
      v34 = 0LL;
      v35 = 0LL;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v9 = *(_KPROCESS **)(a1 + 184);
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (4 * *(_DWORD *)&v9->0)) & 8;
  CurrentIrql = KeGetCurrentIrql();
  v32 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&v9->ProcessLock);
  BasePriority = v9->BasePriority;
  *(_BYTE *)(a1 + 563) = BasePriority;
  *(_BYTE *)(a1 + 195) = BasePriority;
  if ( v4 )
  {
    v28 = *((unsigned __int16 *)v4 + 4);
    v29 = v9->Affinity.Bitmap[v28];
    if ( !v29 || (v29 & *v4) != *v4 )
      KiExtendProcessAffinity(v9, (unsigned __int16)v28);
    if ( !*v4 )
      *v4 = v9->Affinity.Bitmap[*((unsigned __int16 *)v4 + 4)];
  }
  else
  {
    if ( v9 == CurrentThread->Process )
    {
      LOWORD(v35) = CurrentThread->UserAffinity.Group;
      v34 = v9->Affinity.Bitmap[(unsigned __int16)v35];
    }
    else
    {
      KeFirstGroupAffinityEx(&v34, &v9->Affinity);
    }
    v4 = &v34;
  }
  *(_WORD *)(a1 + 584) = *((_WORD *)v4 + 4);
  *(_QWORD *)(a1 + 576) = *v4;
  *(_WORD *)(a1 + 560) = *((_WORD *)v4 + 4);
  *(_QWORD *)(a1 + 552) = *v4;
  KiUpdateNodeAffinitizedFlag(a1);
  if ( a3 )
  {
    v15 = *a3;
  }
  else
  {
    if ( !v6 )
    {
      v13 = *((unsigned __int16 *)v4 + 4);
      v7 = v9->ThreadSeed[v13];
      v6 = KeNodeBlock[v9->IdealNode[v13]];
    }
    *v4 &= *(_QWORD *)(v6 + 136);
    v14 = KiSelectIdealProcessor(v6, v7, v4);
    v15 = v14;
    if ( v31 )
      v9->ThreadSeed[*((unsigned __int16 *)v4 + 4)] = v14;
  }
  *(_DWORD *)(a1 + 196) = v15;
  p_ThreadListHead = &v9->ThreadListHead;
  *(_DWORD *)(a1 + 588) = v15;
  v17 = KiProcessorBlock[v15];
  if ( p_ThreadListHead->Flink == p_ThreadListHead && v9 != (_KPROCESS *)&KiInitialProcess )
  {
    v33[0] = 0LL;
    v33[1] = KiProcessListLock;
    KxAcquireQueuedSpinLock((__int64)v33, KiProcessListLock, v12);
    v24 = (_LIST_ENTRY **)qword_140422DE8;
    p_ProcessListEntry = &v9->ProcessListEntry;
    if ( *(__int64 **)qword_140422DE8 != &KiProcessListHead )
      goto LABEL_51;
    v9->ProcessListEntry.Blink = (struct _LIST_ENTRY *)qword_140422DE8;
    p_ProcessListEntry->Flink = (struct _LIST_ENTRY *)&KiProcessListHead;
    *v24 = p_ProcessListEntry;
    qword_140422DE8 = (__int64)&v9->ProcessListEntry;
    KxReleaseQueuedSpinLock(v33);
  }
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (*(_DWORD *)&v9->0 << 6)) & 0x100;
  QuantumReset = (unsigned __int8)v9->QuantumReset;
  v19 = *(_DWORD *)(a1 + 120);
  *(_BYTE *)(a1 + 651) = QuantumReset;
  v20 = (unsigned int)(KiCyclesPerClockQuantum * QuantumReset);
  if ( (v19 & 0x20) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
  *(_QWORD *)(a1 + 32) = v20;
  KiAcquireKobjectLockSafe(v9);
  Blink = v9->ThreadListHead.Blink;
  v22 = (struct _LIST_ENTRY *)(a1 + 760);
  if ( Blink->Flink != p_ThreadListHead )
LABEL_51:
    __fastfail(3u);
  v22->Flink = p_ThreadListHead;
  *(_QWORD *)(a1 + 768) = Blink;
  Blink->Flink = v22;
  v9->ThreadListHead.Blink = v22;
  _InterlockedAnd(&v9->Header.Lock, 0xFFFFFF7F);
  if ( (*(_DWORD *)&v9->0 & 8) != 0 )
    KiFreezeSingleThread((__int64)KeGetCurrentPrcb(), a1);
  *(_QWORD *)(a1 + 104) = v9->SchedulingGroup;
  if ( v9->SchedulingGroup )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  KiUpdateSharedReadyQueueAffinityThread(v17, a1);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1466LL) == 2 && !*(_BYTE *)(a1 + 564) && (*(_DWORD *)(a1 + 120) & 8) == 0 )
  {
    v26 = *(_BYTE *)(a1 + 195);
    if ( v26 > 0 )
    {
      v27 = BYTE6(Mm64BitPhysicalAddress) + *(_BYTE *)(a1 + 563);
      if ( v27 >= 16 )
        v27 = 15;
      if ( v27 > v26 )
      {
        *(_BYTE *)(a1 + 564) = (v27 - v26) & 0xF;
        KiUpdateThreadPriority(0LL, a1, (_SINGLE_LIST_ENTRY *)(unsigned int)v27, 0LL);
        KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
    *(_DWORD *)(a1 + 1504) = v9->ProcessTimerDelay;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&v9->ProcessLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v32;
  __writecr8(v32);
  if ( (xmmword_140542350 & 0x8000000) != 0 )
  {
    result = EtwTraceIdealProcessor(a1, 1350LL, 0xFFFFFFFFLL, v15);
    if ( (xmmword_140542350 & 0x8000000) != 0 )
      result = EtwTraceIdealProcessor(a1, 1351LL, 0xFFFFFFFFLL, v15);
  }
  _InterlockedExchangeAdd(&v9->StackCount.Value, 8u);
  return result;
}
