/*
 * XREFs of ?GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ @ 0x1800DA8F0
 * Callers:
 *     ?GetCompositionNoRef@CGlobalSurfaceManager@@WFI@EBAPEAVCComposition@@XZ @ 0x1800F0C70 (-GetCompositionNoRef@CGlobalSurfaceManager@@WFI@EBAPEAVCComposition@@XZ.c)
 * Callees:
 *     <none>
 */

struct CComposition *__fastcall CSurfaceManager::GetCompositionNoRef(CSurfaceManager *this)
{
  return (struct CComposition *)*((_QWORD *)this + 10);
}
