/*
 * XREFs of ?GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ @ 0x1800D9C80
 * Callers:
 *     ?GetCompositionNoRef@CGlobalSurfaceManager@@WFI@EBAPEAVCComposition@@XZ @ 0x1800ECFB0 (-GetCompositionNoRef@CGlobalSurfaceManager@@WFI@EBAPEAVCComposition@@XZ.c)
 * Callees:
 *     <none>
 */

struct CComposition *__fastcall CSurfaceManager::GetCompositionNoRef(CSurfaceManager *this)
{
  return (struct CComposition *)*((_QWORD *)this + 10);
}
