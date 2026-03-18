/*
 * XREFs of PopPowerButtonTimerCallback @ 0x140301560
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 *     PopQueueWorkItem @ 0x140177880 (PopQueueWorkItem.c)
 */

void __fastcall PopPowerButtonTimerCallback(__int64 a1, int a2)
{
  KxAcquireSpinLock(&PopPowerButtonHold);
  if ( (qword_140438A38 & 1) != 0 && HIDWORD(qword_140438A38) == a2 )
  {
    LODWORD(qword_140438A38) = qword_140438A38 & 1 | ((qword_140438A38 & 0xFFFFFFFE) + 2000);
    PopQueueWorkItem((__int64)&unk_140438A10, CriticalWorkQueue);
  }
  KxReleaseSpinLock(&PopPowerButtonHold);
}
