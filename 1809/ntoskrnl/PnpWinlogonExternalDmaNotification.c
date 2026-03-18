/*
 * XREFs of PnpWinlogonExternalDmaNotification @ 0x140582044
 * Callers:
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 * Callees:
 *     ExNotifyCallback @ 0x14008E560 (ExNotifyCallback.c)
 */

void __fastcall PnpWinlogonExternalDmaNotification(PVOID Argument1)
{
  ExNotifyCallback(PipCslCallbackObject, Argument1, 0LL);
}
