/*
 * XREFs of PopBatteryEstimatesSpoiled @ 0x1408A93C8
 * Callers:
 *     PopBatteryWorker @ 0x14073A3F0 (PopBatteryWorker.c)
 *     PopEstimateChargeTime @ 0x1408A9CD0 (PopEstimateChargeTime.c)
 * Callees:
 *     DbgPrintEx @ 0x140126B10 (DbgPrintEx.c)
 */

char PopBatteryEstimatesSpoiled()
{
  char v0; // bl

  if ( (unsigned __int64)PopEstimateSpoiledUntilTime < MEMORY[0xFFFFF78000000008] )
    return 0;
  v0 = 1;
  DbgPrintEx(0x92u, 3u, "Battery estimate suppressed\n");
  return v0;
}
