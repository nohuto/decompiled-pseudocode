/*
 * XREFs of BgkDisplayBackgroundUpdate @ 0x1409FB3D4
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     BgDisplayBackgroundUpdate @ 0x140951670 (BgDisplayBackgroundUpdate.c)
 */

__int64 BgkDisplayBackgroundUpdate()
{
  __int64 result; // rax

  if ( !byte_14043C734 || !byte_14043C735 )
    return 3221225473LL;
  result = BgDisplayBackgroundUpdate(1);
  if ( (int)result >= 0 )
    byte_14043C5F0 = 1;
  return result;
}
