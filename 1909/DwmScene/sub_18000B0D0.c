/*
 * XREFs of sub_18000B0D0 @ 0x18000B0D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B510 @ 0x18000B510 (sub_18000B510.c)
 */

void *sub_18000B0D0()
{
  if ( !byte_180269BD0 )
  {
    sub_18000B510((LPCWSTR)sub_18000BDC0);
    byte_180269BD0 = 1;
  }
  return &unk_180269B90;
}
