/*
 * XREFs of RtlInitializeCompression @ 0x14030AA94
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x140175AD0 (ExInitializeNPagedLookasideListInternal.c)
 */

__int64 RtlInitializeCompression()
{
  return ExInitializeNPagedLookasideListInternal(
           (__int64)&RtlLznt1DecompressChunkLookaside,
           0LL,
           0LL,
           512,
           88,
           1667529324,
           0,
           0);
}
