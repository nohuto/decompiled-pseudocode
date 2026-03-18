/*
 * XREFs of ViTargetUpdateTreeAllowed @ 0x140935328
 * Callers:
 *     ViTargetAddToCounter @ 0x140934E3C (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140934F64 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x14093507C (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140935218 (ViTargetTrackContiguousMemory.c)
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
