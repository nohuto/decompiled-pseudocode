/*
 * XREFs of ViKeInitializeMutantCommon @ 0x14093BDD4
 * Callers:
 *     VerifierKeInitializeMutant @ 0x14093AA50 (VerifierKeInitializeMutant.c)
 *     VerifierKeInitializeMutantNoReboot @ 0x14093AAB0 (VerifierKeInitializeMutantNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140927400 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall ViKeInitializeMutantCommon(void *a1, char a2)
{
  __int64 v4; // rdx

  VfUtilSynchronizationObjectSanityChecks(a1, 0x38uLL);
  LOBYTE(v4) = a2;
  return ((__int64 (__fastcall *)(void *, __int64))pXdvKeInitializeMutant)(a1, v4);
}
