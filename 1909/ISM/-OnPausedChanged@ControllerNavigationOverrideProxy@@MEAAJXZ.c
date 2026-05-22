/*
 * XREFs of ?OnPausedChanged@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x1800711A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180057BE8 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?OverrideStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180072E58 (-OverrideStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationOverrideProx.c)
 */

__int64 __fastcall ControllerNavigationOverrideProxy::OnPausedChanged(ControllerNavigationOverrideProxy *this)
{
  ControllerNavigationManager *ControllerNavigationManager; // rax

  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  ControllerNavigationManager::OverrideStateChanged(ControllerNavigationManager, this);
  return 0LL;
}
