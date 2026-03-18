/*
 * XREFs of BgkDrawText @ 0x14099335C
 * Callers:
 *     NtDrawText @ 0x140338770 (NtDrawText.c)
 * Callees:
 *     BgDisplayString @ 0x1409934EC (BgDisplayString.c)
 */

__int64 BgkDrawText()
{
  if ( byte_140468264 && byte_140468265 )
    return BgDisplayString();
  else
    return 3221225473LL;
}
