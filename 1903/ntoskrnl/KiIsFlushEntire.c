/*
 * XREFs of KiIsFlushEntire @ 0x1402AA7E0
 * Callers:
 *     KiPreprocessFlushTb @ 0x1400B94A0 (KiPreprocessFlushTb.c)
 *     KeFlushTb @ 0x1400B9940 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x14017A1B0 (KeFlushCurrentTbOnly.c)
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
