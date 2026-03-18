/*
 * XREFs of ExDeletePagedLookasideList @ 0x14012B320
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14084CF80 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x14012B34C (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x14012B414 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside);
}
