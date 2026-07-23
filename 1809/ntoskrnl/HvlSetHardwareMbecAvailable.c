/*
 * XREFs of HvlSetHardwareMbecAvailable @ 0x14027137C
 * Callers:
 *     KiSetFeatureBits @ 0x1405717EC (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetHardwareMbecAvailable()
{
  HvlpFlags |= 0x20000u;
}
