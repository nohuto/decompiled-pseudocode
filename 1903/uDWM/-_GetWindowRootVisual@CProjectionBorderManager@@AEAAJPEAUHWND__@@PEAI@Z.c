/*
 * XREFs of ?_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAI@Z @ 0x180089DCC
 * Callers:
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAIPEAPEAVCapturedWindowSWRVisual@@@Z @ 0x180089C44 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAIPEAPEAVCapturedWindow.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18001606C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCanvasRootCompositionNodeHandle@CTopLevelWindow@@QEAAIXZ @ 0x18008D3BC (-GetCanvasRootCompositionNodeHandle@CTopLevelWindow@@QEAAIXZ.c)
 */

__int64 __fastcall CProjectionBorderManager::_GetWindowRootVisual(
        CProjectionBorderManager *this,
        HWND a2,
        unsigned int *a3)
{
  CDesktopManager *v5; // rax
  int SyncedWindowDataByHwnd; // eax
  unsigned int v7; // ebx
  CTopLevelWindow *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CWindowData *v11; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+18h] BYREF

  v11 = this;
  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = CDesktopManager::s_pDesktopManagerInstance;
  *a3 = 0;
  v11 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(*((CWindowList **)v5 + 61), a2, &v11);
  v7 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    if ( v11 )
    {
      v8 = (CTopLevelWindow *)*((_QWORD *)v11 + 50);
      if ( v8 )
        *a3 = CTopLevelWindow::GetCanvasRootCompositionNodeHandle(v8);
    }
    if ( *a3 )
      v7 = 0;
    else
      v7 = -2147024890;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31A,
      (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)SyncedWindowDataByHwnd);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v7;
}
