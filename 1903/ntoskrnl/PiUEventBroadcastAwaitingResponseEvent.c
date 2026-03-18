/*
 * XREFs of PiUEventBroadcastAwaitingResponseEvent @ 0x140862CD8
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x14066C200 (PiUEventNotifyTargetDeviceChange.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PiUEventBroadcastAwaitingResponseEvent(__int64 a1, unsigned int a2)
{
  return ZwUpdateWnfStateData((__int64)&WNF_PNPB_AWAITING_RESPONSE, a1, a2);
}
