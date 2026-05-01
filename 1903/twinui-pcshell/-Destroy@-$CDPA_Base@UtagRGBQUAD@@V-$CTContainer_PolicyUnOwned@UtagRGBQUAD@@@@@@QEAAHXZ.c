/*
 * XREFs of ?Destroy@?$CDPA_Base@UtagRGBQUAD@@V?$CTContainer_PolicyUnOwned@UtagRGBQUAD@@@@@@QEAAHXZ @ 0x1804225B8
 * Callers:
 *     ??1BUCKET@@QEAA@XZ @ 0x180422540 (--1BUCKET@@QEAA@XZ.c)
 *     ?_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z @ 0x180422928 (-_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z.c)
 * Callees:
 *     DPA_Destroy @ 0x180422F80 (DPA_Destroy.c)
 *     DPA_DestroyCallback @ 0x180422FE0 (DPA_DestroyCallback.c)
 */

BOOL __fastcall CDPA_Base<tagRGBQUAD,CTContainer_PolicyUnOwned<tagRGBQUAD>>::Destroy(struct _DPA **a1)
{
  BOOL result; // eax
  struct _DPA *v3; // rcx

  result = 1;
  v3 = *a1;
  if ( v3 )
  {
    g_pfn_DPA_DestroyCallback(v3, (PFNDAENUMCALLBACK)CActionCenterExperienceManager::IsHintSupported, 0LL);
    *a1 = 0LL;
    result = DPA_Destroy(0LL);
    *a1 = 0LL;
  }
  return result;
}
