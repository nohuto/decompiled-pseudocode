/*
 * XREFs of FsRtlCheckLockForOplockRequest @ 0x140138970
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall FsRtlCheckLockForOplockRequest(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v2; // rbx
  char v4; // bp
  KSPIN_LOCK *v5; // rdi
  unsigned __int64 v6; // rsi
  KIRQL v7; // al
  unsigned __int64 v8; // rbx
  KIRQL v9; // r14
  struct _KPRCB *v10; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = *(unsigned __int64 **)(a1 + 24);
  if ( !v2 || !v2[4] && !v2[5] || !*a2 )
    return 1;
  if ( *(_DWORD *)(a1 + 88) )
    return 0;
  v4 = 1;
  v5 = v2 + 3;
  v6 = *a2 - 1LL;
  v7 = KeAcquireSpinLockRaiseToDpc(v2 + 3);
  v8 = *v2;
  v9 = v7;
  KxReleaseSpinLock(v5);
  if ( v6 >= v8 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    v4 = 0;
  }
  else if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
  {
    v10 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v10);
  }
  __writecr8(v9);
  return v4;
}
