/*
 * XREFs of ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18000FD70
 * Callers:
 *     ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000D930 (-ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18000FB70 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180011E80 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x1800129D8 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x180032E88 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x1800398B8 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     McTemplateU0pqq @ 0x1800A6DD0 (McTemplateU0pqq.c)
 */

__int64 __fastcall CAnimationScheduler::OnWindowCloakChange(
        CAnimationScheduler *this,
        const struct CTopLevelWindow **a2,
        bool a3,
        bool a4,
        bool *a5)
{
  int v9; // edx
  CAnimationScheduler *v10; // rcx
  signed int v11; // r15d
  __int64 v12; // rbx
  const struct CStoryboard *v14; // r12

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0;
  v12 = 0LL;
  for ( *a5 = 0; (unsigned int)v12 < *((_DWORD *)this + 10); v12 = (unsigned int)(v12 + 1) )
  {
    v14 = *(const struct CStoryboard **)(*((_QWORD *)this + 2) + 8 * v12);
    if ( CAnimationScheduler::_ShouldTrack(v10, (const struct CWindowData *)a2, v14, 1) )
    {
      v11 = CWindowPropertyTracker::OnWindowCloakChange(
              (CAnimationScheduler *)((char *)this + 48),
              v14,
              (const struct CWindowData *)a2,
              a3,
              a4);
      LOBYTE(v10) = v11 >= 0;
      *a5 |= v11 >= 0;
    }
    else if ( a3 )
    {
      CTransitionVisualController::RemoveTLWClone(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
        a2[50],
        0,
        0);
    }
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0pqq((_DWORD)v10, v9, (unsigned int)a2[5], a3, *a5);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v11;
}
