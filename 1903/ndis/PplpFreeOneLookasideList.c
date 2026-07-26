/*
 * XREFs of PplpFreeOneLookasideList @ 0x1C00C8328
 * Callers:
 *     PplCreateLookasideList @ 0x1C0035CE8 (PplCreateLookasideList.c)
 *     PplDestroyLookasideList @ 0x1C00C80CC (PplDestroyLookasideList.c)
 *     PplHotAddProcCompleteNotify @ 0x1C00C8170 (PplHotAddProcCompleteNotify.c)
 *     PplHotAddProcStartNotify @ 0x1C00C821C (PplHotAddProcStartNotify.c)
 * Callees:
 *     <none>
 */

void __fastcall PplpFreeOneLookasideList(struct _LOOKASIDE_LIST_EX *P, ULONG Tag)
{
  if ( LOBYTE(P[1].L.Depth) )
    ExDeleteLookasideListEx(P);
  ExFreePoolWithTag(P, Tag);
}
