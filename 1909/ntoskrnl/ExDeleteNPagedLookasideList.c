/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x140177BF0
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14084CF80 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x14012B34C (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x14012B414 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock, (__int64)Lookaside);
  ExpFlushGeneralLookaside((__int64)Lookaside);
}
