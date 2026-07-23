/*
 * XREFs of EtwpCovSampCaptureCleanupLookasides @ 0x140316888
 * Callers:
 *     EtwpCovSampCaptureCleanupDpc @ 0x140316870 (EtwpCovSampCaptureCleanupDpc.c)
 *     EtwpCovSampCaptureContextStop @ 0x1403169A0 (EtwpCovSampCaptureContextStop.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x14031723C (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 */

__int64 __fastcall EtwpCovSampCaptureCleanupLookasides(__int64 a1)
{
  KSPIN_LOCK *v1; // r15
  int v3; // ebp
  KIRQL v4; // r14
  _QWORD *i; // rdi
  __int64 *v6; // rdx
  bool v7; // cf
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v1 = (KSPIN_LOCK *)(a1 + 264);
  v3 = 1;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 264));
  if ( !*(_DWORD *)(a1 + 912) && !*(_DWORD *)(a1 + 920) )
  {
    for ( i = *(_QWORD **)(a1 + 576); i != (_QWORD *)(a1 + 576); i = (_QWORD *)*i )
      EtwpCovSampLookasideFlushFreeListToCleanupList(i - 2);
    v6 = *(__int64 **)(a1 + 592);
    if ( v6 == (__int64 *)(a1 + 592) )
      goto LABEL_11;
    do
    {
      v7 = *((_DWORD *)v6 + 15) < *((_DWORD *)v6 + 14);
      v6 = (__int64 *)*v6;
      if ( v7 )
        v3 = 0;
    }
    while ( v6 != (__int64 *)(a1 + 592) );
    if ( v3 )
    {
LABEL_11:
      *(_DWORD *)(a1 + 920) = 1;
      KeSetEvent((PRKEVENT)(a1 + 888), 0, 0);
    }
  }
  KxReleaseSpinLock(v1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v4;
  __writecr8(v4);
  return result;
}
