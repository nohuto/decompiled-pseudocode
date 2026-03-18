/*
 * XREFs of PopPowerButtonTimerCallback @ 0x140301010
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     PopQueueWorkItem @ 0x140177F70 (PopQueueWorkItem.c)
 */

void __fastcall PopPowerButtonTimerCallback(__int64 a1, int a2)
{
  KxAcquireSpinLock(&PopPowerButtonHold);
  if ( (qword_1404389B8 & 1) != 0 && HIDWORD(qword_1404389B8) == a2 )
  {
    LODWORD(qword_1404389B8) = qword_1404389B8 & 1 | ((qword_1404389B8 & 0xFFFFFFFE) + 2000);
    PopQueueWorkItem((__int64)&unk_140438990, CriticalWorkQueue);
  }
  KxReleaseSpinLock(&PopPowerButtonHold);
}
