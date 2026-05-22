/*
 * XREFs of ?OnDeviceRemoved@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800ECA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::OnDeviceRemoved(
        Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice *this)
{
  return Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::RemoveAllObjects(this);
}
