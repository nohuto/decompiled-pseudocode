/*
 * XREFs of HvlRescindEnlightenments @ 0x14013DC90
 * Callers:
 *     KiEnableKvaShadowing @ 0x14059F81C (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

void HvlRescindEnlightenments()
{
  _InterlockedOr(&HvlpRescindedEnlightenments, 1u);
  _InterlockedAnd(&HvlEnlightenments, 0xFFFFFFFE);
  _InterlockedAnd((volatile signed __int32 *)&HvlpEnlightenments, 0xFFFFFFFE);
}
