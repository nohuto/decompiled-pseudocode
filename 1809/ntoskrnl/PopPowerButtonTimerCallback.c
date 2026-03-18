/*
 * XREFs of PopPowerButtonTimerCallback @ 0x1402E4630
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     PopQueueWorkItem @ 0x140138CA8 (PopQueueWorkItem.c)
 */

void __fastcall PopPowerButtonTimerCallback(__int64 a1, int a2)
{
  KxAcquireSpinLock(&PopPowerButtonHold);
  if ( (qword_140410138 & 1) != 0 && HIDWORD(qword_140410138) == a2 )
  {
    LODWORD(qword_140410138) = qword_140410138 & 1 | ((qword_140410138 & 0xFFFFFFFE) + 2000);
    PopQueueWorkItem((__int64)&unk_140410110, CriticalWorkQueue);
  }
  KxReleaseSpinLock(&PopPowerButtonHold);
}
