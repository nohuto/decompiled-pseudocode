/*
 * XREFs of VerifierExDeleteLookasideListEx @ 0x14093FB70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ViLookasideDelete @ 0x14094012C (ViLookasideDelete.c)
 */

__int64 __fastcall VerifierExDeleteLookasideListEx(ULONG_PTR a1)
{
  ViLookasideDelete(a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExDeleteLookasideListEx)(a1);
}
