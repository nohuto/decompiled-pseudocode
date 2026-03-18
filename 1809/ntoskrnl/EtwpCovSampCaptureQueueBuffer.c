/*
 * XREFs of EtwpCovSampCaptureQueueBuffer @ 0x140316C50
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x140316360 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x14031742C (EtwpCovSampSampleBufferDecRef.c)
 *     EtwpCovSampCaptureFlush @ 0x1408C4240 (EtwpCovSampCaptureFlush.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C53F0 (RtlpInterlockedPushEntrySList.c)
 */

char __fastcall EtwpCovSampCaptureQueueBuffer(__int64 a1, struct _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY v3; // rax

  if ( KeGetCurrentIrql() <= 2u )
  {
    v3 = RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 720), a2);
    if ( !v3 )
      LOBYTE(v3) = KeSetEvent((PRKEVENT)(a1 + 736), *(_DWORD *)(a1 + 932), 0);
  }
  else
  {
    v3 = RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 704), a2);
    if ( !v3 )
      LOBYTE(v3) = KeInsertQueueDpc((PRKDPC)(a1 + 760), 0LL, 0LL);
  }
  return (char)v3;
}
