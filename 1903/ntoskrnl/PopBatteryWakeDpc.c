/*
 * XREFs of PopBatteryWakeDpc @ 0x140181F70
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     PopBatteryQueueWork @ 0x140176E10 (PopBatteryQueueWork.c)
 */

void PopBatteryWakeDpc()
{
  unsigned int v0; // edi

  byte_140443320 = 0;
  v0 = 1;
  if ( PopBatteryInitiateIgnoreStatusDuringBoot )
  {
    PopBatteryInitiateIgnoreStatusDuringBoot = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140443308, 0, 0);
  _InterlockedExchange(&dword_140443280, 0);
  PopBatteryQueueWork(v0);
}
