/*
 * XREFs of RtlpRtlpCtSelfSubscribeCallback @ 0x1800FE8E0
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetEvent @ 0x1800A04A0 (ZwSetEvent.c)
 */

__int64 RtlpRtlpCtSelfSubscribeCallback()
{
  ZwSetEvent();
  return 0LL;
}
