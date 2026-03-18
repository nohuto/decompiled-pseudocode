/*
 * XREFs of IoSetDiskIoAttributionOnProcess @ 0x1400ADA4C
 * Callers:
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 *     PspEstablishJobHierarchy @ 0x140695344 (PspEstablishJobHierarchy.c)
 *     PspSetJobIoAttributionProcessCallback @ 0x1406EDB70 (PspSetJobIoAttributionProcessCallback.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     IoDiskIoAttributionDereference @ 0x1400E73A8 (IoDiskIoAttributionDereference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall IoSetDiskIoAttributionOnProcess(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // rsi
  KIRQL v6; // bp
  struct _KPRCB *CurrentPrcb; // rcx

  if ( *(_QWORD *)(a2 + 2008) != a1 )
  {
    if ( a1 && _InterlockedIncrement64((volatile signed __int64 *)(a1 + 32)) <= 1 )
      __fastfail(0xEu);
    v4 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
    v5 = *(_QWORD *)(a2 + 2008);
    v6 = v4;
    *(_QWORD *)(a2 + 2008) = a1;
    ExReleaseSpinLockExclusiveFromDpcLevel(&IopDiskIoAttributionLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v6);
    if ( v5 )
      IoDiskIoAttributionDereference(v5);
  }
}
