/*
 * XREFs of _controlfp @ 0x180097CD8
 * Callers:
 *     atan @ 0x180091F80 (atan.c)
 *     atan2 @ 0x1800921E0 (atan2.c)
 *     cos @ 0x180092C60 (cos.c)
 *     sin @ 0x180093080 (sin.c)
 *     tan @ 0x180095440 (tan.c)
 * Callees:
 *     <none>
 */

unsigned int __cdecl controlfp(unsigned int NewValue, unsigned int Mask)
{
  return control87(NewValue, Mask & 0xFFF7FFFF);
}
