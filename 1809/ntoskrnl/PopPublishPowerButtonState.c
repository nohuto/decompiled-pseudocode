/*
 * XREFs of PopPublishPowerButtonState @ 0x140878394
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1402E4990 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PopPublishPowerButtonState(_DWORD *Buffer)
{
  DbgPrintEx(
    0x92u,
    3u,
    "Power button hold update (down: %d, time: %d ms, sequence: %d)\n",
    *Buffer & 1,
    *Buffer >> 1,
    Buffer[1]);
  return ZwUpdateWnfStateData(&WNF_PO_POWER_BUTTON_STATE, Buffer, 8u, 0LL, 0LL, 0, 0);
}
