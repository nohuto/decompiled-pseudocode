/*
 * XREFs of ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x1800898D4
 * Callers:
 *     ?StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180088750 (-StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800888D0 (-StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180088A40 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@IAEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800892F8 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@IAEBUDWM_CAPTURE_TOKEN@@.c)
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@IAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180089784 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual.c)
 * Callees:
 *     <none>
 */

void __fastcall CProjectionBorderManager::_EnsureCursorStateForCapture(CProjectionBorderManager *this)
{
  if ( RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)this + 7) && RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)this + 6) )
  {
    if ( *((_BYTE *)this + 576) )
    {
      EnableSoftwareCursorForScreenCapture(0LL);
      *((_BYTE *)this + 576) = 0;
    }
  }
  else if ( !*((_BYTE *)this + 576) )
  {
    EnableSoftwareCursorForScreenCapture(1LL);
    *((_BYTE *)this + 576) = 1;
  }
}
