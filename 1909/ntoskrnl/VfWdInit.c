/*
 * XREFs of VfWdInit @ 0x14097DF14
 * Callers:
 *     VfInitVerifierComponents @ 0x140964C00 (VfInitVerifierComponents.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x1400820A0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140098B70 (KeInitializeDpc.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     VfWdSetCancelTimeout @ 0x14097DFDC (VfWdSetCancelTimeout.c)
 */

__int64 VfWdInit()
{
  __int64 result; // rax

  if ( !VfSafeMode )
  {
    VfWdIrpListLock = 0LL;
    qword_1409C7F78 = (__int64)&VfWdIrpListHead;
    VfWdIrpListHead = (__int64)&VfWdIrpListHead;
    pXdvExInitializeNPagedLookasideList(
      (int)&ViWdIrpLookasideList,
      0,
      (int)VfUtilFreePoolDispatchLevel,
      512,
      32LL,
      1683449430,
      16,
      VfInitializedWithoutReboot,
      (__int64)ExInitializeNPagedLookasideListInternal);
    KeInitializeTimerEx(&ViWdIrpTimer, NotificationTimer);
    KeInitializeDpc(&ViWdIrpTimerDpc, ViWdIrpTimerDpcRoutine, 0LL);
    VfWdSetCancelTimeout((unsigned int)VfWdIrpTimeoutMsec);
    return (unsigned int)_InterlockedExchange(&ViWdInitialized, 1);
  }
  return result;
}
