/*
 * XREFs of PspSetProcessFreezeStateCallback @ 0x140131720
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpTimerResume @ 0x14013187C (ExpTimerResume.c)
 *     ExpTimerPause @ 0x14013214C (ExpTimerPause.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PspRequestProcessExecutionState @ 0x140605508 (PspRequestProcessExecutionState.c)
 */

__int64 __fastcall PspSetProcessFreezeStateCallback(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r8
  KSPIN_LOCK *v5; // r12
  KIRQL v6; // bp
  _QWORD *v7; // rsi
  __int64 v8; // rbp
  _QWORD *v9; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  KIRQL v12; // [rsp+60h] [rbp+8h]
  __int64 v13; // [rsp+68h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 944);
  if ( (*(_DWORD *)(a1 + 772) & 0x40000008) == 0
    && (*(_DWORD *)(a1 + 772) & 0x4000000) != 0
    && (*(_DWORD *)(v2 + 1304) & 0x40000) != 0
    && (**(_DWORD **)a2 & 1) != 0
    && *(_DWORD *)(v2 + 856) <= 1u )
  {
    v5 = (KSPIN_LOCK *)(a1 + 2008);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2008));
    v12 = v6;
    v13 = MEMORY[0xFFFFF78000000008];
    v7 = *(_QWORD **)(a1 + 2016);
    if ( v7 != (_QWORD *)(a1 + 2016) )
    {
      v8 = MEMORY[0xFFFFF78000000014];
      do
      {
        v9 = v7 - 36;
        if ( *(_BYTE *)(*(_QWORD *)a2 + 4LL) )
        {
          ExpTimerPause(v7 - 36, v8, v13, 0LL);
        }
        else
        {
          KxAcquireSpinLock(v9 + 8);
          ExpTimerResume((PKTIMER)(v7 - 36));
          KxReleaseSpinLock(v9 + 8);
        }
        v7 = (_QWORD *)*v7;
      }
      while ( v7 != (_QWORD *)(a1 + 2016) );
      v6 = v12;
      v5 = (KSPIN_LOCK *)(a1 + 2008);
    }
    KxReleaseSpinLock(v5);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v6);
  }
  PspRequestProcessExecutionState(a1, a2[2], 0LL);
  return 0LL;
}
