/*
 * XREFs of EtwpCovSampCaptureReleaseToLookaside @ 0x140335880
 * Callers:
 *     EtwpCovSampCaptureApc @ 0x140334BD0 (EtwpCovSampCaptureApc.c)
 *     EtwpCovSampCaptureApcRelease @ 0x140334CE0 (EtwpCovSampCaptureApcRelease.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x140334E74 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x140334F3C (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x140334F58 (EtwpCovSampCaptureCancelApcs.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140335558 (EtwpCovSampCaptureQueueApc.c)
 *     EtwpCovSampCaptureSample @ 0x1403358F4 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampLookasidePop @ 0x140335C08 (EtwpCovSampLookasidePop.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140901740 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1400BCAD0 (KeInsertQueueDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 */

char __fastcall EtwpCovSampCaptureReleaseToLookaside(__int64 a1, __int64 a2, _SLIST_ENTRY *a3)
{
  __int64 v4; // rbx
  unsigned __int32 v6; // eax

  v4 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 40) )
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)a2, a3);
    v6 = *(_DWORD *)(a2 + 40);
    if ( !v6 )
LABEL_5:
      LOBYTE(v6) = KeInsertQueueDpc((PRKDPC)(a1 + 824), 0LL, 0LL);
  }
  else
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)v4, a3);
    v6 = _InterlockedIncrement((volatile signed __int32 *)(v4 + 76));
    if ( v6 >= *(_DWORD *)(v4 + 72) )
      goto LABEL_5;
  }
  return v6;
}
