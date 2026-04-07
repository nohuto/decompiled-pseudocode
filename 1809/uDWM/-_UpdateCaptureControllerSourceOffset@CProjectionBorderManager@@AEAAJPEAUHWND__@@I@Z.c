/*
 * XREFs of ?_UpdateCaptureControllerSourceOffset@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z @ 0x180083910
 * Callers:
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@IAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180082A14 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual.c)
 * Callees:
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800116A8 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateCaptureControllerSourceOffset(
        CProjectionBorderManager *this,
        HWND a2,
        unsigned int a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  struct _RTL_CRITICAL_SECTION *v10[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CWindowData *v12; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 )
  {
    v10[0] = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v12 = 0LL;
    SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                               a2,
                               &v12);
    v7 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v8 = 834LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)SyncedWindowDataByHwnd);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(v10);
      return v7;
    }
    if ( v12 )
    {
      if ( *((_QWORD *)v12 + 49) )
      {
        SyncedWindowDataByHwnd = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 54) + 1248LL))(
                                   *((_QWORD *)this + 54),
                                   a3);
        v7 = SyncedWindowDataByHwnd;
        if ( SyncedWindowDataByHwnd < 0 )
        {
          v8 = 838LL;
          goto LABEL_8;
        }
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(v10);
  }
  return 0LL;
}
