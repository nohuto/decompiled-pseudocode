/*
 * XREFs of PopBatteryWakeDpc @ 0x140176350
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     PopBatteryQueueWork @ 0x1401763CC (PopBatteryQueueWork.c)
 */

__int64 PopBatteryWakeDpc()
{
  unsigned int v0; // edi

  byte_140418AC0 = 0;
  v0 = 1;
  if ( PopBatteryInitiateIgnoreStatusDuringBoot )
  {
    PopBatteryInitiateIgnoreStatusDuringBoot = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140418AA8, 0, 0);
  _InterlockedExchange(&dword_140418A20, 0);
  return PopBatteryQueueWork(v0);
}
