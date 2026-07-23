/*
 * XREFs of KdDeregisterPowerHandler @ 0x14028BD90
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KdDeregisterPowerHandler(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // rax
  void *v4; // rsi
  char v5; // di
  __int64 *v6; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 **v9; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KxAcquireSpinLock(&KdpPowerSpinLock);
  v3 = KdpPowerListHead;
  v4 = 0LL;
  v5 = 0;
  if ( (__int64 *)KdpPowerListHead != &KdpPowerListHead )
  {
    while ( 1 )
    {
      v6 = *(__int64 **)v3;
      v4 = (void *)v3;
      if ( a1 == v3 )
        break;
      v3 = *(_QWORD *)v3;
      if ( v6 == &KdpPowerListHead )
        goto LABEL_8;
    }
    v9 = *(__int64 ***)(v3 + 8);
    if ( v6[1] != v3 || *v9 != (__int64 *)v3 )
      __fastfail(3u);
    *v9 = v6;
    v5 = 1;
    v6[1] = (__int64)v9;
  }
LABEL_8:
  KxReleaseSpinLock(&KdpPowerSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  if ( !v5 )
    return 3221226021LL;
  ExFreePoolWithTag(v4, 0x6F49644Bu);
  return 0LL;
}
