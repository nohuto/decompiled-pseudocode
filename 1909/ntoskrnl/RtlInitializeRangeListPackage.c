/*
 * XREFs of RtlInitializeRangeListPackage @ 0x140A3DBF0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializePagedLookasideList @ 0x140689000 (ExInitializePagedLookasideList.c)
 */

void RtlInitializeRangeListPackage()
{
  ExInitializePagedLookasideList(
    (PPAGED_LOOKASIDE_LIST)&RtlpRangeListEntryLookasideList,
    0LL,
    0LL,
    0,
    0x38uLL,
    0x656C5252u,
    0x10u);
}
