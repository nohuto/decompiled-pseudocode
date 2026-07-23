/*
 * XREFs of RtlpHpGCCallback @ 0x18007B310
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18007B34C (RtlpEnumProcessHeaps.c)
 *     RtlpHpTlLogGCTimerFinished @ 0x180109F28 (RtlpHpTlLogGCTimerFinished.c)
 */

void __fastcall RtlpHpGCCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
{
  RtlpEnumProcessHeaps(RtlpHpGCFlushCallback, 0LL, 0LL);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogGCTimerFinished();
  RtlpHpGCTimerScheduled = 0;
}
