/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140930C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x14031B9C0 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 */

PVOID __fastcall VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive(struct _ERESOURCE *a1)
{
  if ( pXdvExEnterCriticalRegionAndAcquireSharedWaitForExclusive )
    return (PVOID)pXdvExEnterCriticalRegionAndAcquireSharedWaitForExclusive();
  else
    return ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(a1);
}
