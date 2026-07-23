/*
 * XREFs of HvlHalVpStartEnabled @ 0x1402744A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HvlHalVpStartEnabled()
{
  char v0; // cl

  v0 = 0;
  if ( !HvlVpStartDisabled )
    return (HvlEnlightenments & 0x8000) != 0;
  return v0;
}
