/*
 * XREFs of ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C003CE70
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C003CB48 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C003CBB8 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C003D56C (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z.c)
 * Callees:
 *     ?RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C003CECC (-RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C003CF5C (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4 (--1CEResourceLockExclusive@@QEAA@XZ.c)
 */

bool __fastcall InputConfig::Mouse::RegionFromPoint(struct tagPOINT a1, struct CLockedInputSpaceRegion *a2)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v6[16]; // [rsp+28h] [rbp-10h] BYREF

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)&v5);
  v5 = *((_QWORD *)gpInputConfig + 3);
  LOBYTE(a1.x) = InputConfig::RegionFromPoint((const struct CLockedInputSpace *)&v5, a1, a2);
  CEResourceLockExclusive::~CEResourceLockExclusive((CEResourceLockExclusive *)v6);
  return a1.x;
}
