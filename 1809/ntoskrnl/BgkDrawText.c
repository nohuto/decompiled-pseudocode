/*
 * XREFs of BgkDrawText @ 0x1409542CC
 * Callers:
 *     NtDrawText @ 0x140319BE0 (NtDrawText.c)
 * Callees:
 *     BgDisplayString @ 0x14095442C (BgDisplayString.c)
 */

__int64 BgkDrawText()
{
  if ( byte_14043D7F4 && byte_14043D7F5 )
    return BgDisplayString();
  else
    return 3221225473LL;
}
