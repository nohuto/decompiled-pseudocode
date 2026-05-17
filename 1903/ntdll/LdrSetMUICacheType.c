/*
 * XREFs of LdrSetMUICacheType @ 0x18008BA60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800593F0 @ 0x1800593F0 (sub_1800593F0.c)
 */

__int64 __fastcall LdrSetMUICacheType(int a1)
{
  if ( (a1 & 0xFFFFFFF8) != 0 || (a1 & 6) == 6 )
    return 3221225485LL;
  if ( dword_18016434C )
    return 3221225473LL;
  dword_18016434C = a1;
  sub_1800593F0(-1LL, 0LL, 0LL, 0LL, 0, 16, 0, 0LL);
  return 0LL;
}
