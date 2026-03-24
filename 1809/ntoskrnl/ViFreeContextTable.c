/*
 * XREFs of ViFreeContextTable @ 0x140927D14
 * Callers:
 *     VfInsertContext @ 0x140309B90 (VfInsertContext.c)
 *     VfRemoveContext @ 0x140309D60 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400922D8 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
