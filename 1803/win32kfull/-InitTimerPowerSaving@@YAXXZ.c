/*
 * XREFs of ?InitTimerPowerSaving@@YAXXZ @ 0x1C011302C
 * Callers:
 *     RawInputThread @ 0x1C001CA60 (RawInputThread.c)
 * Callees:
 *     <none>
 */

void InitTimerPowerSaving(void)
{
  FastGetProfileDword(0LL, 2LL, L"RITdemonTimerPowerSaveElapse", 43200000LL, &gdwRITdemonTimerPowerSaveElapse);
  FastGetProfileDword(0LL, 2LL, L"RITdemonTimerPowerSaveCoalescing", 43200000LL, &gdwRITdemonTimerPowerSaveCoalescing);
}
