/*
 * XREFs of ?I24TOF32@@YAMPEAE@Z @ 0x1400152C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

float __fastcall I24TOF32(unsigned __int8 *a1)
{
  return (float)((*a1 | (*(unsigned __int16 *)(a1 + 1) << 8)) << 8 >> 8) * 0.00000011920929;
}
