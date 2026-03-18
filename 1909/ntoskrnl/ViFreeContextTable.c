/*
 * XREFs of ViFreeContextTable @ 0x140966234
 * Callers:
 *     VfInsertContext @ 0x1403271C0 (VfInsertContext.c)
 *     VfRemoveContext @ 0x140327390 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140084498 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
