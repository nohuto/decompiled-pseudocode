/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x1400F2760
 * Callers:
 *     EtwpEventWriteFull @ 0x1400A0020 (EtwpEventWriteFull.c)
 *     EtwpLogKernelEvent @ 0x1400A2990 (EtwpLogKernelEvent.c)
 *     EtwpTraceMessageVa @ 0x1400C8690 (EtwpTraceMessageVa.c)
 *     RawEndOperation @ 0x1400F2728 (RawEndOperation.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x1400FD4E4 (EtwpCancelPendingStackwalkApcs.c)
 *     EtwpFailLogging @ 0x14013BA44 (EtwpFailLogging.c)
 *     EtwpCloseLogger @ 0x140147E3C (EtwpCloseLogger.c)
 *     EtwpFinalizePendingApc @ 0x14032C8BC (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x14032C950 (EtwpQueueStackWalkApc.c)
 *     EtwpQueueStackWalkDpc @ 0x14032CB2C (EtwpQueueStackWalkDpc.c)
 *     EtwpStackWalkDpc @ 0x14032CDF0 (EtwpStackWalkDpc.c)
 *     EtwpCompressionProc @ 0x1403330A0 (EtwpCompressionProc.c)
 *     EtwpReleaseLoggerContext @ 0x1405C5400 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C5448 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpWriteUserEvent @ 0x140656DC0 (EtwpWriteUserEvent.c)
 *     EtwpStopTrace @ 0x1406A8734 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406A8918 (EtwpStartLogger.c)
 *     EtwpFreeLoggerContext @ 0x1406AC3AC (EtwpFreeLoggerContext.c)
 *     EtwInitialize @ 0x14076DFD8 (EtwInitialize.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
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
