/*
 * XREFs of ExpCancelTimer @ 0x140008730
 * Callers:
 *     NtCancelTimer @ 0x140007B10 (NtCancelTimer.c)
 *     ExTimerRundown @ 0x140081674 (ExTimerRundown.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 *     KeRemoveQueueDpcEx @ 0x1400FD550 (KeRemoveQueueDpcEx.c)
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     KeRemoveQueueApc @ 0x140131FF4 (KeRemoveQueueApc.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpCancelTimer(PKTIMER a1)
{
  unsigned int v1; // esi
  __int64 CurrentIrql; // r12
  char v4; // r14
  unsigned int v5; // ebp
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 Size; // r9
  __int64 Processor; // rax
  __int64 v9; // r15
  _DWORD *SchedulerAssist; // rcx
  __int64 v11; // r13
  volatile signed __int32 *v12; // rdi
  struct _KPRCB *v13; // r12
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // r15
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  struct _LIST_ENTRY *Blink; // rdi
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *v23; // rdx
  _DWORD *v24; // rcx
  _DWORD *v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  int v31; // eax
  int v32; // eax
  struct _KPRCB *v33; // rcx
  volatile signed __int32 *v34; // rdx
  int v35; // [rsp+30h] [rbp-68h] BYREF
  int v36; // [rsp+34h] [rbp-64h] BYREF
  int v37; // [rsp+38h] [rbp-60h] BYREF
  PKTIMER v38; // [rsp+40h] [rbp-58h] BYREF
  struct _KPRCB *v39; // [rsp+48h] [rbp-50h]
  __int64 v40; // [rsp+50h] [rbp-48h]
  _QWORD v41[2]; // [rsp+58h] [rbp-40h] BYREF

  v1 = 0;
  if ( ((__int64)a1[4].Dpc & 1) != 0 )
  {
    Blink = a1[1].Header.WaitListHead.Blink;
    KxAcquireSpinLock((PKSPIN_LOCK)&Blink[99]);
    Flink = a1[3].TimerListEntry.Flink;
    v23 = a1[3].TimerListEntry.Blink;
    if ( Flink->Blink == &a1[3].TimerListEntry && v23->Flink == &a1[3].TimerListEntry )
    {
      v23->Flink = Flink;
      Flink->Blink = v23;
      KxReleaseSpinLock((PKSPIN_LOCK)&Blink[99]);
      LOBYTE(a1[4].Dpc) &= ~1u;
      if ( ((__int64)a1[4].Dpc & 2) != 0 && LOBYTE(a1[3].Processor)
        || KeCancelTimer(a1)
        || (unsigned __int8)KeRemoveQueueDpcEx(&a1[2].TimerListEntry, 0LL) )
      {
        v1 = 1;
      }
      if ( (unsigned __int8)KeRemoveQueueApc(&a1[1].Header.WaitListHead) )
        ++v1;
      goto LABEL_22;
    }
LABEL_65:
    __fastfail(3u);
  }
  CurrentIrql = KeGetCurrentIrql();
  v40 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v38 = 0LL;
  v4 = 0;
  v5 = -129;
  while ( 1 )
  {
    v35 = 0;
    while ( _interlockedbittestandset(&a1->Header.Lock, 7u) )
    {
      do
        KeYieldProcessorEx(&v35);
      while ( (a1->Header.LockNV & 0x80u) != 0 );
    }
    if ( (a1->Header.Reserved1 & 0xC0) == 0 )
      goto LABEL_19;
    CurrentPrcb = KeGetCurrentPrcb();
    Size = a1->Header.Size;
    Processor = a1->Processor;
    v9 = Size;
    v39 = CurrentPrcb;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v36 = 0;
    v11 = KiProcessorBlock[Processor] + 13952;
    v12 = (volatile signed __int32 *)(v11 + 32 * (Size + 16));
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v26 = SchedulerAssist[5];
        SchedulerAssist[5] = v26 + 1;
        if ( v26 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, CurrentPrcb);
      }
    }
    v13 = v39;
    while ( _interlockedbittestandset64(v12, 0LL) )
    {
      v24 = v13->SchedulerAssist;
      if ( v24 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v27 = v24[5] - 1;
          v24[5] = v27;
          if ( !v27 )
            KiRemoveSystemWorkPriorityKick(v13, CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v36);
      while ( *(_QWORD *)v12 );
      v25 = v13->SchedulerAssist;
      if ( v25 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v28 = v25[5];
          v25[5] = v28 + 1;
          if ( v28 == -1 )
            KiRemoveSystemWorkPriorityKick(v13, CurrentPrcb);
        }
      }
    }
    LOBYTE(CurrentIrql) = v40;
    if ( (a1->Header.Reserved1 & 0x80u) == 0 )
    {
      v14 = a1->TimerListEntry.Flink;
      v15 = a1->TimerListEntry.Blink;
      if ( v14->Blink == &a1->TimerListEntry && v15->Flink == &a1->TimerListEntry )
      {
        v15->Flink = v14;
        v14->Blink = v15;
        if ( v15 == v14 )
        {
          *(_DWORD *)(32 * (v9 + 16) + v11 + 28) = -1;
          if ( KiSerializeTimerExpiration )
          {
            v16 = v9 & 0x3F;
            v17 = 8LL * ((unsigned int)v9 >> 6);
          }
          else
          {
            v16 = *(unsigned __int8 *)(v11 - 13743);
            v17 = v9 << 6;
          }
          _interlockedbittestandreset64(
            (volatile signed __int32 *)(qword_140573688[2 * *(unsigned __int8 *)(v11 - 13744)] + v17),
            v16);
        }
        _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        if ( v19 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v32 = v19[5] - 1;
            v19[5] = v32;
            if ( !v32 )
              KiRemoveSystemWorkPriorityKick(v18, v19);
          }
        }
        v5 = -1073741953;
        goto LABEL_18;
      }
      goto LABEL_65;
    }
    _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
    v29 = KeGetCurrentPrcb();
    v30 = v29->SchedulerAssist;
    if ( v30 )
    {
      if ( v29->NestingLevel <= 1u )
      {
        v31 = v30[5] - 1;
        v30[5] = v31;
        if ( !v31 )
          KiRemoveSystemWorkPriorityKick(v29, v30);
      }
    }
    if ( _InterlockedExchange64((volatile __int64 *)(v11 + 8LL * (a1->Header.Reserved1 & 0x3F)), 0LL) )
      break;
    _InterlockedAnd(&a1->Header.Lock, 0xFFFFFF7F);
    v37 = 0;
    while ( (a1->Header.Reserved1 & 0x80u) != 0 )
      KeYieldProcessorEx(&v37);
  }
  v5 = 16777087;
LABEL_18:
  v4 = 1;
LABEL_19:
  _InterlockedAnd(&a1->Header.Lock, v5);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v4 )
  {
    v38 = a1;
    v41[0] = &v38;
    v41[1] = 8LL;
    EtwTraceKernelEvent((unsigned int)v41, 1, 1073872896, 3925, 1538);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
  {
    v33 = KeGetCurrentPrcb();
    v34 = (volatile signed __int32 *)v33->SchedulerAssist;
    _InterlockedAnd(v34, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v33, v34);
  }
  __writecr8((unsigned __int8)CurrentIrql);
LABEL_22:
  LOBYTE(a1[3].Processor) = 0;
  return v1;
}
