/*
 * XREFs of PopBatteryWakeDpc @ 0x140176250
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     PopBatteryQueueWork @ 0x1401762CC (PopBatteryQueueWork.c)
 */

__int64 PopBatteryWakeDpc()
{
  unsigned int v0; // edi

  byte_140417A20 = 0;
  v0 = 1;
  if ( PopBatteryInitiateIgnoreStatusDuringBoot )
  {
    PopBatteryInitiateIgnoreStatusDuringBoot = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140417A08, 0, 0);
  _InterlockedExchange(&dword_140417980, 0);
  return PopBatteryQueueWork(v0);
}
