/*
 * XREFs of PspSetProcessTimerDelayForKTimers @ 0x1403081A4
 * Callers:
 *     PspApplyTimerDelayProcess @ 0x140307C44 (PspApplyTimerDelayProcess.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeAdjustTimerDelayProcess @ 0x1402A502C (KeAdjustTimerDelayProcess.c)
 *     ExpTimerAdjust @ 0x14033BC04 (ExpTimerAdjust.c)
 */

__int64 __fastcall PspSetProcessTimerDelayForKTimers(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  unsigned int v3; // esi
  KIRQL v4; // r12
  bool v5; // zf
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned int v8; // ecx
  unsigned __int64 v9; // rbp
  volatile signed __int32 *v10; // rbx
  unsigned __int64 v11; // r13
  volatile signed __int32 *v12; // r14
  char v13; // al
  unsigned int v14; // ecx
  _QWORD *v15; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v18; // [rsp+70h] [rbp+8h]
  __int64 v19; // [rsp+78h] [rbp+10h]

  v1 = (KSPIN_LOCK *)(a1 + 2056);
  v3 = 10000 * (*(_DWORD *)(a1 + 2032) & 0x3FFFFFFF);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2056));
  LOBYTE(v18) = v4;
  if ( v3 == *(_DWORD *)(a1 + 68) )
  {
    KxReleaseSpinLock(v1);
    if ( !KiIrqlFlags )
      goto LABEL_29;
    v5 = (KiIrqlFlags & 1) == 0;
    goto LABEL_25;
  }
  v6 = 0LL;
  v7 = MEMORY[0xFFFFF78000000008];
  v8 = *(_DWORD *)(a1 + 68);
  v19 = MEMORY[0xFFFFF78000000008];
  if ( v3 <= v8 )
  {
    if ( v3 < v8 )
    {
      v9 = -1LL;
      v10 = *(volatile signed __int32 **)(a1 + 2064);
      if ( v10 != (volatile signed __int32 *)(a1 + 2064) )
      {
        v11 = v18;
        do
        {
          v12 = v10 - 72;
          KiAcquireKobjectLockSafe(v10 - 72);
          v13 = *((_BYTE *)v10 - 285) & 0x40;
          if ( v13 )
            v11 = *((_QWORD *)v12 + 3);
          _InterlockedAnd(v12, 0xFFFFFF7F);
          if ( v13 && v11 < v9 )
            v9 = v11;
          v10 = *(volatile signed __int32 **)v10;
        }
        while ( v10 != (volatile signed __int32 *)(a1 + 2064) );
        v8 = *(_DWORD *)(a1 + 68);
        v7 = v19;
      }
      v14 = v8 - v3;
      if ( v9 - v14 >= v7 )
        v6 = -(__int64)v14;
      else
        v6 = v7 - v9;
      v1 = (KSPIN_LOCK *)(a1 + 2056);
    }
  }
  else
  {
    v6 = v3 - v8;
  }
  v15 = *(_QWORD **)(a1 + 2064);
  if ( v15 != (_QWORD *)(a1 + 2064) )
  {
    do
    {
      ExpTimerAdjust((PKTIMER)(v15 - 36), v19);
      v15 = (_QWORD *)*v15;
    }
    while ( v15 != (_QWORD *)(a1 + 2064) );
    v1 = (KSPIN_LOCK *)(a1 + 2056);
  }
  KeAdjustTimerDelayProcess(a1, v6, v3);
  KxReleaseSpinLock(v1);
  if ( KiIrqlFlags )
  {
    v5 = (KiIrqlFlags & 1) == 0;
LABEL_25:
    if ( !v5 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
LABEL_29:
  __writecr8(v4);
  return 0LL;
}
