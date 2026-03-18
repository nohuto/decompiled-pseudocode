/*
 * XREFs of ExAcquireRundownProtectionCacheAwareEx @ 0x1400D7850
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400C71B0 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x1400C84C0 (EtwpEventWriteFull.c)
 *     RawBeginOperation @ 0x1400D81B0 (RawBeginOperation.c)
 *     EtwpFailLogging @ 0x1401130FC (EtwpFailLogging.c)
 *     EtwpOpenLogger @ 0x140113790 (EtwpOpenLogger.c)
 *     EtwpQueueStackWalkApc @ 0x14030F160 (EtwpQueueStackWalkApc.c)
 *     EtwpQueueStackWalkDpc @ 0x14030F33C (EtwpQueueStackWalkDpc.c)
 *     EtwpCompressionDpc @ 0x140314E40 (EtwpCompressionDpc.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C51A8 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpWriteUserEvent @ 0x1406473F0 (EtwpWriteUserEvent.c)
 *     EtwpStopTrace @ 0x140658FB0 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406591C0 (EtwpStartLogger.c)
 *     PeriodicCaptureStateTimerCallback @ 0x1408C05D0 (PeriodicCaptureStateTimerCallback.c)
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
