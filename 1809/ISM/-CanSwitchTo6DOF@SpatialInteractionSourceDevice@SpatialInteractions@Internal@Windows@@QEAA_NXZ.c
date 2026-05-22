/*
 * XREFs of ?CanSwitchTo6DOF@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA_NXZ @ 0x1800AA518
 * Callers:
 *     ?OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800B1490 (-OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 *     std::_Func_impl_no_alloc__lambda_908627fe01edce7427e4f315127fd81c__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800B79A0 (std--_Func_impl_no_alloc__lambda_908627fe01edce7427e4f315127fd81c__void_std--shared_ea_1800B79A0.c)
 * Callees:
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800AA4A4 (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

char __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::CanSwitchTo6DOF(
        RTL_SRWLOCK *this)
{
  char v2; // di
  RTL_SRWLOCK *v3; // rcx
  bool v4; // bl
  _BYTE v6[24]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 1;
  v3 = (RTL_SRWLOCK *)((unsigned __int64)&this[10] & -(__int64)(TryAcquireSRWLockShared(this + 10) != 0));
  v4 = v3 && this[11].Ptr;
  if ( v3 )
    ReleaseSRWLockShared(v3);
  if ( v4
    || !Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(
          (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *)this,
          (struct Windows::Internal::Holographic::DynamicNodeInfo *)v6) )
  {
    return 0;
  }
  return v2;
}
