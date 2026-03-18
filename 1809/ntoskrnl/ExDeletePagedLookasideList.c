/*
 * XREFs of ExDeletePagedLookasideList @ 0x140128030
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x140813E50 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x140128064 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x140128134 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside, 1LL);
}
