/*
 * XREFs of EtwpCovSampCaptureFlush @ 0x1408C4240
 * Callers:
 *     EtwpCoverageSamplerQuery @ 0x1408C7E84 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400B8E50 (KeInitializeEvent.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x140316850 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140316C50 (EtwpCovSampCaptureQueueBuffer.c)
 */

NTSTATUS __fastcall EtwpCovSampCaptureFlush(__int64 a1)
{
  _BYTE v3[80]; // [rsp+30h] [rbp-58h] BYREF

  EtwpCovSampCaptureFlushSampleBuffers(a1);
  memset(v3, 0, sizeof(v3));
  *(_QWORD *)v3 = 6941LL;
  *(_QWORD *)&v3[16] = 4054171642LL;
  KeInitializeEvent((PRKEVENT)&v3[48], NotificationEvent, 0);
  EtwpCovSampCaptureQueueBuffer(a1, (struct _SLIST_ENTRY *)v3);
  return KeWaitForSingleObject(&v3[48], Executive, 0, 0, 0LL);
}
