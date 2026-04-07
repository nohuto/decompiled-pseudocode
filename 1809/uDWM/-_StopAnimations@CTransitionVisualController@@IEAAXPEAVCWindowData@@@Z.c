/*
 * XREFs of ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x1800301D8
 * Callers:
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18002A6B0 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18002F1D4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800198B0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180023254 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_9b37f3d03e1ad1f523dfdba086665a20___ @ 0x18009E540 (CTransitionVisualController--ForEachOwnedWindow__lambda_9b37f3d03e1ad1f523dfdba086665a20___.c)
 */

void __fastcall CTransitionVisualController::_StopAnimations(CTransitionVisualController *this, HWND *a2)
{
  struct CWindowData *WindowDataByHwnd; // rbx
  unsigned __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // ecx
  CTransitionVisualController *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = this;
  WindowDataByHwnd = (struct CWindowData *)a2;
  if ( !a2[50] && !a2[3] )
    WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                         a2[5]);
  if ( WindowDataByHwnd )
  {
    v3 = *((_QWORD *)WindowDataByHwnd + 50);
    if ( v3 )
    {
      CTopLevelWindow3D::StopAnimation(v3);
      v5 = *((_DWORD *)WindowDataByHwnd + 151);
      if ( (v5 & 0x30000000) == 0x30000000 || (v5 & 0x100000) != 0 )
      {
        LOBYTE(v4) = 1;
        LOBYTE(v6) = 0;
        CTransitionVisualController::ForEachOwnedWindow__lambda_9b37f3d03e1ad1f523dfdba086665a20___(
          WindowDataByHwnd,
          &v6,
          v4);
      }
    }
  }
}
