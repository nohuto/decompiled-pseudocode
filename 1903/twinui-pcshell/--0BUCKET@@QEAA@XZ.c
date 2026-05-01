/*
 * XREFs of ??0BUCKET@@QEAA@XZ @ 0x180422510
 * Callers:
 *     ?_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z @ 0x180422928 (-_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z.c)
 * Callees:
 *     DPA_Create @ 0x180422F10 (DPA_Create.c)
 */

BUCKET *__fastcall BUCKET::BUCKET(BUCKET *this)
{
  *(_QWORD *)this = 0LL;
  *(_QWORD *)this = g_pfn_DPA_Create(16);
  return this;
}
