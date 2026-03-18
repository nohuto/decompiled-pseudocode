/*
 * XREFs of VerifierExAcquireSharedStarveExclusiveNoReboot @ 0x14097EFF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ViResourceAcquireSanityChecks @ 0x14097F8B4 (ViResourceAcquireSanityChecks.c)
 */

__int64 __fastcall VerifierExAcquireSharedStarveExclusiveNoReboot(ULONG_PTR a1, char a2)
{
  __int64 v4; // rdx

  ViResourceAcquireSanityChecks(a1);
  LOBYTE(v4) = a2;
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64))pXdvExAcquireSharedStarveExclusive)(a1, v4);
}
