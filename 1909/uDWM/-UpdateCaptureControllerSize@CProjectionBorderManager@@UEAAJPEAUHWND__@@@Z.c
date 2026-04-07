/*
 * XREFs of ?UpdateCaptureControllerSize@CProjectionBorderManager@@UEAAJPEAUHWND__@@@Z @ 0x180088900
 * Callers:
 *     <none>
 * Callees:
 *     ??$UpdateCaptureControllerSize@AEAPEAUHWND__@@@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@@Z @ 0x180085584 (--$UpdateCaptureControllerSize@AEAPEAUHWND__@@@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::UpdateCaptureControllerSize(CProjectionBorderManager *this, __int64 a2)
{
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  WindowFrameLoggingTelemetry::UpdateCaptureControllerSize<HWND__ * &>(&v5);
  return CProjectionBorderManager::_UpdateCaptureControllerProperty(
           this,
           CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow,
           a2);
}
