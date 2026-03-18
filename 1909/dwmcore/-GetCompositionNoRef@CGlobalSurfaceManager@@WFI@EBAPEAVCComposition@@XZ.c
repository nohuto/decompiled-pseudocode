/*
 * XREFs of ?GetCompositionNoRef@CGlobalSurfaceManager@@WFI@EBAPEAVCComposition@@XZ @ 0x1800F0C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CComposition *__fastcall CGlobalSurfaceManager::GetCompositionNoRef(__int64 a1)
{
  return CSurfaceManager::GetCompositionNoRef((CSurfaceManager *)(a1 - 88));
}
