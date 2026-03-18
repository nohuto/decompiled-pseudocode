/*
 * XREFs of ViExAcquireFastMutexCommon @ 0x140981F24
 * Callers:
 *     VerifierExAcquireFastMutex @ 0x140981980 (VerifierExAcquireFastMutex.c)
 *     VerifierExAcquireFastMutexNoReboot @ 0x1409819D0 (VerifierExAcquireFastMutexNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140979270 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x1409794DC (ViKeIrqlLogCommon.c)
 *     ViExCheckAPCLevelOrBelow @ 0x140981F9C (ViExCheckAPCLevelOrBelow.c)
 */

void __fastcall ViExAcquireFastMutexCommon(__int64 a1, unsigned int a2)
{
  char CurrentIrql; // bl
  char *v4; // rax

  if ( (MmVerifierData & 0x800) != 0 )
    CurrentIrql = ViExCheckAPCLevelOrBelow(a1, a1, a2);
  else
    CurrentIrql = KeGetCurrentIrql();
  ((void (__fastcall *)(__int64))pXdvExAcquireFastMutex)(a1);
  if ( (MmVerifierData & 0x400000) == 0 || (VfFlightOptions & 9) != 0 )
  {
    v4 = VfKeIrqlTransitionReserveLogEntry(CurrentIrql, 1);
    ViKeIrqlLogCommon((__int64)v4, 2u);
  }
}
