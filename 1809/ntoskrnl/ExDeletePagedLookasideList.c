/*
 * XREFs of ExDeletePagedLookasideList @ 0x140128120
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x140815030 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x140128154 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x140128224 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside, 1LL);
}
