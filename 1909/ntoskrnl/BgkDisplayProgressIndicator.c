/*
 * XREFs of BgkDisplayProgressIndicator @ 0x140A4028C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     BgDisplayProgressIndicator @ 0x1409912C0 (BgDisplayProgressIndicator.c)
 */

__int64 BgkDisplayProgressIndicator()
{
  __int64 result; // rax

  if ( !byte_140467FA4 || !byte_140467FA5 )
    return 3221225473LL;
  result = BgDisplayProgressIndicator(1);
  if ( (int)result >= 0 )
    byte_140467E3D = 1;
  return result;
}
