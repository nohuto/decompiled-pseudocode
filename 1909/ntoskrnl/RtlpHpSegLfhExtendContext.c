/*
 * XREFs of RtlpHpSegLfhExtendContext @ 0x140137180
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapExtendContext @ 0x140137198 (RtlpHpHeapExtendContext.c)
 */

__int64 __fastcall RtlpHpSegLfhExtendContext(__int64 a1)
{
  return RtlpHpHeapExtendContext(*(_QWORD *)(a1 + 56));
}
