/*
 * XREFs of KiDetachProcess @ 0x140043810
 * Callers:
 *     KeUnstackDetachProcess @ 0x1400437D0 (KeUnstackDetachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x140048180 (MiTrimOrAgeWorkingSet.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     KeDetachProcess @ 0x140138580 (KeDetachProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiSetAddressPolicy @ 0x140043BF0 (KiSetAddressPolicy.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KiMoveApcState @ 0x1400CE0A0 (KiMoveApcState.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1401C4680 (KeBugCheck.c)
 *     HvlSwitchVirtualAddressSpace @ 0x14028D770 (HvlSwitchVirtualAddressSpace.c)
 */

unsigned __int64 __fastcall KiDetachProcess(struct _KTHREAD *a1, char a2)
{
  __int64 CurrentIrql; // r14
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v4; // r10
  volatile signed __int32 *p_Lock; // r13
  int v8; // ebp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  $C6908ADE9723D0A04AF8EE82D8D15C40 *v11; // rdi
  $B3BA4C768623B88C7BF94E30725A7E5E *v12; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _KTHREAD *v14; // rdx
  _LIST_ENTRY *v15; // rax
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  unsigned __int64 v18; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 v20; // r15
  __int64 v21; // r14
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v23; // rax
  unsigned __int64 result; // rax
  unsigned __int8 v25; // si
  struct _LIST_ENTRY *Blink; // rax
  char v27; // si
  unsigned __int8 v28; // bp
  unsigned __int32 v29; // eax
  struct _LIST_ENTRY *v30; // rcx
  signed __int64 *v31; // r13
  signed __int64 v32; // rax
  unsigned __int32 v33; // ett
  _DWORD *v34; // rcx
  _DWORD *v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  struct _KPRCB *v39; // rcx
  unsigned __int8 v40; // dl
  struct _KPRCB *v41; // rdi
  _DWORD *v42; // rcx
  int v43; // eax
  _DWORD *v44; // rcx
  int v45; // eax
  _DWORD *v46; // rcx
  int v47; // eax
  int v48; // eax
  struct _KPRCB *v49; // rcx
  struct _KPRCB *v50; // rcx
  int v51; // [rsp+68h] [rbp+10h] BYREF
  int v52; // [rsp+70h] [rbp+18h] BYREF
  __int64 v53; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = 2LL;
  p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
  v8 = a2 & 2;
  if ( (a2 & 2) != 0 )
  {
    LOBYTE(CurrentIrql) = 15;
    v53 = CurrentIrql;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v53 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    v51 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v36 = SchedulerAssist[5];
        SchedulerAssist[5] = v36 + 1;
        if ( v36 == -1 )
LABEL_62:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      v34 = CurrentPrcb->SchedulerAssist;
      if ( v34 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v37 = v34[5] - 1;
          v34[5] = v37;
          if ( !v37 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v51);
      while ( CurrentThread->ThreadLock );
      v35 = CurrentPrcb->SchedulerAssist;
      if ( v35 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v38 = v35[5];
          v35[5] = v38 + 1;
          if ( v38 == -1 )
            goto LABEL_62;
        }
      }
    }
    v4 = 2LL;
  }
  if ( CurrentThread->ApcState.KernelApcPending )
  {
    do
    {
      if ( CurrentThread->SpecialApcDisable || (_BYTE)CurrentIrql )
        break;
      KiReleaseThreadLockSafe(CurrentThread);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v39->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v39);
      }
      __writecr8(0LL);
      v40 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v40 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v41 = KeGetCurrentPrcb();
      CurrentIrql = v40;
      v52 = 0;
      v42 = v41->SchedulerAssist;
      if ( v42 )
      {
        if ( v41->NestingLevel <= 1u )
        {
          v43 = v42[5];
          v42[5] = v43 + 1;
          if ( v43 == -1 )
LABEL_82:
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v44 = v41->SchedulerAssist;
        if ( v44 )
        {
          if ( v41->NestingLevel <= 1u )
          {
            v45 = v44[5] - 1;
            v44[5] = v45;
            if ( !v45 )
              KiRemoveSystemWorkPriorityKick(v41);
          }
        }
        do
          KeYieldProcessorEx(&v52);
        while ( CurrentThread->ThreadLock );
        v46 = v41->SchedulerAssist;
        if ( v46 )
        {
          if ( v41->NestingLevel <= 1u )
          {
            v47 = v46[5];
            v46[5] = v47 + 1;
            if ( v47 == -1 )
              goto LABEL_82;
          }
        }
      }
      v4 = 2LL;
    }
    while ( CurrentThread->ApcState.KernelApcPending );
    v53 = CurrentIrql;
  }
  if ( !CurrentThread->ApcStateIndex
    || (CurrentThread->ApcState.InProgressFlags & 1) != 0
    || (v11 = &CurrentThread->152, ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v11->ApcState.ApcListHead[0].Flink != v11)
    || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    KeBugCheck(6u);
  }
  CurrentThread->MiscFlags |= 0x800u;
  v12 = &CurrentThread->600;
  if ( a1 == (struct _KTHREAD *)&CurrentThread->600 )
  {
    CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
    CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
    CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
    CurrentThread->ApcState.UserApcPendingAll = CurrentThread->SavedApcState.UserApcPendingAll;
    Flink = v12->SavedApcState.ApcListHead[0].Flink;
    if ( ($B3BA4C768623B88C7BF94E30725A7E5E *)v12->SavedApcState.ApcListHead[0].Flink == v12 )
    {
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v11->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v11;
      CurrentThread->ApcState.KernelApcPending = 0;
    }
    else
    {
      Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
      v11->ApcState.ApcListHead[0].Flink = Flink;
      CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
      Flink->Blink = (struct _LIST_ENTRY *)v11;
      Blink->Flink = (struct _LIST_ENTRY *)v11;
    }
    v14 = (struct _KTHREAD *)CurrentThread->SavedApcState.ApcListHead[1].Flink;
    v15 = &CurrentThread->ApcState.ApcListHead[1];
    if ( v14 == (struct _KTHREAD *)&CurrentThread->SavedApcStateFill[16] )
    {
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      v15->Flink = v15;
      CurrentThread->ApcState.UserApcPendingAll = 0;
    }
    else
    {
      v30 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
      v15->Flink = (struct _LIST_ENTRY *)v14;
      CurrentThread->ApcState.ApcListHead[1].Blink = v30;
      v14->Header.WaitListHead.Flink = v15;
      v30->Flink = v15;
    }
    CurrentThread->SavedApcState.Process = 0LL;
    CurrentThread->ApcStateIndex = 0;
  }
  else
  {
    KiMoveApcState(a1, &CurrentThread->152);
  }
  if ( !v8 )
  {
    CurrentThread->ThreadLock = 0LL;
    v16 = KeGetCurrentPrcb();
    v17 = v16->SchedulerAssist;
    if ( v17 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v48 = v17[5] - 1;
        v17[5] = v48;
        if ( !v48 )
        {
          KiRemoveSystemWorkPriorityKick(v16);
          v4 = 2LL;
        }
      }
    }
  }
  v18 = (unsigned __int64)KeGetCurrentPrcb();
  Process = CurrentThread->ApcState.Process;
  v20 = *(unsigned __int8 *)(v18 + 209);
  v21 = 8LL * *(unsigned __int8 *)(v18 + 208) + 280;
  _interlockedbittestandset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v21), v20);
  DirectoryTableBase = Process->DirectoryTableBase;
  if ( KiKvaShadow )
  {
    v23 = Process->DirectoryTableBase;
    if ( (DirectoryTableBase & 2) != 0 )
      v23 = DirectoryTableBase | 0x8000000000000000uLL;
    __writegsqword(0x7000u, v23);
    KiSetAddressPolicy(Process->AddressPolicy);
    v4 = 2LL;
  }
  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
  {
    result = HvlSwitchVirtualAddressSpace(DirectoryTableBase);
    v4 = 2LL;
  }
  else
  {
    __writecr3(DirectoryTableBase);
  }
  if ( !KiFlushPcid && KiKvaShadow )
  {
    v18 = __readcr4();
    if ( (v18 & 0x20080) != 0 )
    {
      result = v18 ^ 0x80;
      __writecr4(v18 ^ 0x80);
      __writecr4(v18);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)((char *)p_Lock + v21), v20);
  CurrentThread->MiscFlags &= ~0x800u;
  if ( !v8 )
  {
    v25 = v53;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v53 < 2u )
    {
      v49 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v49->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v49);
      v4 = 2LL;
    }
    result = v25;
    __writecr8(v25);
  }
  if ( (a2 & 1) == 0 )
  {
    result = _InterlockedExchangeAdd(p_Lock + 144, 0xFFFFFFF8) & 0xFFFFFFF8;
    if ( (_DWORD)result == 8 )
    {
      v27 = 0;
      v28 = KeGetCurrentIrql();
      __writecr8(v4);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      KiAcquireKobjectLockSafe(p_Lock);
      v29 = *((_DWORD *)p_Lock + 144);
      if ( (v29 & 7) == 0 )
      {
        v18 = (unsigned __int64)(p_Lock + 12);
        if ( *(_QWORD *)v18 != v18 && v29 < 8 )
        {
          while ( 1 )
          {
            v18 = v29 & 0xFFFFFFF8 | 3;
            v33 = v29;
            v29 = _InterlockedCompareExchange(p_Lock + 144, v18, v29);
            if ( v33 == v29 )
              break;
            if ( v29 >= 8 )
              goto LABEL_39;
          }
          v27 = 1;
        }
      }
LABEL_39:
      _InterlockedAnd(p_Lock, 0xFFFFFF7F);
      if ( v27 )
      {
        v31 = (signed __int64 *)(p_Lock + 66);
        _m_prefetchw(&KiProcessOutSwapListHead);
        v32 = KiProcessOutSwapListHead;
        do
        {
          *v31 = v32;
          v18 = v32;
          v32 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v31, v32);
        }
        while ( v32 != v18 );
        if ( !v32 )
          KeSetEvent(&KiSwapEvent, 10, 0);
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v28 < 2u )
      {
        v50 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v50);
      }
      result = v28;
      __writecr8(v28);
    }
  }
  if ( ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v11->ApcState.ApcListHead[0].Flink != v11 )
  {
    LOBYTE(v18) = 1;
    CurrentThread->ApcState.KernelApcPending = 1;
    return HalRequestSoftwareInterrupt(v18);
  }
  return result;
}
