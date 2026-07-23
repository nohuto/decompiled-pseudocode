/*
 * XREFs of KiIsFlushEntire @ 0x140293FF0
 * Callers:
 *     KeFlushTb @ 0x1400755A0 (KeFlushTb.c)
 *     KiPreprocessFlushTb @ 0x1400EDBB0 (KiPreprocessFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x140173F00 (KeFlushCurrentTbOnly.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIsFlushEntire(int a1)
{
  if ( KiFlushPcid )
    return 0;
  if ( KiKvaShadow )
  {
    if ( !a1 || a1 == 2 )
      return 0;
  }
  else if ( a1 && a1 <= 2 )
  {
    return 0;
  }
  return 1;
}
