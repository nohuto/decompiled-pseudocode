/*
 * XREFs of ??0CLockedInputSpace@@QEAA@XZ @ 0x1C00676A0
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C0066D2C (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C0066D98 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0067200 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C0067464 (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z.c)
 *     ?GetUnionRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C00675F8 (-GetUnionRect@Mouse@InputConfig@@SA-AUtagRECT@@XZ.c)
 *     ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1C0067650 (-GetInputSpaceId@Mouse@InputConfig@@SA-AU_LUID@@XZ.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0145AB4 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMSetDeviceOutputConfig @ 0x1C014674C (RIMSetDeviceOutputConfig.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1C01468E0 (RIMSetPointerDeviceInputSpace.c)
 *     ?GetPrimaryRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C0188138 (-GetPrimaryRect@Mouse@InputConfig@@SA-AUtagRECT@@XZ.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCMouseEvent@1@AEBUtagPOINT@@II_K@Z @ 0x1C0191344 (-ForwardInputToISM@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCMouseEvent@1@AEBUtagPOINT@@II_K@Z.c)
 * Callees:
 *     <none>
 */

CLockedInputSpace *__fastcall CLockedInputSpace::CLockedInputSpace(CLockedInputSpace *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = &CInputConfig::slock;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  return this;
}
