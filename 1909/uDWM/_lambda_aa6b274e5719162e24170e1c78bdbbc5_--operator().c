/*
 * XREFs of _lambda_aa6b274e5719162e24170e1c78bdbbc5_::operator() @ 0x18004B1F8
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_aa6b274e5719162e24170e1c78bdbbc5___ @ 0x18004B134 (CTransitionVisualController--ForEachOwnedWindow__lambda_aa6b274e5719162e24170e1c78bdbbc5___.c)
 * Callees:
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x180007924 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180009D34 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x180009EE8 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 */

__int64 __fastcall lambda_aa6b274e5719162e24170e1c78bdbbc5_::operator()(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  char v6; // al

  v2 = 0;
  if ( *(_QWORD *)(a2 + 400) )
  {
    if ( CTransitionVisualController::ShouldCloneWindow(*(HWND *)(a2 + 40)) )
    {
      if ( (*(_DWORD *)(a2 + 100) & 0x20000000) == 0 )
      {
        v6 = *(_BYTE *)(a2 + 604);
        if ( (v6 & 4) == 0
          && (v6 & 1) != 0
          && (**(_DWORD **)a1 == -1
           || !CAnimationScheduler::IsWindowCurrentlyAnimating(
                 *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30),
                 *(HWND *)(a2 + 40),
                 **(_DWORD **)a1,
                 0)) )
        {
          return (unsigned int)CTransitionVisualController::_StageCloneRelative(
                                 *(CTransitionVisualController **)(a1 + 8),
                                 *(struct CTopLevelWindow **)(a2 + 400),
                                 **(struct CVisual ***)(a1 + 16),
                                 0,
                                 0LL,
                                 0,
                                 **(_BYTE **)(a1 + 24),
                                 1,
                                 *(bool **)(a1 + 32));
        }
      }
    }
  }
  return v2;
}
