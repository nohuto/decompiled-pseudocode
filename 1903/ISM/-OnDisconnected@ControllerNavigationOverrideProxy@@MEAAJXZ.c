/*
 * XREFs of ?OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x180071280
 * Callers:
 *     <none>
 * Callees:
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180057E88 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?OverrideRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180073008 (-OverrideRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z.c)
 */

__int64 __fastcall ControllerNavigationOverrideProxy::OnDisconnected(ControllerNavigationOverrideProxy *this)
{
  ControllerNavigationManager *ControllerNavigationManager; // rax

  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  ControllerNavigationManager::OverrideRemoved(ControllerNavigationManager, this);
  return 0LL;
}
