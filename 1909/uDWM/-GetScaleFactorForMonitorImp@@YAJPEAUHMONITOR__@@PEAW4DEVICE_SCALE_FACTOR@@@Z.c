/*
 * XREFs of ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x18000A428
 * Callers:
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180009AE0 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z @ 0x18000DA50 (-IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800108FC (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800B1748 (-_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ @ 0x1800B19A4 (-EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ.c)
 * Callees:
 *     ??0CImmersiveOrPrimaryMonitor@@QEAA@PEAUHMONITOR__@@@Z @ 0x18000A470 (--0CImmersiveOrPrimaryMonitor@@QEAA@PEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 */

__int64 __fastcall GetScaleFactorForMonitorImp(HMONITOR a1, enum DEVICE_SCALE_FACTOR *a2)
{
  CImmersiveOrPrimaryMonitor *v3; // rax
  _BYTE v5[40]; // [rsp+20h] [rbp-38h] BYREF

  v3 = CImmersiveOrPrimaryMonitor::CImmersiveOrPrimaryMonitor((CImmersiveOrPrimaryMonitor *)v5, a1);
  *a2 = *(enum DEVICE_SCALE_FACTOR *)v3;
  return *((unsigned int *)v3 + 9);
}
