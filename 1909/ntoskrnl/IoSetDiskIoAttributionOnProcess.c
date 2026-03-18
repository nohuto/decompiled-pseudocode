/*
 * XREFs of IoSetDiskIoAttributionOnProcess @ 0x1400C84AC
 * Callers:
 *     PspProcessDelete @ 0x140651970 (PspProcessDelete.c)
 *     PspEstablishJobHierarchy @ 0x1406888B4 (PspEstablishJobHierarchy.c)
 *     PspSetJobIoAttributionProcessCallback @ 0x1406EEEE0 (PspSetJobIoAttributionProcessCallback.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     IoDiskIoAttributionDereference @ 0x1400EC348 (IoDiskIoAttributionDereference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
