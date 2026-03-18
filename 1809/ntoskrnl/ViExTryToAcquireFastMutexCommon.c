/*
 * XREFs of ViExTryToAcquireFastMutexCommon @ 0x1409427A8
 * Callers:
 *     VerifierExTryToAcquireFastMutex @ 0x140942300 (VerifierExTryToAcquireFastMutex.c)
 *     VerifierExTryToAcquireFastMutexNoReboot @ 0x140942360 (VerifierExTryToAcquireFastMutexNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x14093AC40 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x14093AEAC (ViKeIrqlLogCommon.c)
 *     ViExCheckAPCLevelOrBelow @ 0x1409426BC (ViExCheckAPCLevelOrBelow.c)
 */

char __fastcall ViExTryToAcquireFastMutexCommon(ULONG_PTR a1, int a2)
{
  char CurrentIrql; // bl
  char v4; // di
  char *v5; // rax

  if ( (MmVerifierData & 0x800) != 0 )
    CurrentIrql = ViExCheckAPCLevelOrBelow(a1, a1, a2);
  else
    CurrentIrql = KeGetCurrentIrql();
  v4 = ((__int64 (__fastcall *)(ULONG_PTR))pXdvExTryToAcquireFastMutex)(a1);
  if ( v4 && ((MmVerifierData & 0x400000) == 0 || (VfFlightOptions & 9) != 0) )
  {
    v5 = VfKeIrqlTransitionReserveLogEntry(CurrentIrql, 1);
    ViKeIrqlLogCommon((__int64)v5, 2u);
  }
  return v4;
}
