/*
 * XREFs of RtlpCtSelfSubscribe @ 0x14089AB8C
 * Callers:
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x1402F5AE0 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 */

__int64 __fastcall RtlpCtSelfSubscribe(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 16), 1, 0);
  return 0LL;
}
