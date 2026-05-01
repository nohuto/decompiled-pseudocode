/*
 * XREFs of free @ 0x180085090
 * Callers:
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     DestroyAggregateSession @ 0x1800E3A8C (DestroyAggregateSession.c)
 *     FlushEventEntryList @ 0x1800E3BC4 (FlushEventEntryList.c)
 *     InsertEventEntryInLookUpTable @ 0x1800E3D40 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free(void *Block)
{
  __imp_free(Block);
}
