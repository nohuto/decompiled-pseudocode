/*
 * XREFs of GreIsDynamicModeChangeLocked @ 0x1C0088210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GreIsDynamicModeChangeLocked()
{
  return ExIsResourceAcquiredExclusiveLite(ghsemDynamicModeChange) != 0;
}
