/*
 * XREFs of ExDeletePagedLookasideList @ 0x14012A900
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14084D880 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x14012A92C (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x14012A9F4 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside);
}
