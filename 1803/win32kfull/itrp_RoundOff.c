/*
 * XREFs of itrp_RoundOff @ 0x1C02CDBF8
 * Callers:
 *     InvokeRoundValue @ 0x1C02C5448 (InvokeRoundValue.c)
 *     itrp_MDRP @ 0x1C02CB250 (itrp_MDRP.c)
 *     itrp_MIRP @ 0x1C02CBB50 (itrp_MIRP.c)
 *     itrp_NROUND @ 0x1C02CCC30 (itrp_NROUND.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RoundOff(int a1, int a2)
{
  unsigned int v2; // r8d

  v2 = a1 + a2;
  if ( a1 < 0 )
    v2 = a1 - a2;
  if ( ((a1 ^ v2) & 0x80000000) != 0 && a1 )
    return 0;
  return v2;
}
