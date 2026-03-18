/*
 * XREFs of RtlInitializeCompression @ 0x14030AFE4
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x1401753A0 (ExInitializeNPagedLookasideListInternal.c)
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
