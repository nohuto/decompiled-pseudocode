/*
 * XREFs of PopPublishPowerButtonState @ 0x140877154
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1402E46A0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     DbgPrintEx @ 0x140160440 (DbgPrintEx.c)
 *     ZwUpdateWnfStateData @ 0x1401BBA50 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopPublishPowerButtonState(_DWORD *a1)
{
  DbgPrintEx(0x92u, 3u, "Power button hold update (down: %d, time: %d ms, sequence: %d)\n", *a1 & 1, *a1 >> 1, a1[1]);
  return ZwUpdateWnfStateData((__int64)&WNF_PO_POWER_BUTTON_STATE, (__int64)a1, 8LL);
}
