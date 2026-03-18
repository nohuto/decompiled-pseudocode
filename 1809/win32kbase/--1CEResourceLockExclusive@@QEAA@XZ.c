/*
 * XREFs of ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4
 * Callers:
 *     UnInitializeInputComponents @ 0x1C0005BB4 (UnInitializeInputComponents.c)
 *     ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C003C484 (-FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C003C578 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C003C778 (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C003CB48 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C003CBB8 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C003CE70 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     ?RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C003CECC (-RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@.c)
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C003CF84 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 *     ?GetUnionRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C003D2D0 (-GetUnionRect@Mouse@InputConfig@@SA-AUtagRECT@@XZ.c)
 *     ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1C003D314 (-GetInputSpaceId@Mouse@InputConfig@@SA-AU_LUID@@XZ.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C003D56C (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z.c)
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00412CC (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0112364 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0113298 (RIMSetDeviceOutputConfig.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1C0113408 (RIMSetPointerDeviceInputSpace.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C01533C8 (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C015341C (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C01534CC (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 *     ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x1C0153548 (-GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z.c)
 *     ?GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C01535E8 (-GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLocked.c)
 *     ?GetPrimaryRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C0153778 (-GetPrimaryRect@Mouse@InputConfig@@SA-AUtagRECT@@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CEResourceLockExclusive::~CEResourceLockExclusive(PERESOURCE **this)
{
  ExReleaseResourceLite(**this);
  KeLeaveCriticalRegion();
}
