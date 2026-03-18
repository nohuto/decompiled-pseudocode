/*
 * XREFs of BgkDisplayBackgroundUpdate @ 0x140A41068
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     BgDisplayBackgroundUpdate @ 0x1409916D8 (BgDisplayBackgroundUpdate.c)
 */

__int64 BgkDisplayBackgroundUpdate()
{
  __int64 result; // rax

  if ( !byte_140468264 || !byte_140468265 )
    return 3221225473LL;
  result = BgDisplayBackgroundUpdate(1);
  if ( (int)result >= 0 )
    byte_140468108 = 1;
  return result;
}
