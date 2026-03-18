/*
 * XREFs of ExReferenceCallBackBlock @ 0x14001CEA0
 * Callers:
 *     IoBoostThreadIoPriority @ 0x1400E61EC (IoBoostThreadIoPriority.c)
 *     KiEnumerateCallback @ 0x14013CE90 (KiEnumerateCallback.c)
 *     IoUnregisterPriorityCallback @ 0x140298FA0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1402A5740 (KeDeregisterBoundCallback.c)
 *     KiHandleBound @ 0x1402A5E20 (KiHandleBound.c)
 *     PoIssueCoalescingNotification @ 0x1402F7210 (PoIssueCoalescingNotification.c)
 *     ExCallCallBack @ 0x1405EB234 (ExCallCallBack.c)
 *     NtFindAtom @ 0x1405EB2B0 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1405EB440 (PsInvokeWin32Callout.c)
 *     PspCallProcessNotifyRoutines @ 0x1405EB524 (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1405EB7B0 (PspCallThreadNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x1405EB900 (PsCallImageNotifyRoutines.c)
 *     ExCallSessionCallBack @ 0x1406361E8 (ExCallSessionCallBack.c)
 *     DbgkLkmdRegisterCallback @ 0x14076A3D0 (DbgkLkmdRegisterCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x14076A850 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x14084B590 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x14084B634 (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x1408A7700 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1408CAC50 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1408CAD40 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     ExAcquireRundownProtectionEx @ 0x140096AD0 (ExAcquireRundownProtectionEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExReferenceCallBackBlock(signed __int64 *a1)
{
  signed __int64 v2; // rbx
  signed __int64 v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  KIRQL v9; // si
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int64 Count; // rdx
  bool v12; // zf
  signed __int64 v13; // rax
  unsigned __int64 v14; // rdx

  _m_prefetchw(a1);
  v2 = *a1;
  if ( (*a1 & 0xF) != 0 )
  {
    do
    {
      v6 = _InterlockedCompareExchange64(a1, v2 - 1, v2);
      if ( v2 == v6 )
        break;
      v2 = v6;
    }
    while ( (v6 & 0xF) != 0 );
  }
  if ( !v2 )
    return 0LL;
  v4 = v2 & 0xF;
  if ( (v2 & 0xF) != 0 )
  {
    v5 = (struct _EX_RUNDOWN_REF *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v4 == 1 && ExAcquireRundownProtectionEx(v5, 0xFu) )
    {
      _m_prefetchw(a1);
      v7 = *a1;
      while ( (v7 & 0xF) == 0 )
      {
        if ( v5 != (struct _EX_RUNDOWN_REF *)(v7 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v8 = v7;
        v7 = _InterlockedCompareExchange64(a1, v7 + 15, v7);
        if ( v8 == v7 )
          return v5;
      }
      _m_prefetchw(v5);
      Count = v5->Count;
      if ( (v5->Count & 1) != 0 )
      {
LABEL_29:
        v14 = Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v14, 0xFFFFFFFFFFFFFFF1uLL) == 15
          && !_interlockedbittestandreset((volatile signed __int32 *)(v14 + 32), 0) )
        {
          KeSetEvent((PRKEVENT)(v14 + 8), 0, 0);
        }
      }
      else
      {
        while ( 1 )
        {
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, Count - 30, Count);
          v12 = Count == v13;
          Count = v13;
          if ( v12 )
            break;
          if ( (v13 & 1) != 0 )
            goto LABEL_29;
        }
      }
    }
  }
  else
  {
    v9 = ExAcquireSpinLockShared(&ExpCallBackFlush);
    v5 = (struct _EX_RUNDOWN_REF *)(*a1 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v5 && !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*a1 & 0xFFFFFFFFFFFFFFF0uLL)) )
      v5 = 0LL;
    ExReleaseSpinLockSharedFromDpcLevel(&ExpCallBackFlush);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v9);
    if ( !v5 )
      return 0LL;
  }
  return v5;
}
