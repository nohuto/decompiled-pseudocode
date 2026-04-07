/*
 * XREFs of ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x1800058E8
 * Callers:
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18000D720 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180010664 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18000C258 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 */

char __fastcall CTopLevelWindow3D::IsWindowInSystemArrangementAnimation(CTopLevelWindow3D *this)
{
  CAnimationScheduler *v1; // rdi
  HWND v2; // rdx
  char v3; // bl

  v1 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  v3 = 0;
  if ( CAnimationScheduler::IsWindowCurrentlyAnimating(v1, *(HWND *)(*((_QWORD *)this + 41) + 40LL), 50, 0)
    || CAnimationScheduler::IsWindowCurrentlyAnimating(v1, v2, 67, 0) )
  {
    return 1;
  }
  return v3;
}
