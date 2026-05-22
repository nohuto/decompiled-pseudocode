/*
 * XREFs of ?OnPausedChanged@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x1800713E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180057E88 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?OverrideStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180073098 (-OverrideStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationOverrideProx.c)
 */

__int64 __fastcall ControllerNavigationOverrideProxy::OnPausedChanged(ControllerNavigationOverrideProxy *this)
{
  ControllerNavigationManager *ControllerNavigationManager; // rax

  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  ControllerNavigationManager::OverrideStateChanged(ControllerNavigationManager, this);
  return 0LL;
}
