/*
 * XREFs of BgkDisplayProgressIndicator @ 0x1409FA84C
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     BgDisplayProgressIndicator @ 0x140951260 (BgDisplayProgressIndicator.c)
 */

__int64 BgkDisplayProgressIndicator()
{
  __int64 result; // rax

  if ( !byte_14043C734 || !byte_14043C735 )
    return 3221225473LL;
  result = BgDisplayProgressIndicator(1);
  if ( (int)result >= 0 )
    byte_14043C5F1 = 1;
  return result;
}
