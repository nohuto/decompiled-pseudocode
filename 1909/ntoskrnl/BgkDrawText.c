/*
 * XREFs of BgkDrawText @ 0x14099335C
 * Callers:
 *     NtDrawText @ 0x1403381D0 (NtDrawText.c)
 * Callees:
 *     BgDisplayString @ 0x1409934EC (BgDisplayString.c)
 */

__int64 BgkDrawText()
{
  if ( byte_140467FA4 && byte_140467FA5 )
    return BgDisplayString();
  else
    return 3221225473LL;
}
