/*
 * XREFs of BgkDrawText @ 0x1409532CC
 * Callers:
 *     NtDrawText @ 0x1403198F0 (NtDrawText.c)
 * Callees:
 *     BgDisplayString @ 0x14095342C (BgDisplayString.c)
 */

__int64 BgkDrawText()
{
  if ( byte_14043C734 && byte_14043C735 )
    return BgDisplayString();
  else
    return 3221225473LL;
}
