/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x180047370
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x180047490 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010B280 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(__int64 a1, __int64 a2)
{
  int v2; // ebx

  v2 = a1;
  if ( (RtlpHpAppCompatFlags & 1) != 0 )
    RtlpHpSegGetDescriptorValidateSafe(a1, a2);
  return RtlpHpSegPageRangeCommit(v2, 0, 0LL);
}
