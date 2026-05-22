/*
 * XREFs of ?reset@?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXXZ @ 0x1800F28C0
 * Callers:
 *     ?OnDeviceRemoved@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800F1070 (-OnDeviceRemoved@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEA.c)
 *     ?StopListeningToSpatialObjects@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800F1E50 (-StopListeningToSpatialObjects@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Interna.c)
 *     ??1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ @ 0x180151D20 (--1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x180152030 (--1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     ?CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x180153EB0 (-CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windo.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::reset(_QWORD *a1)
{
  std::_Ref_count_base *v1; // rax

  *a1 = 0LL;
  v1 = (std::_Ref_count_base *)a1[1];
  a1[1] = 0LL;
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
