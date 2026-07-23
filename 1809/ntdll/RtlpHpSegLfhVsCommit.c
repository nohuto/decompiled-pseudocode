/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x1800150B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x180015130 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegDescriptorValidate @ 0x1800154AC (RtlpHpSegDescriptorValidate.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(__int64 a1, __int64 a2)
{
  int v2; // esi

  v2 = a1;
  RtlpHpSegDescriptorValidate(a1, a2);
  return RtlpHpSegPageRangeCommit(v2, 0, 0LL);
}
