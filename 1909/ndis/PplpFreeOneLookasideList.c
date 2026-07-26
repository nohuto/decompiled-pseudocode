/*
 * XREFs of PplpFreeOneLookasideList @ 0x1C00C84F8
 * Callers:
 *     PplCreateLookasideList @ 0x1C0035CD8 (PplCreateLookasideList.c)
 *     PplDestroyLookasideList @ 0x1C00C829C (PplDestroyLookasideList.c)
 *     PplHotAddProcCompleteNotify @ 0x1C00C8340 (PplHotAddProcCompleteNotify.c)
 *     PplHotAddProcStartNotify @ 0x1C00C83EC (PplHotAddProcStartNotify.c)
 * Callees:
 *     <none>
 */

void __fastcall PplpFreeOneLookasideList(struct _LOOKASIDE_LIST_EX *P, ULONG Tag)
{
  if ( LOBYTE(P[1].L.Depth) )
    ExDeleteLookasideListEx(P);
  ExFreePoolWithTag(P, Tag);
}
