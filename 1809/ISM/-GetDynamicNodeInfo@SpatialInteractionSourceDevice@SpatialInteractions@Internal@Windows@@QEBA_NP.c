/*
 * XREFs of ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800AA4A4
 * Callers:
 *     ?CanSwitchTo6DOF@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA_NXZ @ 0x1800AA518 (-CanSwitchTo6DOF@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA_NXZ.c)
 *     ?OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800B1490 (-OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 *     ?StartTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800BB390 (-StartTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUISp.c)
 *     ?StopTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJW4StopTrackingReason@234@PEAUISpatialLocatorStaticsInternal@3Spatial@Perception@4@@Z @ 0x1800BB620 (-StopTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJW4StopTr.c)
 *     ?FillDeviceInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEAUMPCControllerDeviceInfo@@@Z @ 0x1800BD8E0 (-FillDeviceInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEAUMPCC.c)
 *     ?AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_JPEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2_N33@Z @ 0x1800BDF98 (-AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_JPEAUISpatia.c)
 *     ?GenerateHandLostInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAXPEAUHandInputInfo@1234@@Z @ 0x1800BEBB8 (-GenerateHandLostInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IE.c)
 *     ?EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@PEAK@Z @ 0x180127588 (-EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Wind.c)
 *     ?StopTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJW4StopTrackingReason@234@PEAUISpatialLocatorStaticsInternal@3Spatial@Perception@4@@Z @ 0x180127890 (-StopTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJW4St.c)
 *     ?FillDeviceInfo@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEAUMPCControllerDeviceInfo@@@Z @ 0x180127E50 (-FillDeviceInfo@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPE.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *this,
        struct Windows::Internal::Holographic::DynamicNodeInfo *a2)
{
  RTL_SRWLOCK *v2; // rsi
  bool v5; // bl

  v2 = (RTL_SRWLOCK *)((char *)this + 48);
  AcquireSRWLockShared((PSRWLOCK)this + 6);
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 56);
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 18);
  v5 = RtlCompareMemory(
         a2,
         &`Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo'::`2'::noNodeId,
         0x10uLL) != 16;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v5;
}
