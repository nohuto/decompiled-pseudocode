/*
 * XREFs of PnpWinlogonExternalDmaNotification @ 0x1405B0A04
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     ExNotifyCallback @ 0x1400FA670 (ExNotifyCallback.c)
 */

void __fastcall PnpWinlogonExternalDmaNotification(PVOID Argument1)
{
  ExNotifyCallback(PipCslCallbackObject, Argument1, 0LL);
}
