/*
 * XREFs of VerifierExReleaseFastMutexUnsafeNoReboot @ 0x1409422C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     ViExCheckAPCsDisabled @ 0x1409426FC (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExReleaseFastMutexUnsafeNoReboot(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(0x3AuLL, a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExReleaseFastMutexUnsafe)(a1);
}
