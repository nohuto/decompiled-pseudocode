/*
 * XREFs of EtwpCloseLogger @ 0x140147E3C
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400A2990 (EtwpLogKernelEvent.c)
 *     EtwpOpenLogger @ 0x1400C8C44 (EtwpOpenLogger.c)
 *     NtTraceEvent @ 0x1400C8CF0 (NtTraceEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x14014753C (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x140147D28 (EtwpCCSwapFlush.c)
 *     EtwSendTraceBuffer @ 0x14032BCD0 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x14032BE40 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14032C2D8 (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x14070999C (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F2760 (ExReleaseRundownProtectionCacheAwareEx.c)
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
