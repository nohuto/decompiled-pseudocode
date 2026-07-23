/*
 * XREFs of EtwpCovSampCaptureFlush @ 0x140900DB0
 * Callers:
 *     EtwpCoverageSamplerQuery @ 0x140904C64 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x140334DE0 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1403351DC (EtwpCovSampCaptureQueueBuffer.c)
 */

NTSTATUS __fastcall EtwpCovSampCaptureFlush(__int64 a1)
{
  _BYTE v3[80]; // [rsp+30h] [rbp-58h] BYREF

  memset(v3, 0, sizeof(v3));
  EtwpCovSampCaptureFlushSampleBuffers(a1);
  memset(v3, 0, sizeof(v3));
  *(_QWORD *)v3 = 6941LL;
  *(_QWORD *)&v3[16] = 4054171642LL;
  KeInitializeEvent((PRKEVENT)&v3[48], NotificationEvent, 0);
  EtwpCovSampCaptureQueueBuffer(a1, (_SLIST_ENTRY *)v3);
  return KeWaitForSingleObject(&v3[48], Executive, 0, 0, 0LL);
}
