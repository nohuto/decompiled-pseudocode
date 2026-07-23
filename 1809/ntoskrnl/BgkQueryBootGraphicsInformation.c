/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x140950414
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     BgQueryBootGraphicsInformation @ 0x14016EEA8 (BgQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(int a1, __int64 a2)
{
  if ( byte_14043D7F4 )
    return BgQueryBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}
