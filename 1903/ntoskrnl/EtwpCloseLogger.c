/*
 * XREFs of EtwpCloseLogger @ 0x14014779C
 * Callers:
 *     EtwpOpenLogger @ 0x14008C5A4 (EtwpOpenLogger.c)
 *     NtTraceEvent @ 0x14008C650 (NtTraceEvent.c)
 *     EtwpLogKernelEvent @ 0x1400C2B10 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x140146E9C (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x140147688 (EtwpCCSwapFlush.c)
 *     EtwSendTraceBuffer @ 0x14032C280 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x14032C3F0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14032C888 (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x140707BBC (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA0F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

_QWORD *__fastcall EtwpCloseLogger(unsigned int a1, __int64 a2, char a3)
{
  _QWORD *result; // rax

  if ( a3 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + 8LL * a1), 1u);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
