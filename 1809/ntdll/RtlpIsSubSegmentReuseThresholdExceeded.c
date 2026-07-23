/*
 * XREFs of RtlpIsSubSegmentReuseThresholdExceeded @ 0x1800695D4
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18000FEB0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18006915C (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapReuseThresholdActivate @ 0x180106024 (RtlpLogHeapReuseThresholdActivate.c)
 */

bool __fastcall RtlpIsSubSegmentReuseThresholdExceeded(__int64 a1, __int64 a2)
{
  bool v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int16 v8; // ax

  v4 = (RtlpLowFragHeapGlobalFlags & 4) == 0
    && (v8 = *(_WORD *)(a1 + 172), v8 <= 0x70u)
    && *(_DWORD *)(a1 + 160) >= 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v8]
    && *(_WORD *)(a2 + 32) < (unsigned int)(*(_WORD *)(a2 + 40) >> 2);
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v5 = 2147353482LL;
  if ( *(_BYTE *)v5
    || (RtlGetCurrentServiceSessionId() ? (v6 = (__int64)NtCurrentPeb()->SharedData + 550) : (v6 = 2147353472LL),
        *(_BYTE *)v6 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
  {
    if ( v4 )
      RtlpLogHeapReuseThresholdActivate(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL),
        *(_QWORD *)(a2 + 8),
        *(unsigned __int16 *)(a1 + 172));
  }
  return v4;
}
