/*
 * XREFs of ??0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z @ 0x1C00AD190
 * Callers:
 *     ?_FindDefaultInputSpace@CInputConfig@@AEAAXXZ @ 0x1C003C2C8 (-_FindDefaultInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C003C484 (-FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C003C578 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C003C778 (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     ?RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C003CECC (-RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C003CF5C (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C003CF84 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 *     ?InputSpaceIterator@CInputConfig@@QEAA?AVIter@1@XZ @ 0x1C00AD83C (-InputSpaceIterator@CInputConfig@@QEAA-AVIter@1@XZ.c)
 *     ?RegionIterator@CInputSpace@@QEBA?AVIter@1@XZ @ 0x1C00AD880 (-RegionIterator@CInputSpace@@QEBA-AVIter@1@XZ.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C015341C (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x1C0153548 (-GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z.c)
 *     ?GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C01535E8 (-GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLocked.c)
 * Callees:
 *     <none>
 */

CEResourceLockShared *__fastcall CEResourceLockShared::CEResourceLockShared(
        CEResourceLockShared *this,
        struct CEResource *a2)
{
  *(_QWORD *)this = &CInputConfig::slock;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  return this;
}
