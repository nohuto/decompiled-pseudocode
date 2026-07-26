/*
 * XREFs of PplpFreeOneLookasideList @ 0x1C0082958
 * Callers:
 *     PplCreateLookasideList @ 0x1C0022FAC (PplCreateLookasideList.c)
 *     PplDestroyLookasideList @ 0x1C00826FC (PplDestroyLookasideList.c)
 *     PplHotAddProcCompleteNotify @ 0x1C00827A0 (PplHotAddProcCompleteNotify.c)
 *     PplHotAddProcStartNotify @ 0x1C008284C (PplHotAddProcStartNotify.c)
 * Callees:
 *     <none>
 */

void __fastcall PplpFreeOneLookasideList(struct _LOOKASIDE_LIST_EX *P, ULONG Tag)
{
  if ( LOBYTE(P[1].L.Depth) )
    ExDeleteLookasideListEx(P);
  ExFreePoolWithTag(P, Tag);
}
