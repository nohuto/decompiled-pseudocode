/*
 * XREFs of PspSetProcessFreezeStateCallback @ 0x1400E6090
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 *     ExpTimerResume @ 0x1400E66F4 (ExpTimerResume.c)
 *     ExpTimerPause @ 0x140135048 (ExpTimerPause.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PspRequestProcessExecutionState @ 0x14069473C (PspRequestProcessExecutionState.c)
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

  v2 = *(_QWORD *)(a1 + 952);
  if ( (*(_DWORD *)(a1 + 780) & 0x40000008) == 0
    && (*(_DWORD *)(a1 + 780) & 0x4000000) != 0
    && (*(_DWORD *)(v2 + 1304) & 0x40000) != 0
    && (**(_DWORD **)a2 & 1) != 0
    && *(_DWORD *)(v2 + 856) <= 1u )
  {
    v5 = (KSPIN_LOCK *)(a1 + 2056);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2056));
    v12 = v6;
    v13 = MEMORY[0xFFFFF78000000008];
    v7 = *(_QWORD **)(a1 + 2064);
    if ( v7 != (_QWORD *)(a1 + 2064) )
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
      while ( v7 != (_QWORD *)(a1 + 2064) );
      v6 = v12;
      v5 = (KSPIN_LOCK *)(a1 + 2056);
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
