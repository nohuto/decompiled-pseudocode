/*
 * XREFs of ?SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z @ 0x1800A9180
 * Callers:
 *     <none>
 * Callees:
 *     ?StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z @ 0x180039FD8 (-StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z.c)
 *     ?SetCommitHandle@CWindowList@@QEAAJPEAX@Z @ 0x180092390 (-SetCommitHandle@CWindowList@@QEAAJPEAX@Z.c)
 */

void __fastcall CTabSwitch::SetCompSyncHandle(CTabSwitch *this, void *a2)
{
  CWindowPropertyTracker::StopTrackingStoryboard(
    (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
    this);
  CWindowList::SetCommitHandle(*((void ***)CDesktopManager::s_pDesktopManagerInstance + 61), a2);
  CWindowList::ForceUpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61));
}
