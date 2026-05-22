/*
 * XREFs of ?CheckHandleStatus@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJXZ @ 0x180153738
 * Callers:
 *     ?CheckHandleStatus@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ @ 0x180153780 (-CheckHandleStatus@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ.c)
 *     ?CheckHandleStatus@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJXZ @ 0x1801537D0 (-CheckHandleStatus@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJXZ.c)
 *     ?CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x180153EB0 (-CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windo.c)
 *     ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x180154B58 (-DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::CheckHandleStatus(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  unsigned int Ptr; // ebx

  v1 = this + 15;
  AcquireSRWLockShared(this + 15);
  Ptr = (unsigned int)this[16].Ptr;
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return Ptr;
}
