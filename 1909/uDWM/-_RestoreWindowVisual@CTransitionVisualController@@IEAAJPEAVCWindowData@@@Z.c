/*
 * XREFs of ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x1800A4448
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_8668eb8e46af08c9eb1e7b72b67bd2fa___ @ 0x1800A2980 (CTransitionVisualController--ForEachOwnedWindow__lambda_8668eb8e46af08c9eb1e7b72b67bd2fa___.c)
 *     ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800AAF08 (-_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180009300 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180027290 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z @ 0x1800331C8 (-StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_RestoreWindowVisual(
        CTransitionVisualController *this,
        struct CWindowData *a2)
{
  unsigned int v2; // ebx
  int v4; // eax

  v2 = 0;
  if ( *((_QWORD *)a2 + 50) )
  {
    CWindowPropertyTracker::StopTrackingWindowImmediately(
      (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
      *((HWND *)a2 + 5));
    v4 = CVisual::RenderRecursive(*((CVisual **)a2 + 50));
    v2 = v4;
    if ( v4 >= 0 )
      CTransitionVisualController::_MoveWindowOffscreen(*((struct CTopLevelWindow **)a2 + 50), 1);
    else
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v4,
        0xC44u);
  }
  return v2;
}
