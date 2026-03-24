/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x14016CE00
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x140813E30 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x140128084 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x140128154 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock, (__int64)Lookaside);
  ExpFlushGeneralLookaside((__int64)Lookaside, 1);
}
