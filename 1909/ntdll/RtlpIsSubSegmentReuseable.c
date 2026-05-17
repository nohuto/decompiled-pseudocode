/*
 * XREFs of RtlpIsSubSegmentReuseable @ 0x180043114
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18003B6C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpFreeHeapInternal @ 0x180040B50 (RtlpFreeHeapInternal.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004D0C4 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004D7D0 (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x180043140 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 */

bool __fastcall RtlpIsSubSegmentReuseable(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( *(_WORD *)(a2 + 32) )
    return (unsigned __int8)RtlpIsSubSegmentReuseThresholdExceeded(a1, a2) == 0;
  return v2;
}
