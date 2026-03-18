/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x140177500
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14084D880 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x14012A92C (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x14012A9F4 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock, (__int64)Lookaside);
  ExpFlushGeneralLookaside((__int64)Lookaside);
}
