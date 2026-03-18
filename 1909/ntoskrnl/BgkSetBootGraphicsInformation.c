/*
 * XREFs of BgkSetBootGraphicsInformation @ 0x140993440
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 * Callees:
 *     BgSetBootGraphicsInformation @ 0x140993600 (BgSetBootGraphicsInformation.c)
 */

__int64 BgkSetBootGraphicsInformation()
{
  if ( byte_140467FA4 )
    return BgSetBootGraphicsInformation();
  else
    return 3221225473LL;
}
