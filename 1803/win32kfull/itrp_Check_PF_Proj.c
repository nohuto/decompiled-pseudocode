/*
 * XREFs of itrp_Check_PF_Proj @ 0x1C02C6698
 * Callers:
 *     itrp_SFVTCA_0 @ 0x1C02CE380 (itrp_SFVTCA_0.c)
 *     itrp_SFVTCA_1 @ 0x1C02CE3D0 (itrp_SFVTCA_1.c)
 *     itrp_SPVTCA_0 @ 0x1C02CF740 (itrp_SPVTCA_0.c)
 *     itrp_SPVTCA_1 @ 0x1C02CF810 (itrp_SPVTCA_1.c)
 * Callees:
 *     <none>
 */

__int64 itrp_Check_PF_Proj()
{
  __int64 result; // rax

  result = (unsigned int)(unsigned __int16)word_1C03271A8 + 1023;
  if ( (unsigned __int16)(word_1C03271A8 + 1023) <= 0x7FEu )
  {
    result = 4294950912LL;
    if ( word_1C03271A8 >= 0 )
      result = 0x4000LL;
    word_1C03271A8 = result;
  }
  return result;
}
