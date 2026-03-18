/*
 * XREFs of itrp_ComputeAndCheck_PF_Proj @ 0x1C02C66D0
 * Callers:
 *     itrp_SDPVTL @ 0x1C02CDF50 (itrp_SDPVTL.c)
 *     itrp_SFVTL @ 0x1C02CE420 (itrp_SFVTL.c)
 *     itrp_SPVTL @ 0x1C02CF8E0 (itrp_SPVTL.c)
 *     itrp_WFV @ 0x1C02D0C60 (itrp_WFV.c)
 *     itrp_WPV @ 0x1C02D0D10 (itrp_WPV.c)
 * Callees:
 *     <none>
 */

__int64 itrp_ComputeAndCheck_PF_Proj()
{
  int v0; // edx
  __int64 result; // rax

  v0 = (SHIWORD(dword_1C032715C) * SHIWORD(dword_1C0327158) + 0x2000) >> 14;
  LOWORD(v0) = (((__int16)dword_1C032715C * (__int16)dword_1C0327158 + 0x2000) >> 14) + v0;
  result = (unsigned int)(v0 + 1023);
  if ( (unsigned __int16)(v0 + 1023) <= 0x7FEu )
  {
    result = 0x4000LL;
    LOWORD(v0) = (((__int16)v0 >> 15) & 0x8000) + 0x4000;
  }
  dword_1C03271C8 = 0;
  word_1C03271A8 = v0;
  return result;
}
