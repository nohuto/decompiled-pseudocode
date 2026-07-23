/*
 * XREFs of KiDetachProcess @ 0x1400B9BE0
 * Callers:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x14006D570 (MiTrimOrAgeWorkingSet.c)
 *     KeUnstackDetachProcess @ 0x1400F1110 (KeUnstackDetachProcess.c)
 *     KeDetachProcess @ 0x140135C70 (KeDetachProcess.c)
 * Callees:
 *     KiMoveApcState @ 0x140017480 (KiMoveApcState.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiSetAddressPolicy @ 0x1400BA080 (KiSetAddressPolicy.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1401BBD00 (KeBugCheck.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1402798B0 (HvlSwitchVirtualAddressSpace.c)
 */

unsigned __int64 __fastcall KiDetachProcess(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 CurrentIrql; // r14
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v5; // r10
  char v6; // r12
  volatile signed __int32 *p_Lock; // r13
  int v9; // ebp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  $FFD56A4B518EFE5E17FDE2C5CC486782 *v12; // rdi
  $B00C2D09C1C60FFEAC19513EBB7C3DD3 *v13; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _KTHREAD *v15; // rdx
  _LIST_ENTRY *v16; // rax
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  unsigned __int64 v19; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 v21; // r15
  __int64 v22; // r14
  unsigned __int64 DirectoryTableBase; // rsi
  unsigned __int64 v24; // rax
  unsigned __int64 result; // rax
  unsigned __int8 v26; // si
  struct _LIST_ENTRY *v27; // rcx
  struct _LIST_ENTRY *Blink; // rax
  char v29; // si
  unsigned __int8 v30; // bp
  unsigned __int32 v31; // eax
  unsigned __int32 v32; // ett
  signed __int64 *v33; // r13
  signed __int64 v34; // rax
  int v35; // eax
  _DWORD *v36; // rcx
  int v37; // eax
  _DWORD *v38; // rcx
  int v39; // eax
  __int64 v40; // r8
  struct _KPRCB *v41; // rcx
  __int64 v42; // rdx
  struct _KPRCB *v43; // rdi
  _DWORD *v44; // rcx
  int v45; // eax
  _DWORD *v46; // rcx
  int v47; // eax
  _DWORD *v48; // rcx
  int v49; // eax
  int v50; // eax
  struct _KPRCB *v51; // rcx
  struct _KPRCB *v52; // rcx
  int v53; // [rsp+68h] [rbp+10h] BYREF
  int v54; // [rsp+70h] [rbp+18h] BYREF
  __int64 v55; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v5 = 2LL;
  v6 = a2;
  p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
  v9 = a2 & 2;
  if ( (a2 & 2) != 0 )
  {
    LOBYTE(CurrentIrql) = 15;
    v55 = CurrentIrql;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v55 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    v53 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v35 = SchedulerAssist[5];
        SchedulerAssist[5] = v35 + 1;
        if ( v35 == -1 )
LABEL_60:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      v36 = CurrentPrcb->SchedulerAssist;
      if ( v36 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v37 = v36[5] - 1;
          v36[5] = v37;
          if ( !v37 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v53, a2, a3);
      while ( CurrentThread->ThreadLock );
      v38 = CurrentPrcb->SchedulerAssist;
      if ( v38 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v39 = v38[5];
          v38[5] = v39 + 1;
          if ( v39 == -1 )
            goto LABEL_60;
        }
      }
    }
    v5 = 2LL;
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
        v41 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v41->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v41);
      }
      __writecr8(0LL);
      v42 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v42 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v43 = KeGetCurrentPrcb();
      CurrentIrql = (unsigned __int8)v42;
      v54 = 0;
      v44 = v43->SchedulerAssist;
      if ( v44 )
      {
        if ( v43->NestingLevel <= 1u )
        {
          v45 = v44[5];
          v44[5] = v45 + 1;
          if ( v45 == -1 )
LABEL_83:
            KiRemoveSystemWorkPriorityKick(v43);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v46 = v43->SchedulerAssist;
        if ( v46 )
        {
          if ( v43->NestingLevel <= 1u )
          {
            v47 = v46[5] - 1;
            v46[5] = v47;
            if ( !v47 )
              KiRemoveSystemWorkPriorityKick(v43);
          }
        }
        do
          KeYieldProcessorEx(&v54, v42, v40);
        while ( CurrentThread->ThreadLock );
        v48 = v43->SchedulerAssist;
        if ( v48 )
        {
          if ( v43->NestingLevel <= 1u )
          {
            v49 = v48[5];
            v48[5] = v49 + 1;
            if ( v49 == -1 )
              goto LABEL_83;
          }
        }
      }
      v5 = 2LL;
    }
    while ( CurrentThread->ApcState.KernelApcPending );
    v55 = CurrentIrql;
  }
  if ( !CurrentThread->ApcStateIndex
    || (CurrentThread->ApcState.InProgressFlags & 1) != 0
    || (v12 = &CurrentThread->152, ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v12->ApcState.ApcListHead[0].Flink != v12)
    || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    KeBugCheck(6u);
  }
  CurrentThread->MiscFlags |= 0x800u;
  v13 = &CurrentThread->600;
  if ( a1 == (__int64 *)&CurrentThread->600 )
  {
    CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
    CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
    CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
    CurrentThread->ApcState.UserApcPendingAll = CurrentThread->SavedApcState.UserApcPendingAll;
    Flink = v13->SavedApcState.ApcListHead[0].Flink;
    if ( ($B00C2D09C1C60FFEAC19513EBB7C3DD3 *)v13->SavedApcState.ApcListHead[0].Flink == v13 )
    {
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v12->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v12;
      CurrentThread->ApcState.KernelApcPending = 0;
    }
    else
    {
      Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
      v12->ApcState.ApcListHead[0].Flink = Flink;
      CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
      Flink->Blink = (struct _LIST_ENTRY *)v12;
      Blink->Flink = (struct _LIST_ENTRY *)v12;
    }
    v15 = (struct _KTHREAD *)CurrentThread->SavedApcState.ApcListHead[1].Flink;
    v16 = &CurrentThread->ApcState.ApcListHead[1];
    if ( v15 == (struct _KTHREAD *)&CurrentThread->SavedApcStateFill[16] )
    {
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      v16->Flink = v16;
      CurrentThread->ApcState.UserApcPendingAll = 0;
    }
    else
    {
      v27 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
      v16->Flink = (struct _LIST_ENTRY *)v15;
      CurrentThread->ApcState.ApcListHead[1].Blink = v27;
      v15->Header.WaitListHead.Flink = v16;
      v27->Flink = v16;
    }
    CurrentThread->SavedApcState.Process = 0LL;
    CurrentThread->ApcStateIndex = 0;
  }
  else
  {
    KiMoveApcState(a1, (__int64)&CurrentThread->152);
  }
  if ( !v9 )
  {
    CurrentThread->ThreadLock = 0LL;
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v50 = v18[5] - 1;
        v18[5] = v50;
        if ( !v50 )
        {
          KiRemoveSystemWorkPriorityKick(v17);
          v5 = 2LL;
        }
      }
    }
  }
  v19 = (unsigned __int64)KeGetCurrentPrcb();
  Process = CurrentThread->ApcState.Process;
  v21 = *(unsigned __int8 *)(v19 + 209);
  v22 = 8LL * *(unsigned __int8 *)(v19 + 208) + 280;
  _interlockedbittestandset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v22), v21);
  DirectoryTableBase = Process->DirectoryTableBase;
  if ( KiKvaShadow )
  {
    v24 = Process->DirectoryTableBase;
    if ( (DirectoryTableBase & 2) != 0 )
      v24 = DirectoryTableBase | 0x8000000000000000uLL;
    __writegsqword(0x7000u, v24);
    KiSetAddressPolicy(Process->AddressPolicy);
    v5 = 2LL;
  }
  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
  {
    result = HvlSwitchVirtualAddressSpace(DirectoryTableBase);
    v5 = 2LL;
  }
  else
  {
    __writecr3(DirectoryTableBase);
  }
  if ( !KiFlushPcid && KiKvaShadow )
  {
    v19 = __readcr4();
    if ( (v19 & 0x20080) != 0 )
    {
      result = v19 ^ 0x80;
      __writecr4(v19 ^ 0x80);
      __writecr4(v19);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)((char *)p_Lock + v22), v21);
  CurrentThread->MiscFlags &= ~0x800u;
  if ( !v9 )
  {
    v26 = v55;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v55 < 2u )
    {
      v51 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v51->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v51);
      v5 = 2LL;
    }
    result = v26;
    __writecr8(v26);
  }
  if ( (v6 & 1) == 0 )
  {
    result = _InterlockedExchangeAdd(p_Lock + 143, 0xFFFFFFF8) & 0xFFFFFFF8;
    if ( (_DWORD)result == 8 )
    {
      v29 = 0;
      v30 = KeGetCurrentIrql();
      __writecr8(v5);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v30 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      KiAcquireKobjectLockSafe(p_Lock);
      v31 = *((_DWORD *)p_Lock + 143);
      if ( (v31 & 7) == 0 )
      {
        v19 = (unsigned __int64)(p_Lock + 12);
        if ( *(_QWORD *)v19 != v19 && v31 < 8 )
        {
          while ( 1 )
          {
            v19 = v31 & 0xFFFFFFF8 | 3;
            v32 = v31;
            v31 = _InterlockedCompareExchange(p_Lock + 143, v19, v31);
            if ( v32 == v31 )
              break;
            if ( v31 >= 8 )
              goto LABEL_43;
          }
          v29 = 1;
        }
      }
LABEL_43:
      _InterlockedAnd(p_Lock, 0xFFFFFF7F);
      if ( v29 )
      {
        v33 = (signed __int64 *)(p_Lock + 66);
        _m_prefetchw(&KiProcessOutSwapListHead);
        v34 = KiProcessOutSwapListHead;
        do
        {
          *v33 = v34;
          v19 = v34;
          v34 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v33, v34);
        }
        while ( v34 != v19 );
        if ( !v34 )
          KeSetEvent(&KiSwapEvent, 10, 0);
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v30 < 2u )
      {
        v52 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v52->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v52);
      }
      result = v30;
      __writecr8(v30);
    }
  }
  if ( ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v12->ApcState.ApcListHead[0].Flink != v12 )
  {
    LOBYTE(v19) = 1;
    CurrentThread->ApcState.KernelApcPending = 1;
    return HalRequestSoftwareInterrupt(v19);
  }
  return result;
}
