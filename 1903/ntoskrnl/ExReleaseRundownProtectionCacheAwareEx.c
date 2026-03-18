/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA0F0
 * Callers:
 *     EtwpTraceMessageVa @ 0x14008BFF0 (EtwpTraceMessageVa.c)
 *     EtwpEventWriteFull @ 0x1400C01A0 (EtwpEventWriteFull.c)
 *     EtwpLogKernelEvent @ 0x1400C2B10 (EtwpLogKernelEvent.c)
 *     RawEndOperation @ 0x1400FA0B8 (RawEndOperation.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x140108DC8 (EtwpCancelPendingStackwalkApcs.c)
 *     EtwpFailLogging @ 0x14013B424 (EtwpFailLogging.c)
 *     EtwpCloseLogger @ 0x14014779C (EtwpCloseLogger.c)
 *     EtwpFinalizePendingApc @ 0x14032CE6C (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x14032CF00 (EtwpQueueStackWalkApc.c)
 *     EtwpQueueStackWalkDpc @ 0x14032D0DC (EtwpQueueStackWalkDpc.c)
 *     EtwpStackWalkDpc @ 0x14032D390 (EtwpStackWalkDpc.c)
 *     EtwpCompressionProc @ 0x140333640 (EtwpCompressionProc.c)
 *     EtwpReleaseLoggerContext @ 0x1405C4F00 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C4F48 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpWriteUserEvent @ 0x140643270 (EtwpWriteUserEvent.c)
 *     EtwpStopTrace @ 0x1406B4F7C (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406B5160 (EtwpStartLogger.c)
 *     EtwpFreeLoggerContext @ 0x1406B717C (EtwpFreeLoggerContext.c)
 *     EtwInitialize @ 0x14076B184 (EtwInitialize.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
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
