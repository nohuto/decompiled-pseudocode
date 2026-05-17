/*
 * XREFs of RtlpIsSubSegmentReuseable @ 0x18001B588
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18000FEB0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180018460 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x180019360 (RtlpFreeHeapInternal.c)
 *     RtlpLowFragHeapFlushCaches @ 0x180068C90 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18006915C (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     RtlpLogHeapReuseThresholdActivate @ 0x180106024 (RtlpLogHeapReuseThresholdActivate.c)
 */

char __fastcall RtlpIsSubSegmentReuseable(__int64 a1, __int64 a2)
{
  char v3; // di
  bool v4; // bl
  _DWORD *SharedData; // rcx
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  unsigned __int16 v10; // ax

  if ( !*(_WORD *)(a2 + 32) )
    return 0;
  v3 = 1;
  v4 = (RtlpLowFragHeapGlobalFlags & 4) == 0
    && (v10 = *(_WORD *)(a1 + 172), v10 <= 0x70u)
    && *(_DWORD *)(a1 + 160) >= 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v10]
    && *(_WORD *)(a2 + 32) < (unsigned int)(*(_WORD *)(a2 + 40) >> 2);
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v6 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v6 = 2147353482LL;
  if ( *(_BYTE *)v6
    || ((v7 = NtCurrentPeb()->SharedData) == 0LL || !*v7
      ? (v8 = 2147353472LL)
      : (v8 = (__int64)NtCurrentPeb()->SharedData + 550),
        *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
  {
    if ( !v4 )
      return v3;
    RtlpLogHeapReuseThresholdActivate(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL),
      *(_QWORD *)(a2 + 8),
      *(unsigned __int16 *)(a1 + 172));
  }
  if ( v4 )
    return 0;
  return v3;
}
