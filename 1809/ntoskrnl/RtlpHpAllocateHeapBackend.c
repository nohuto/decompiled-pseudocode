/*
 * XREFs of RtlpHpAllocateHeapBackend @ 0x1402FCB24
 * Callers:
 *     ExAllocateHeapPool @ 0x1400BA0B0 (ExAllocateHeapPool.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x14000B118 (RtlpHpSegAlloc.c)
 */

void *__fastcall RtlpHpAllocateHeapBackend(__int64 a1, size_t a2, unsigned __int64 a3, unsigned int a4)
{
  return RtlpHpSegAlloc((*(unsigned int *)(a1 + 272) < a3 ? 448LL : 256LL) + a1, a2, a3, a3, a4);
}
