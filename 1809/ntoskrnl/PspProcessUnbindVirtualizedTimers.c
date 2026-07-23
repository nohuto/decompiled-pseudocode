/*
 * XREFs of PspProcessUnbindVirtualizedTimers @ 0x140090200
 * Callers:
 *     PspExitProcess @ 0x140609E0C (PspExitProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpTimerResume @ 0x14013187C (ExpTimerResume.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PspProcessUnbindVirtualizedTimers(__int64 a1)
{
  __int64 result; // rax
  KSPIN_LOCK *v3; // rbp
  KIRQL v4; // di
  __int64 **v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 *v8; // rsi
  void *v9; // r15
  struct _KPRCB *CurrentPrcb; // rcx

  result = *(unsigned int *)(a1 + 440);
  if ( (result & 0x10) != 0 )
  {
    v3 = (KSPIN_LOCK *)(a1 + 2008);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2008));
    v5 = (__int64 **)(a1 + 2016);
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == (__int64 *)v5 )
        break;
      v7 = *v6;
      if ( (__int64 **)v6[1] != v5 || *(__int64 **)(v7 + 8) != v6 )
        __fastfail(3u);
      v8 = v6 - 36;
      *v5 = (__int64 *)v7;
      *(_QWORD *)(v7 + 8) = v5;
      v9 = (void *)*(v6 - 1);
      KxAcquireSpinLock((PKSPIN_LOCK)v6 - 28);
      v8[35] = 0LL;
      if ( (v8[38] & 2) != 0 )
        ExpTimerResume((PKTIMER)v8);
      KxReleaseSpinLock((PKSPIN_LOCK)v8 + 8);
      ObfDereferenceObjectWithTag(v9, 0x54567350u);
    }
    KxReleaseSpinLock(v3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = v4;
    __writecr8(v4);
  }
  return result;
}
