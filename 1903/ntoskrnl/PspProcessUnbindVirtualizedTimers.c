/*
 * XREFs of PspProcessUnbindVirtualizedTimers @ 0x1400E77FC
 * Callers:
 *     PspExitProcess @ 0x140671BFC (PspExitProcess.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 *     ExpTimerResume @ 0x1400E66F4 (ExpTimerResume.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PspProcessUnbindVirtualizedTimers(__int64 a1)
{
  __int64 result; // rax
  KSPIN_LOCK *v3; // rbp
  KIRQL v4; // di
  __int64 **v5; // rbx
  __int64 v6; // r12
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rsi
  void *v10; // r15
  struct _KPRCB *CurrentPrcb; // rcx

  result = *(unsigned int *)(a1 + 440);
  if ( (result & 0x10) != 0 )
  {
    v3 = (KSPIN_LOCK *)(a1 + 2056);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2056));
    v5 = (__int64 **)(a1 + 2064);
    v6 = MEMORY[0xFFFFF78000000008];
    while ( 1 )
    {
      v7 = *v5;
      if ( *v5 == (__int64 *)v5 )
        break;
      v8 = *v7;
      if ( (__int64 **)v7[1] != v5 || *(__int64 **)(v8 + 8) != v7 )
        __fastfail(3u);
      v9 = v7 - 36;
      *v5 = (__int64 *)v8;
      *(_QWORD *)(v8 + 8) = v5;
      v10 = (void *)*(v7 - 1);
      KxAcquireSpinLock((PKSPIN_LOCK)v7 - 28);
      v9[35] = 0LL;
      if ( (v9[38] & 2) != 0 )
        ExpTimerResume((PKTIMER)v9, v6);
      KxReleaseSpinLock((PKSPIN_LOCK)v9 + 8);
      ObfDereferenceObjectWithTag(v10, 0x54567350u);
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
