/*
 * XREFs of ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0052990
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00524BC (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C0052528 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C0052BF4 (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCMouseEvent@1@AEBUtagPOINT@@II_K@Z @ 0x1C018F154 (-ForwardInputToISM@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCMouseEvent@1@AEBUtagPOINT@@II_K@Z.c)
 * Callees:
 *     ?RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0052A00 (-RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C0052E30 (--0CLockedInputSpace@@QEAA@XZ.c)
 */

bool __fastcall InputConfig::Mouse::RegionFromPoint(struct tagPOINT a1, struct CLockedInputSpaceRegion *a2)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v5);
  v5[0] = *((_QWORD *)gpInputConfig + 3);
  LOBYTE(a1.x) = InputConfig::RegionFromPoint((const struct CLockedInputSpace *)v5, a1, a2);
  ExReleaseResourceLite(*(PERESOURCE *)v5[1]);
  KeLeaveCriticalRegion();
  return a1.x;
}
