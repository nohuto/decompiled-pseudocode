/*
 * XREFs of ?InitTimerPowerSaving@@YAXXZ @ 0x1C0077ABC
 * Callers:
 *     RawInputThread @ 0x1C0077DE0 (RawInputThread.c)
 * Callees:
 *     <none>
 */

void InitTimerPowerSaving(void)
{
  FastGetProfileDword(0LL, 2LL, L"RITdemonTimerPowerSaveElapse");
  FastGetProfileDword(0LL, 2LL, L"RITdemonTimerPowerSaveCoalescing");
}
