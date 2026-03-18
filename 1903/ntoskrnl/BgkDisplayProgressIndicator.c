/*
 * XREFs of BgkDisplayProgressIndicator @ 0x140A404BC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     BgDisplayProgressIndicator @ 0x1409912C0 (BgDisplayProgressIndicator.c)
 */

__int64 BgkDisplayProgressIndicator()
{
  __int64 result; // rax

  if ( !byte_140468264 || !byte_140468265 )
    return 3221225473LL;
  result = BgDisplayProgressIndicator(1);
  if ( (int)result >= 0 )
    byte_140468109 = 1;
  return result;
}
