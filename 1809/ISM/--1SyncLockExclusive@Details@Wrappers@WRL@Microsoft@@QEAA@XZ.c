/*
 * XREFs of ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800AA0F8
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::OnHandSpatialObjectAdded_::_1_::dtor$4 @ 0x180133565 (_Windows--Internal--SpatialInteractions--SpatialInteractionHandObjectDevice--OnHand_ea_180133565.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveSpatialObjectDevice_::_1_::dtor$1 @ 0x180133589 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--RemoveSpatial.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueInputThreadCallback_::_1_::dtor$1 @ 0x1801335F8 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1801335F8.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::StartTracking_::_1_::dtor$3 @ 0x1801339BE (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceObject--StartTrack_ea_1801339BE.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::OnDeviceRemoved_::_1_::dtor$1 @ 0x1801339F2 (_Windows--Internal--SpatialInteractions--SpatialInteractionObjectDevice--OnDeviceRemoved_--_1_--.c)
 *     _Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::_Create_Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory__::_1_::dtor$3 @ 0x1801361C7 (_Microsoft--WRL--Singleton_Windows--Internal--Holographic--SpatialGraphNodeReferenc_ea_1801361C7.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EnsureDynamicNodeForDevice_::_1_::dtor$2 @ 0x180136933 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--Ensure_ea_180136933.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandlerUnderLock_::_1_::dtor$0 @ 0x180136969 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--Releas_ea_180136969.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ReleaseSRWLockExclusive(v2);
    *this = 0LL;
  }
}
