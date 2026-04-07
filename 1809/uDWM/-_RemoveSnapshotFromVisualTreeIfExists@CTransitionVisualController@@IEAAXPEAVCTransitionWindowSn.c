/*
 * XREFs of ?_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSnapshot@@@Z @ 0x180005C28
 * Callers:
 *     ?_DiscardStoredSnapshotByIndex@CTransitionVisualController@@IEAAJH@Z @ 0x180005BB8 (-_DiscardStoredSnapshotByIndex@CTransitionVisualController@@IEAAJH@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18002F1D4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001CDE0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 */

void __fastcall CTransitionVisualController::_RemoveSnapshotFromVisualTreeIfExists(
        CTransitionVisualController *this,
        struct CTransitionWindowSnapshot *a2)
{
  __int64 v3; // rdx
  struct CRenderDataVisual *RootVisualForDesktop; // rax

  v3 = *(_QWORD *)(*((_QWORD *)a2 + 35) + 32LL);
  if ( v3 )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                             *(_QWORD *)(v3 + 120));
    if ( *((struct CRenderDataVisual **)a2 + 3) == RootVisualForDesktop )
      VisualCollection::Remove((struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32), a2);
  }
}
