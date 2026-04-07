/*
 * XREFs of ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z @ 0x18008A1E0
 * Callers:
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180089110 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@IAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180089784 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18001606C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18001EDD0 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJI_N@Z @ 0x180089E80 (-_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJI_N@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow(
        CProjectionBorderManager *this,
        HWND a2,
        unsigned int a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct CWindowData *v8; // rdi
  struct _RTL_CRITICAL_SECTION *v9; // rcx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp-28h] BYREF
  struct _MARGINS v12; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct CWindowData *v14; // [rsp+78h] [rbp+20h] BYREF

  if ( a3 )
  {
    v11 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v14 = 0LL;
    SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                               a2,
                               &v14);
    v6 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v7 = 875LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)SyncedWindowDataByHwnd);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
      return v6;
    }
    v8 = v14;
    if ( v14 )
    {
      v9 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v14 + 50);
      if ( v9 )
      {
        if ( (*((_DWORD *)v14 + 25) & 0x20000000) != 0 )
        {
          SyncedWindowDataByHwnd = CProjectionBorderManager::_PauseOrResumeWindowCapture(v9, a3, 0);
          v6 = SyncedWindowDataByHwnd;
          if ( SyncedWindowDataByHwnd < 0 )
          {
            v7 = 880LL;
            goto LABEL_12;
          }
          v9 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v8 + 50);
        }
        CTopLevelWindow::GetOutsideMargins((CTopLevelWindow *)v9, &v12);
        SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                           + 5)
                                                                                         + 16LL)
                                                                           + 1168LL))(
                                   *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
                                   a3);
        v6 = SyncedWindowDataByHwnd;
        if ( SyncedWindowDataByHwnd < 0 )
        {
          v7 = 891LL;
          goto LABEL_12;
        }
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  }
  return 0LL;
}
