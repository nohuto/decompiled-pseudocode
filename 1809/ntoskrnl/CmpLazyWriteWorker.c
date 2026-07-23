/*
 * XREFs of CmpLazyWriteWorker @ 0x140188C50
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     CmpCompleteLazyWrite @ 0x1401349DC (CmpCompleteLazyWrite.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpDiskFullWarning @ 0x1407FC264 (CmpDiskFullWarning.c)
 */

void __fastcall __noreturn CmpLazyWriteWorker(PKTIMER Timer)
{
  KIRQL v2; // al
  KIRQL v3; // si
  struct _KPRCB *CurrentPrcb; // rcx
  char v5; // bl
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF
  char v7; // [rsp+58h] [rbp+10h] BYREF
  char v8; // [rsp+60h] [rbp+18h] BYREF

  while ( 1 )
  {
    CmpInitializeThreadInfo(v6);
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
    v5 = ((__int64 (__fastcall *)(char *, char *))Timer[2].TimerListEntry.Flink)(&v7, &v8);
    if ( Timer == &CmpLazyWriterData && CmpCannotWriteConfiguration )
    {
      if ( v7 )
        CmpDiskFullWarning();
      else
        CmpCannotWriteConfiguration = 0;
    }
    CmpCompleteLazyWrite(Timer, (__int64 *)((unsigned __int64)&v8 & -(__int64)(v5 != 0)));
    CmCleanupThreadInfo(v6);
  }
}
