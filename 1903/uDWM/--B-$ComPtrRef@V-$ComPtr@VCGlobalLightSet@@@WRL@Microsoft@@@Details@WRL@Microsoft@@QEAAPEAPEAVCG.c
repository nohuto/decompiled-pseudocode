/*
 * XREFs of ??B?$ComPtrRef@V?$ComPtr@VCGlobalLightSet@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVCGlobalLightSet@@XZ @ 0x18008EE80
 * Callers:
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x180090BA4 (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800B4BDC (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject **__fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<CGlobalLightSet>>::operator CGlobalLightSet * *(
        CBaseObject ***a1)
{
  CBaseObject **v1; // rbx
  CBaseObject *v2; // rcx

  v1 = *a1;
  v2 = **a1;
  if ( v2 )
  {
    *v1 = 0LL;
    CBaseObject::Release(v2);
  }
  return v1;
}
