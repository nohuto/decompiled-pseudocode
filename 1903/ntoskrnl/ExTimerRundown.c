/*
 * XREFs of ExTimerRundown @ 0x140081274
 * Callers:
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpCancelTimer @ 0x1400086A0 (ExpCancelTimer.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140009A30 (ObpTraceObjectDereferenceIfActive.c)
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     ObpDeferObjectDeletion @ 0x140128484 (ObpDeferObjectDeletion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 ExTimerRundown()
{
  struct _KTHREAD *CurrentThread; // r15
  KIRQL v1; // al
  void **p_StackBase; // r14
  KIRQL v3; // di
  _QWORD *v4; // rax
  __int64 result; // rax
  ULONG_PTR v6; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  int v8; // edi
  KIRQL v9; // r12
  struct _KPRCB *v10; // rcx
  ULONG_PTR v11; // rbp
  signed __int64 BugCheckParameter4; // rdx
  struct _KPRCB *v13; // rcx

  CurrentThread = KeGetCurrentThread();
  v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
  p_StackBase = &CurrentThread[1].StackBase;
  while ( 1 )
  {
    v3 = v1;
    v4 = *p_StackBase;
    if ( *p_StackBase == p_StackBase )
      break;
    v6 = (ULONG_PTR)(v4 - 28);
    ObfReferenceObjectWithTag(v4 - 28, 0x746C6644u);
    KxReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v3);
    v8 = 1;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 64));
    if ( (*(_BYTE *)(v6 + 304) & 1) != 0 && CurrentThread == *(struct _KTHREAD **)(v6 + 80) )
      v8 = ExpCancelTimer((PKTIMER)v6) + 1;
    KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 64));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      v10 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v10);
    }
    __writecr8(v9);
    v11 = v6 - 48;
    ObpTraceObjectDereferenceIfActive(v6 - 48);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 48), -v8) - v8;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( *(_QWORD *)(v11 + 8) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v6 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v6 - 48) >> 8)],
          v6,
          6uLL,
          *(_QWORD *)(v11 + 8));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, v6, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v6 - 48);
    }
    v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
  }
  KxReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    v13 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v13);
  }
  result = v3;
  __writecr8(v3);
  return result;
}
