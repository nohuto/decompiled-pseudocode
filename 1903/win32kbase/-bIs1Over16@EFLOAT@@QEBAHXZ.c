/*
 * XREFs of ?bIs1Over16@EFLOAT@@QEBAHXZ @ 0x1C01237E0
 * Callers:
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C002B760 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIs1Over16(EFLOAT *this)
{
  return *(float *)this == 0.0625;
}
