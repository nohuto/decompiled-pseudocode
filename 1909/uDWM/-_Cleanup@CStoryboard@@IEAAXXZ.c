/*
 * XREFs of ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18002A1BC
 * Callers:
 *     ?OnAnimationComplete@CStoryboard@@UEAAJI@Z @ 0x1800066E0 (-OnAnimationComplete@CStoryboard@@UEAAJI@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18002D1BC (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?Destroy@CStoryboard@@UEAAXXZ @ 0x18002FBF0 (-Destroy@CStoryboard@@UEAAXXZ.c)
 *     ?Destroy@CSlideOut@@UEAAXXZ @ 0x18003D130 (-Destroy@CSlideOut@@UEAAXXZ.c)
 *     ?Destroy@CAppArrangementDelayed@@EEAAXXZ @ 0x1800A7630 (-Destroy@CAppArrangementDelayed@@EEAAXXZ.c)
 *     ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ @ 0x1800A7670 (-Destroy@CVirtualDesktopSwitch@@EEAAXXZ.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x1800A9034 (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z @ 0x180003A64 (-ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z.c)
 *     ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x180003C44 (-DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18000A8D8 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x18001271C (-GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180014050 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18002A378 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18002A5AC (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18002D1BC (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18002D2F4 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z @ 0x180039FD8 (-StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z.c)
 */

void __fastcall CStoryboard::_Cleanup(CStoryboard *this)
{
  int v2; // eax
  char v3; // bp
  CDesktopManager *v4; // rax
  __int64 v5; // rdx
  CStoryboard *v6; // rcx
  __int64 i; // rdi
  int v8; // edx
  struct CWindowData *WindowDataByHwnd; // rax
  int v10; // ecx
  CBaseObject *v11; // rcx
  __int64 v12; // r10
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = *((_DWORD *)this + 6);
  if ( v2 != 4 )
  {
    if ( (unsigned int)(v2 - 2) > 1 )
    {
      v3 = 1;
      CTransitionVisualController::RemoveTargetsForStoryboard(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
        this,
        1,
        0);
    }
    else
    {
      v3 = 0;
    }
    v4 = CDesktopManager::s_pDesktopManagerInstance;
    *((_DWORD *)this + 6) = 4;
    CWindowPropertyTracker::StopTrackingStoryboard((CWindowPropertyTracker *)(*((_QWORD *)v4 + 30) + 48LL), this);
    CStoryboard::_LogStoryboardEvent((unsigned __int64)this, v5);
    v6 = (CStoryboard *)*((_QWORD *)this + 10);
    *((_DWORD *)this + 7) = -1;
    if ( v6 )
    {
      CStoryboard::Release(v6);
      *((_QWORD *)this + 10) = 0LL;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
    {
      v8 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * i) + 24LL);
      if ( (v8 & 0x20000000) != 0
        && !CAnimationScheduler::ShouldSnapshot(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30), v8, this) )
      {
        CTransitionVisualController::DiscardStoredSnapshot(
          *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
          *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * i) + 16LL));
      }
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * i) + 16LL));
      if ( WindowDataByHwnd && (v3 || (*((_DWORD *)WindowDataByHwnd + 153) & 0xFFF) == 0xFFF) )
      {
        v10 = *((_DWORD *)WindowDataByHwnd + 153);
        if ( (v10 & 0x40000000) == 0 )
          *((_DWORD *)WindowDataByHwnd + 153) = v10 & 0x2000000 | 0xFFF;
      }
      CTransitionVisualController::RemoveAnimationComponent(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
        *(struct CAnimationComponent **)(*((_QWORD *)this + 11) + 8 * i));
      v11 = *(CBaseObject **)(*((_QWORD *)this + 11) + 8 * i);
      if ( v11 )
      {
        CBaseObject::Release(v11);
        *(_QWORD *)(*((_QWORD *)this + 11) + 8 * i) = 0LL;
      }
    }
    if ( (int)CAnimationScheduler::GetActiveStoryboardCount(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance
                                                            + 30)) > 0 )
      CTransitionVisualController::SetupZOrder(*(CTransitionVisualController **)(v12 + 248));
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
}
