/*
 * XREFs of ViFreeContextTable @ 0x140966234
 * Callers:
 *     VfInsertContext @ 0x140327770 (VfInsertContext.c)
 *     VfRemoveContext @ 0x140327940 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
