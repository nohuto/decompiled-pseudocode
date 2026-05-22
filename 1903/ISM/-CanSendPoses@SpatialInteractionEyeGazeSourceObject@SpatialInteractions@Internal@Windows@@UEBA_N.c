/*
 * XREFs of ?CanSendPoses@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEBA_NXZ @ 0x1800F09C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
bool __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::CanSendPoses(
        RTL_SRWLOCK *this)
{
  return Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::HasDynamicNode(this);
}
