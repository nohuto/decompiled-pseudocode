/*
 * XREFs of BgkSetBootGraphicsInformation @ 0x140993440
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 * Callees:
 *     BgSetBootGraphicsInformation @ 0x140993600 (BgSetBootGraphicsInformation.c)
 */

__int64 BgkSetBootGraphicsInformation()
{
  if ( byte_140468264 )
    return BgSetBootGraphicsInformation();
  else
    return 3221225473LL;
}
