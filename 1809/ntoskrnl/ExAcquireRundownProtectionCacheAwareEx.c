/*
 * XREFs of ExAcquireRundownProtectionCacheAwareEx @ 0x1400D7870
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400C71D0 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x1400C84E0 (EtwpEventWriteFull.c)
 *     RawBeginOperation @ 0x1400D81D0 (RawBeginOperation.c)
 *     EtwpFailLogging @ 0x14011311C (EtwpFailLogging.c)
 *     EtwpOpenLogger @ 0x1401137B0 (EtwpOpenLogger.c)
 *     EtwpQueueStackWalkApc @ 0x14030F260 (EtwpQueueStackWalkApc.c)
 *     EtwpQueueStackWalkDpc @ 0x14030F43C (EtwpQueueStackWalkDpc.c)
 *     EtwpCompressionDpc @ 0x140314F40 (EtwpCompressionDpc.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C51A8 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpWriteUserEvent @ 0x1406473D0 (EtwpWriteUserEvent.c)
 *     EtwpStopTrace @ 0x140658F90 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406591A0 (EtwpStartLogger.c)
 *     PeriodicCaptureStateTimerCallback @ 0x1408C05B0 (PeriodicCaptureStateTimerCallback.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtectionCacheAwareEx(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware, ULONG Count)
{
  signed __int64 *v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  v2 = (signed __int64 *)((char *)RunRefCacheAware->RunRefs
                        + RunRefCacheAware->RunRefSize * (KeGetPcr()->Prcb.Number % RunRefCacheAware->Number));
  _m_prefetchw(v2);
  v3 = *v2;
  if ( (*v2 & 1) != 0 )
    return 0;
  while ( 1 )
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange64(v2, 2 * Count + v3, v3);
    if ( v4 == v3 )
      break;
    if ( (v3 & 1) != 0 )
      return 0;
  }
  return 1;
}
