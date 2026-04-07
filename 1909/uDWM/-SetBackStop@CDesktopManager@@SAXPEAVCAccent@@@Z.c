/*
 * XREFs of ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x180004684
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180026AD0 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x1800299B8 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18002CB58 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 */

void __fastcall CDesktopManager::SetBackStop(struct CAccent *a1)
{
  struct CAnalogCompositorManager *Instance; // rax

  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 32) = a1;
  Instance = CAnalogCompositorManager::GetInstance();
  *((_BYTE *)Instance + 80) = a1 != 0LL;
  CAnalogCompositorManager::UpdateHolographicLockState(Instance);
}
