/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x14016CDE0
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x140813E50 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x140128064 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x140128134 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock, (__int64)Lookaside);
  ExpFlushGeneralLookaside((__int64)Lookaside, 1);
}
