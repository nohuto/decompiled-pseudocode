/*
 * XREFs of ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z @ 0x180083470
 * Callers:
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180082390 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@IAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180082A14 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual.c)
 * Callees:
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800116A8 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x1800193B0 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJI_N@Z @ 0x180083108 (-_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJI_N@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow(
        CProjectionBorderManager *this,
        HWND a2,
        unsigned int a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  struct CWindowData *v9; // rdi
  CTopLevelWindow *v10; // rcx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp-28h] BYREF
  struct _MARGINS v13; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct CWindowData *v15; // [rsp+78h] [rbp+20h] BYREF

  if ( a3 )
  {
    v12 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v15 = 0LL;
    SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                               a2,
                               &v15);
    v7 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v8 = 785LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)SyncedWindowDataByHwnd);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
      return v7;
    }
    v9 = v15;
    if ( v15 )
    {
      v10 = (CTopLevelWindow *)*((_QWORD *)v15 + 49);
      if ( v10 )
      {
        if ( (*((_DWORD *)v15 + 25) & 0x20000000) != 0 )
        {
          SyncedWindowDataByHwnd = CProjectionBorderManager::_PauseOrResumeWindowCapture(this, a3, 0);
          v7 = SyncedWindowDataByHwnd;
          if ( SyncedWindowDataByHwnd < 0 )
          {
            v8 = 790LL;
            goto LABEL_12;
          }
          v10 = (CTopLevelWindow *)*((_QWORD *)v9 + 49);
        }
        CTopLevelWindow::GetOutsideMargins(v10, &v13);
        SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 54) + 1256LL))(
                                   *((_QWORD *)this + 54),
                                   a3);
        v7 = SyncedWindowDataByHwnd;
        if ( SyncedWindowDataByHwnd < 0 )
        {
          v8 = 801LL;
          goto LABEL_12;
        }
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  }
  return 0LL;
}
