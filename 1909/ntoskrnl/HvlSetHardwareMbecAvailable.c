/*
 * XREFs of HvlSetHardwareMbecAvailable @ 0x140284C70
 * Callers:
 *     KiSetFeatureBits @ 0x1405A09A4 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void HvlSetHardwareMbecAvailable()
{
  HvlpFlags |= 0x20000u;
}
