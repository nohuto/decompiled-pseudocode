/*
 * XREFs of PopBatteryEstimatesSpoiled @ 0x14086D028
 * Callers:
 *     PopBatteryWorker @ 0x140719DA0 (PopBatteryWorker.c)
 *     PopEstimateChargeTime @ 0x14086D940 (PopEstimateChargeTime.c)
 * Callees:
 *     DbgPrintEx @ 0x140160440 (DbgPrintEx.c)
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
