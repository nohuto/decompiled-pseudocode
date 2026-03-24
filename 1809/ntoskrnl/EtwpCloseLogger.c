/*
 * XREFs of EtwpCloseLogger @ 0x14011385C
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400C71D0 (EtwpLogKernelEvent.c)
 *     NtTraceEvent @ 0x1400CB4B0 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x140113240 (EtwpTraceMessageVa.c)
 *     EtwpOpenLogger @ 0x1401137B0 (EtwpOpenLogger.c)
 *     EtwpLogSystemEventUnsafe @ 0x14017C6F8 (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x14017CEC4 (EtwpCCSwapFlush.c)
 *     EtwSendTraceBuffer @ 0x14030E670 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x14030E7DC (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14030EC10 (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x140726174 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F9810 (ExReleaseRundownProtectionCacheAwareEx.c)
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
