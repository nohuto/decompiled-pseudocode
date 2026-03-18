/*
 * XREFs of VerifierExDeleteNPagedLookasideList @ 0x14097E430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ViLookasideDelete @ 0x14097E9CC (ViLookasideDelete.c)
 */

__int64 __fastcall VerifierExDeleteNPagedLookasideList(ULONG_PTR a1)
{
  ViLookasideDelete(a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExDeleteNPagedLookasideList)(a1);
}
