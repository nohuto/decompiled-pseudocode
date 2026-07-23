/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x1400F9890
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x1400C8420 (EtwpEventWriteFull.c)
 *     RawEndOperation @ 0x1400F9858 (RawEndOperation.c)
 *     EtwpFailLogging @ 0x14011318C (EtwpFailLogging.c)
 *     EtwpCloseLogger @ 0x1401138CC (EtwpCloseLogger.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x140132A60 (EtwpCancelPendingStackwalkApcs.c)
 *     EtwpFinalizePendingApc @ 0x14030F3BC (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x14030F450 (EtwpQueueStackWalkApc.c)
 *     EtwpQueueStackWalkDpc @ 0x14030F62C (EtwpQueueStackWalkDpc.c)
 *     EtwpStackWalkDpc @ 0x14030F8E0 (EtwpStackWalkDpc.c)
 *     EtwpCompressionProc @ 0x140315180 (EtwpCompressionProc.c)
 *     EtwpReleaseLoggerContext @ 0x1405C6160 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C61A8 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpWriteUserEvent @ 0x1406483F0 (EtwpWriteUserEvent.c)
 *     EtwpStopTrace @ 0x14065A150 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 *     EtwpFreeLoggerContext @ 0x1406C1B40 (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 */

void __stdcall ExReleaseRundownProtectionCacheAwareEx(PEX_RUNDOWN_REF_CACHE_AWARE RunRef, ULONG Count)
{
  _EX_RUNDOWN_REF *RunRefs; // r8
  signed __int64 v3; // r9
  unsigned __int64 v4; // r9

  RunRefs = (_EX_RUNDOWN_REF *)((char *)RunRef->RunRefs + RunRef->RunRefSize
                                                        * (KeGetPcr()->Prcb.Number % RunRef->Number));
  _m_prefetchw(RunRefs);
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = RunRefs->Count;
      if ( (RunRefs->Count & 1) != 0 )
        break;
      if ( v3 == _InterlockedCompareExchange64((volatile signed __int64 *)RunRefs, v3 - 2 * Count, v3) )
        return;
    }
    if ( v3 != 1 )
      break;
    RunRefs = RunRef->RunRefs;
  }
  v4 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v4, -Count) == Count )
    KeSetEvent((PRKEVENT)(v4 + 8), 0, 0);
}
