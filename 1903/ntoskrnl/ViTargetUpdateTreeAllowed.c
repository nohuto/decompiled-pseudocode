/*
 * XREFs of ViTargetUpdateTreeAllowed @ 0x14097493C
 * Callers:
 *     ViTargetAddToCounter @ 0x14097442C (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140974560 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x14097467C (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140974824 (ViTargetTrackContiguousMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 ViTargetUpdateTreeAllowed()
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( KeGetCurrentIrql() <= 2u )
    return ViTargetInitialized != 0;
  return result;
}
