/*
 * XREFs of PopPowerButtonTimerCallback @ 0x1402E4920
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     PopQueueWorkItem @ 0x140138DC8 (PopQueueWorkItem.c)
 */

void __fastcall PopPowerButtonTimerCallback(__int64 a1, int a2)
{
  KxAcquireSpinLock(&PopPowerButtonHold);
  if ( (qword_1404111D8 & 1) != 0 && HIDWORD(qword_1404111D8) == a2 )
  {
    LODWORD(qword_1404111D8) = qword_1404111D8 & 1 | ((qword_1404111D8 & 0xFFFFFFFE) + 2000);
    PopQueueWorkItem((__int64)&unk_1404111B0, CriticalWorkQueue);
  }
  KxReleaseSpinLock(&PopPowerButtonHold);
}
