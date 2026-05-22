/*
 * XREFs of ?OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ @ 0x180071250
 * Callers:
 *     <none>
 * Callees:
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180057E88 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?ClientRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x1800725BC (-ClientRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z.c)
 */

__int64 __fastcall ControllerNavigationClientProxy::OnDisconnected(ControllerNavigationClientProxy *this)
{
  ControllerNavigationManager *ControllerNavigationManager; // rax

  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  ControllerNavigationManager::ClientRemoved(ControllerNavigationManager, this);
  return 0LL;
}
