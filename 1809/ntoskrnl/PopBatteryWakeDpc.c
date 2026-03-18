/*
 * XREFs of PopBatteryWakeDpc @ 0x140176230
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     PopBatteryQueueWork @ 0x1401762AC (PopBatteryQueueWork.c)
 */

__int64 PopBatteryWakeDpc()
{
  unsigned int v0; // edi

  byte_140417940 = 0;
  v0 = 1;
  if ( PopBatteryInitiateIgnoreStatusDuringBoot )
  {
    PopBatteryInitiateIgnoreStatusDuringBoot = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140417928, 0, 0);
  _InterlockedExchange(&dword_1404178A0, 0);
  return PopBatteryQueueWork(v0);
}
