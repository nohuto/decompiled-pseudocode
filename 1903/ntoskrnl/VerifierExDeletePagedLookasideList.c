/*
 * XREFs of VerifierExDeletePagedLookasideList @ 0x14097E460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ViLookasideDelete @ 0x14097E9CC (ViLookasideDelete.c)
 */

__int64 __fastcall VerifierExDeletePagedLookasideList(ULONG_PTR a1)
{
  ViLookasideDelete(a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExDeletePagedLookasideList)(a1);
}
