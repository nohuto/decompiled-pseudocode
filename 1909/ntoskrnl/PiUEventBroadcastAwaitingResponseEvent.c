/*
 * XREFs of PiUEventBroadcastAwaitingResponseEvent @ 0x1408623D8
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x1406990D0 (PiUEventNotifyTargetDeviceChange.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PiUEventBroadcastAwaitingResponseEvent(void *Buffer, ULONG Length)
{
  return ZwUpdateWnfStateData(&WNF_PNPB_AWAITING_RESPONSE, Buffer, Length, 0LL, 0LL, 0, 0);
}
