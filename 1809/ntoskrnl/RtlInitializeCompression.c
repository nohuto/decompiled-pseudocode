/*
 * XREFs of RtlInitializeCompression @ 0x1402ECA24
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x14015FAA0 (ExInitializeNPagedLookasideListInternal.c)
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
