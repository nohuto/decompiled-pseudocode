/*
 * XREFs of GreResumeDirectDraw @ 0x1C00C9840
 * Callers:
 *     <none>
 * Callees:
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C006E590 (GreIncrementDisplaySettingsUniqueness.c)
 */

PVOID GreResumeDirectDraw()
{
  return GreIncrementDisplaySettingsUniqueness();
}
