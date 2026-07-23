/*
 * XREFs of ViFreeContextTable @ 0x140928D14
 * Callers:
 *     VfInsertContext @ 0x140309D80 (VfInsertContext.c)
 *     VfRemoveContext @ 0x140309F50 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
