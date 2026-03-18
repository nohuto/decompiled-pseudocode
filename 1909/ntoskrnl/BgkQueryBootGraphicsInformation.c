/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x14098F454
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     BgQueryBootGraphicsInformation @ 0x140178C58 (BgQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(int a1, __int64 a2)
{
  if ( byte_140467FA4 )
    return BgQueryBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}
