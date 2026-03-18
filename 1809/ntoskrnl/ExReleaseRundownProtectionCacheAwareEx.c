/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x1400F97F0
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400C71B0 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x1400C84C0 (EtwpEventWriteFull.c)
 *     RawEndOperation @ 0x1400F97B8 (RawEndOperation.c)
 *     EtwpFailLogging @ 0x1401130FC (EtwpFailLogging.c)
 *     EtwpCloseLogger @ 0x14011383C (EtwpCloseLogger.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x140132970 (EtwpCancelPendingStackwalkApcs.c)
 *     EtwpFinalizePendingApc @ 0x14030F0CC (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x14030F160 (EtwpQueueStackWalkApc.c)
 *     EtwpQueueStackWalkDpc @ 0x14030F33C (EtwpQueueStackWalkDpc.c)
 *     EtwpStackWalkDpc @ 0x14030F5F0 (EtwpStackWalkDpc.c)
 *     EtwpCompressionProc @ 0x140314E90 (EtwpCompressionProc.c)
 *     EtwpReleaseLoggerContext @ 0x1405C5160 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C51A8 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpWriteUserEvent @ 0x1406473F0 (EtwpWriteUserEvent.c)
 *     EtwpStopTrace @ 0x140658FB0 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406591C0 (EtwpStartLogger.c)
 *     EtwpFreeLoggerContext @ 0x1406C08C0 (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
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
