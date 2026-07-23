/*
 * XREFs of RtlpRtlpCtSelfSubscribeCallback @ 0x1800FE8E0
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetEvent @ 0x1800A04C0 (ZwSetEvent.c)
 */

__int64 __fastcall RtlpRtlpCtSelfSubscribeCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ZwSetEvent(*(HANDLE *)(a4 + 16), 0LL);
  return 0LL;
}
