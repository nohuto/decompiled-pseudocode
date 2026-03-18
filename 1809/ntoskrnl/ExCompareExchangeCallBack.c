/*
 * XREFs of ExCompareExchangeCallBack @ 0x14018665C
 * Callers:
 *     IoRegisterPriorityCallback @ 0x1401865B0 (IoRegisterPriorityCallback.c)
 *     IoUnregisterPriorityCallback @ 0x140283AA0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x14028EB50 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x14028EFC0 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x140748000 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x1407480D0 (PsEstablishWin32Callouts.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x1407481B0 (PspSetCreateThreadNotifyRoutine.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140748240 (PsSetLoadImageNotifyRoutineEx.c)
 *     PoRegisterCoalescingCallback @ 0x140748380 (PoRegisterCoalescingCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140748480 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x140811B60 (DbgkLkmdUnregisterCallback.c)
 *     PoUnregisterCoalescingCallback @ 0x14086B440 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x14088C830 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x14088C930 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     ExAcquireRundownProtectionEx @ 0x1400D78A0 (ExAcquireRundownProtectionEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall ExCompareExchangeCallBack(signed __int64 *a1, struct _EX_RUNDOWN_REF *a2, __int64 a3)
{
  signed __int64 i; // rbx
  signed __int64 *v7; // rsi
  signed __int64 Count; // rax
  signed __int64 v9; // rtt
  signed __int64 v11; // rax
  KIRQL v12; // di
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v14; // ebx
  signed __int64 v15; // rdx
  bool v16; // zf
  signed __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax

  if ( a2 && !ExAcquireRundownProtectionEx(a2, 0x10u) )
    return 0;
  _m_prefetchw(a1);
  for ( i = *a1; (a3 ^ (unsigned __int64)i) <= 0xF; i = v11 )
  {
    v11 = _InterlockedCompareExchange64(a1, ((unsigned __int64)a2 | 0xF) & -(__int64)(a2 != 0LL), i);
    if ( i == v11 )
      break;
  }
  v7 = (signed __int64 *)(i & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (i & 0xFFFFFFFFFFFFFFF0uLL) != a3 )
  {
    if ( a2 )
    {
      _m_prefetchw(a2);
      Count = a2->Count;
      while ( (Count & 1) == 0 )
      {
        v9 = Count;
        Count = _InterlockedCompareExchange64((volatile signed __int64 *)a2, Count - 32, Count);
        if ( v9 == Count )
          return 0;
      }
      v19 = Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFF0uLL) == 16
        && !_interlockedbittestandreset((volatile signed __int32 *)(v19 + 32), 0) )
      {
        KeSetEvent((PRKEVENT)(v19 + 8), 0, 0);
      }
    }
    return 0;
  }
  if ( v7 )
  {
    v12 = ExAcquireSpinLockExclusive(&ExpCallBackFlush);
    ExReleaseSpinLockExclusiveFromDpcLevel(&ExpCallBackFlush);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v12);
    v14 = (i & 0xF) + 1;
    _m_prefetchw(v7);
    v15 = *v7;
    if ( (*v7 & 1) != 0 )
    {
LABEL_23:
      v18 = v15 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v18, -(__int64)v14) == v14
        && !_interlockedbittestandreset((volatile signed __int32 *)(v18 + 32), 0) )
      {
        KeSetEvent((PRKEVENT)(v18 + 8), 0, 0);
      }
    }
    else
    {
      while ( 1 )
      {
        v17 = _InterlockedCompareExchange64(v7, v15 - 2 * v14, v15);
        v16 = v15 == v17;
        v15 = v17;
        if ( v16 )
          break;
        if ( (v17 & 1) != 0 )
          goto LABEL_23;
      }
    }
  }
  return 1;
}
