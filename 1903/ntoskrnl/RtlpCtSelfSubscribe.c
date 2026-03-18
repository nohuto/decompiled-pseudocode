/*
 * XREFs of RtlpCtSelfSubscribe @ 0x1408D8468
 * Callers:
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x140314520 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 */

__int64 __fastcall RtlpCtSelfSubscribe(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 16), 1, 0);
  return 0LL;
}
