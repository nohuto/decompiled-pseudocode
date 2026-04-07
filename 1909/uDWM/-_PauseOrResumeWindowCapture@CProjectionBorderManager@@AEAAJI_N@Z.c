/*
 * XREFs of ?_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJI_N@Z @ 0x180089B20
 * Callers:
 *     ?UpdateCaptureControllerCaptureState@CProjectionBorderManager@@UEAAJPEAUHWND__@@_N@Z @ 0x180088870 (-UpdateCaptureControllerCaptureState@CProjectionBorderManager@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z @ 0x180089E80 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_PauseOrResumeWindowCapture(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        char a3)
{
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = this;
  if ( a2 )
  {
    v10 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    LOBYTE(v5) = a3;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                            + 5)
                                                                          + 16LL)
                                                            + 1152LL))(
           *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
           a2,
           v5);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3AD,
        (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v6);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
      return v7;
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  }
  return 0LL;
}
