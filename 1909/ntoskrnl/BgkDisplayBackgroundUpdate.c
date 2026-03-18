/*
 * XREFs of BgkDisplayBackgroundUpdate @ 0x140A40E38
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     BgDisplayBackgroundUpdate @ 0x1409916D8 (BgDisplayBackgroundUpdate.c)
 */

__int64 BgkDisplayBackgroundUpdate()
{
  __int64 result; // rax

  if ( !byte_140467FA4 || !byte_140467FA5 )
    return 3221225473LL;
  result = BgDisplayBackgroundUpdate(1);
  if ( (int)result >= 0 )
    byte_140467E3C = 1;
  return result;
}
