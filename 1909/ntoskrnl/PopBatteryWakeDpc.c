/*
 * XREFs of PopBatteryWakeDpc @ 0x140182660
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     PopBatteryQueueWork @ 0x140171F50 (PopBatteryQueueWork.c)
 */

void PopBatteryWakeDpc()
{
  unsigned int v0; // edi

  byte_1404432A0 = 0;
  v0 = 1;
  if ( PopBatteryInitiateIgnoreStatusDuringBoot )
  {
    PopBatteryInitiateIgnoreStatusDuringBoot = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140443288, 0, 0);
  _InterlockedExchange(&dword_140443200, 0);
  PopBatteryQueueWork(v0);
}
