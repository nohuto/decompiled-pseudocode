/*
 * XREFs of PiUEventBroadcastAwaitingResponseEvent @ 0x140862CD8
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x14066C200 (PiUEventNotifyTargetDeviceChange.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PiUEventBroadcastAwaitingResponseEvent(void *Buffer, ULONG Length)
{
  return ZwUpdateWnfStateData(&WNF_PNPB_AWAITING_RESPONSE, Buffer, Length, 0LL, 0LL, 0, 0);
}
