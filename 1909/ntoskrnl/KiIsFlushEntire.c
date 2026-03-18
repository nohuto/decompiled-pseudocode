/*
 * XREFs of KiIsFlushEntire @ 0x1402AA540
 * Callers:
 *     KiPreprocessFlushTb @ 0x140099310 (KiPreprocessFlushTb.c)
 *     KeFlushTb @ 0x1400997B0 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x14017A8A0 (KeFlushCurrentTbOnly.c)
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
