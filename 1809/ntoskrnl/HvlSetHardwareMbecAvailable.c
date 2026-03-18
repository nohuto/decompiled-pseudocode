/*
 * XREFs of HvlSetHardwareMbecAvailable @ 0x14027108C
 * Callers:
 *     KiSetFeatureBits @ 0x1405707EC (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetHardwareMbecAvailable()
{
  HvlpFlags |= 0x20000u;
}
