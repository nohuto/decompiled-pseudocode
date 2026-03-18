/*
 * XREFs of ViDeadlockCanProceed @ 0x14097C15C
 * Callers:
 *     VfDeadlockAcquireResource @ 0x14097A93C (VfDeadlockAcquireResource.c)
 *     VfDeadlockDeleteMemoryRange @ 0x14097B188 (VfDeadlockDeleteMemoryRange.c)
 *     VfDeadlockInitializeResource @ 0x14097B508 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x14097B688 (VfDeadlockReleaseResource.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400A3040 (KeAreInterruptsEnabled.c)
 *     ViDeadlockCheckStackLimits @ 0x14097C500 (ViDeadlockCheckStackLimits.c)
 */

_BOOL8 __fastcall ViDeadlockCanProceed(LONG *a1)
{
  _BOOL8 result; // rax

  result = 0;
  if ( ViDeadlockDetectionEnabled )
  {
    if ( (unsigned int)KeNumberProcessors_0 <= 4 && KeGetCurrentIrql() <= 2u && KeAreInterruptsEnabled() )
    {
      if ( ViDeadlockGlobals )
      {
        ViDeadlockCheckStackLimits();
        if ( a1 != &ViDeadlockDatabaseLock && (struct _KTHREAD *)ViDeadlockDatabaseOwner != KeGetCurrentThread() )
          return 1;
      }
    }
  }
  return result;
}
