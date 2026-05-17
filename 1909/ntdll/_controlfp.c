/*
 * XREFs of _controlfp @ 0x180094C20
 * Callers:
 *     atan @ 0x18008EF10 (atan.c)
 *     atan2 @ 0x18008F170 (atan2.c)
 *     cos @ 0x18008FBF0 (cos.c)
 *     sin @ 0x180090010 (sin.c)
 *     tan @ 0x180092380 (tan.c)
 * Callees:
 *     <none>
 */

unsigned int __cdecl controlfp(unsigned int NewValue, unsigned int Mask)
{
  return control87(NewValue, Mask & 0xFFF7FFFF);
}
