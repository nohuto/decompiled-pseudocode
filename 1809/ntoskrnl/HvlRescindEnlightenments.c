/*
 * XREFs of HvlRescindEnlightenments @ 0x14013BC5C
 * Callers:
 *     KiEnableKvaShadowing @ 0x140573BD8 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

void HvlRescindEnlightenments()
{
  _InterlockedOr(&HvlpRescindedEnlightenments, 1u);
  _InterlockedAnd(&HvlEnlightenments, 0xFFFFFFFE);
  _InterlockedAnd(&HvlpEnlightenments, 0xFFFFFFFE);
}
