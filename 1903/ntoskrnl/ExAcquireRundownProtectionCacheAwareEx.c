/*
 * XREFs of ExAcquireRundownProtectionCacheAwareEx @ 0x140096A80
 * Callers:
 *     EtwpOpenLogger @ 0x14008C5A4 (EtwpOpenLogger.c)
 *     RawBeginOperation @ 0x140096F60 (RawBeginOperation.c)
 *     EtwpEventWriteFull @ 0x1400C01A0 (EtwpEventWriteFull.c)
 *     EtwpLogKernelEvent @ 0x1400C2B10 (EtwpLogKernelEvent.c)
 *     EtwpFailLogging @ 0x14013B424 (EtwpFailLogging.c)
 *     EtwpQueueStackWalkApc @ 0x14032CF00 (EtwpQueueStackWalkApc.c)
 *     EtwpQueueStackWalkDpc @ 0x14032D0DC (EtwpQueueStackWalkDpc.c)
 *     EtwpCompressionDpc @ 0x1403335F0 (EtwpCompressionDpc.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C4F48 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpWriteUserEvent @ 0x140643270 (EtwpWriteUserEvent.c)
 *     EtwpStopTrace @ 0x1406B4F7C (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406B5160 (EtwpStartLogger.c)
 *     EtwInitialize @ 0x14076B184 (EtwInitialize.c)
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
