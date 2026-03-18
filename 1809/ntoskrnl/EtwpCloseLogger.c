/*
 * XREFs of EtwpCloseLogger @ 0x14011383C
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400C71B0 (EtwpLogKernelEvent.c)
 *     NtTraceEvent @ 0x1400CB490 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x140113220 (EtwpTraceMessageVa.c)
 *     EtwpOpenLogger @ 0x140113790 (EtwpOpenLogger.c)
 *     EtwpLogSystemEventUnsafe @ 0x14017C6D8 (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x14017CEA4 (EtwpCCSwapFlush.c)
 *     EtwSendTraceBuffer @ 0x14030E570 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x14030E6DC (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14030EB10 (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x140726194 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F97F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

_QWORD *__fastcall EtwpCloseLogger(unsigned int a1, __int64 a2, char a3)
{
  _QWORD *result; // rax

  if ( a3 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + 8LL * a1), 1u);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
