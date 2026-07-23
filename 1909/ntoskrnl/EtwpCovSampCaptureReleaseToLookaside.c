/*
 * XREFs of EtwpCovSampCaptureReleaseToLookaside @ 0x1403352E0
 * Callers:
 *     EtwpCovSampCaptureApc @ 0x140334630 (EtwpCovSampCaptureApc.c)
 *     EtwpCovSampCaptureApcRelease @ 0x140334740 (EtwpCovSampCaptureApcRelease.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x1403348D4 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x14033499C (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x1403349B8 (EtwpCovSampCaptureCancelApcs.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140334FB8 (EtwpCovSampCaptureQueueApc.c)
 *     EtwpCovSampCaptureSample @ 0x140335354 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampLookasidePop @ 0x140335668 (EtwpCovSampLookasidePop.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1409010A0 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14009C950 (KeInsertQueueDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
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
