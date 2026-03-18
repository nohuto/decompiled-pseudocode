/*
 * XREFs of CmpLazyWriteWorker @ 0x140193B70
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     CmpCompleteLazyWrite @ 0x140136A08 (CmpCompleteLazyWrite.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     CmpDiskFullWarning @ 0x140833A8C (CmpDiskFullWarning.c)
 */

void __fastcall __noreturn CmpLazyWriteWorker(PKTIMER Timer)
{
  KIRQL v2; // al
  KIRQL v3; // si
  char v4; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  char v6; // [rsp+48h] [rbp+10h] BYREF
  char v7; // [rsp+50h] [rbp+18h] BYREF

  while ( 1 )
  {
    KeWaitForSingleObject(&Timer[2], Executive, 1, 0, 0LL);
    v2 = KeAcquireSpinLockRaiseToDpc(&Timer[2].DueTime.QuadPart);
    Timer[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)2;
    v3 = v2;
    KxReleaseSpinLock(&Timer[2].DueTime.QuadPart);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v3);
    v4 = ((__int64 (__fastcall *)(char *, char *))Timer[2].TimerListEntry.Flink)(&v6, &v7);
    if ( CmpCannotWriteConfiguration && Timer == &CmpLazyWriterData )
    {
      if ( v6 )
        CmpDiskFullWarning();
      else
        CmpCannotWriteConfiguration = 0;
    }
    CmpCompleteLazyWrite(Timer, (__int64 *)((unsigned __int64)&v7 & -(__int64)(v4 != 0)));
  }
}
