/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x14094F414
 * Callers:
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 * Callees:
 *     BgQueryBootGraphicsInformation @ 0x14016EDA8 (BgQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(int a1, __int64 a2)
{
  if ( byte_14043C734 )
    return BgQueryBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}
