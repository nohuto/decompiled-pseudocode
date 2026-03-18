/*
 * XREFs of HvlSetHardwareMbecAvailable @ 0x140284F10
 * Callers:
 *     KiSetFeatureBits @ 0x1405A09C4 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetHardwareMbecAvailable()
{
  HvlpFlags |= 0x20000u;
}
