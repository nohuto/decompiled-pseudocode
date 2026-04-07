/*
 * XREFs of ?UpdateCaptureControllerCaptureState@CProjectionBorderManager@@UEAAJPEAUHWND__@@_N@Z @ 0x180088870
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@AEA_N@Z @ 0x1800854B0 (--$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAP.c)
 *     ?_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJI_N@Z @ 0x180089B20 (-_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJI_N@Z.c)
 */

int __fastcall CProjectionBorderManager::UpdateCaptureControllerCaptureState(
        struct _RTL_GENERIC_TABLE *this,
        HWND a2,
        bool a3)
{
  unsigned int v5; // edi
  HWND *v6; // rax
  CProjectionBorderManager *v7; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF
  PVOID RestartKey; // [rsp+48h] [rbp+10h] BYREF
  bool v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  RestartKey = a2;
  WindowFrameLoggingTelemetry::UpdateCaptureControllerCaptureState<HWND__ * &,bool &>(
    (__int64 *)&RestartKey,
    (__int64)&v11);
  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = 0;
  RestartKey = 0LL;
  while ( 1 )
  {
    v6 = (HWND *)RtlEnumerateGenericTableWithoutSplaying(this + 6, &RestartKey);
    if ( !v6 )
      break;
    if ( v6[2] == a2 )
    {
      v5 = *((_DWORD *)v6 + 2);
      break;
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return CProjectionBorderManager::_PauseOrResumeWindowCapture(v7, v5, v11);
}
