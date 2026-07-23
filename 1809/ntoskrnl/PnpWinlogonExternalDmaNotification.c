/*
 * XREFs of PnpWinlogonExternalDmaNotification @ 0x140583044
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     ExNotifyCallback @ 0x14008E480 (ExNotifyCallback.c)
 */

void __fastcall PnpWinlogonExternalDmaNotification(PVOID Argument1)
{
  ExNotifyCallback(PipCslCallbackObject, Argument1, 0LL);
}
