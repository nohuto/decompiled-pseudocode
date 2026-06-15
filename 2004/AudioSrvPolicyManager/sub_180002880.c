/*
 * XREFs of sub_180002880 @ 0x180002880
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002740 @ 0x180002740 (sub_180002740.c)
 */

_BYTE *sub_180002880()
{
  if ( !byte_18004FD9C )
  {
    sub_180002740((LPCWSTR)sub_180002700, 0LL, byte_18004FDB0, 64LL);
    byte_18004FD9C = 1;
  }
  return byte_18004FDB0;
}
