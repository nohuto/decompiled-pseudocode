/*
 * XREFs of _controlfp @ 0x180097CE8
 * Callers:
 *     atan @ 0x180091F90 (atan.c)
 *     atan2 @ 0x1800921F0 (atan2.c)
 *     cos @ 0x180092C70 (cos.c)
 *     sin @ 0x180093090 (sin.c)
 *     tan @ 0x180095450 (tan.c)
 * Callees:
 *     <none>
 */

unsigned int __cdecl controlfp(unsigned int NewValue, unsigned int Mask)
{
  return control87(NewValue, Mask & 0xFFF7FFFF);
}
