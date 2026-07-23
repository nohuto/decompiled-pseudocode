/*
 * XREFs of PspSetProcessTimerDelayForKTimers @ 0x1402EA884
 * Callers:
 *     PspApplyTimerDelayProcess @ 0x1402EA344 (PspApplyTimerDelayProcess.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeAdjustTimerDelayProcess @ 0x14028E758 (KeAdjustTimerDelayProcess.c)
 *     ExpTimerAdjust @ 0x14031CB80 (ExpTimerAdjust.c)
 */

__int64 __fastcall PspSetProcessTimerDelayForKTimers(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  unsigned int v3; // esi
  __int64 v4; // r8
  KIRQL v5; // r12
  bool v6; // zf
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned int v9; // ecx
  unsigned __int64 v10; // rbp
  volatile signed __int32 *v11; // rbx
  unsigned __int64 v12; // r13
  volatile signed __int32 *v13; // r14
  char v14; // al
  unsigned int v15; // ecx
  _QWORD *v16; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v19; // [rsp+70h] [rbp+8h]
  __int64 v20; // [rsp+78h] [rbp+10h]

  v1 = (KSPIN_LOCK *)(a1 + 2008);
  v3 = 10000 * (*(_DWORD *)(a1 + 1984) & 0x3FFFFFFF);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2008));
  LOBYTE(v19) = v5;
  if ( v3 == *(_DWORD *)(a1 + 68) )
  {
    KxReleaseSpinLock(v1);
    if ( !KiIrqlFlags )
      goto LABEL_29;
    v6 = (KiIrqlFlags & 1) == 0;
    goto LABEL_25;
  }
  v7 = 0LL;
  v8 = MEMORY[0xFFFFF78000000008];
  v9 = *(_DWORD *)(a1 + 68);
  v20 = MEMORY[0xFFFFF78000000008];
  if ( v3 <= v9 )
  {
    if ( v3 < v9 )
    {
      v10 = -1LL;
      v11 = *(volatile signed __int32 **)(a1 + 2016);
      if ( v11 != (volatile signed __int32 *)(a1 + 2016) )
      {
        v12 = v19;
        do
        {
          v13 = v11 - 72;
          KiAcquireKobjectLockSafe(v11 - 72, v8, v4);
          v14 = *((_BYTE *)v11 - 285) & 0x40;
          if ( v14 )
            v12 = *((_QWORD *)v13 + 3);
          _InterlockedAnd(v13, 0xFFFFFF7F);
          if ( v14 && v12 < v10 )
            v10 = v12;
          v11 = *(volatile signed __int32 **)v11;
        }
        while ( v11 != (volatile signed __int32 *)(a1 + 2016) );
        v9 = *(_DWORD *)(a1 + 68);
        v8 = v20;
      }
      v15 = v9 - v3;
      if ( v10 - v15 >= v8 )
        v7 = -(__int64)v15;
      else
        v7 = v8 - v10;
      v1 = (KSPIN_LOCK *)(a1 + 2008);
    }
  }
  else
  {
    v7 = v3 - v9;
  }
  v16 = *(_QWORD **)(a1 + 2016);
  if ( v16 != (_QWORD *)(a1 + 2016) )
  {
    do
    {
      ExpTimerAdjust((PKTIMER)(v16 - 36), v20);
      v16 = (_QWORD *)*v16;
    }
    while ( v16 != (_QWORD *)(a1 + 2016) );
    v1 = (KSPIN_LOCK *)(a1 + 2008);
  }
  KeAdjustTimerDelayProcess(a1, v7, v3);
  KxReleaseSpinLock(v1);
  if ( KiIrqlFlags )
  {
    v6 = (KiIrqlFlags & 1) == 0;
LABEL_25:
    if ( !v6 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
LABEL_29:
  __writecr8(v5);
  return 0LL;
}
