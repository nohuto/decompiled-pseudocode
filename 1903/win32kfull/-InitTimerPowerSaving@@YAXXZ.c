/*
 * XREFs of ?InitTimerPowerSaving@@YAXXZ @ 0x1C00D7350
 * Callers:
 *     RawInputThread @ 0x1C00D7680 (RawInputThread.c)
 * Callees:
 *     <none>
 */

void InitTimerPowerSaving(void)
{
  FastGetProfileDword(0LL, 2LL, L"RITdemonTimerPowerSaveElapse");
  FastGetProfileDword(0LL, 2LL, L"RITdemonTimerPowerSaveCoalescing");
}
