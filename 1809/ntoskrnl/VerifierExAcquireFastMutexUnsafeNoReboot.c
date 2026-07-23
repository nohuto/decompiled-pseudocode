/*
 * XREFs of VerifierExAcquireFastMutexUnsafeNoReboot @ 0x140943150
 * Callers:
 *     VerifierExAcquireFastMutexUnsafe @ 0x140943110 (VerifierExAcquireFastMutexUnsafe.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViExCheckAPCsDisabled @ 0x1409436FC (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExAcquireFastMutexUnsafeNoReboot(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(0x39uLL, a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExAcquireFastMutexUnsafe)(a1);
}
