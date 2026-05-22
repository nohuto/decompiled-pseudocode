/*
 * XREFs of ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800E0B1C
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueInputThreadCallback_::_1_::dtor$1 @ 0x1800E421A (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E421A.c)
 *     __lambda_88fb4871a400503c69c7f747a4c77519_::operator()_::_1_::dtor$0 @ 0x1800EB0F5 (__lambda_88fb4871a400503c69c7f747a4c77519_--operator()_--_1_--dtor$0.c)
 *     __lambda_f7bf13e3725ed8e2d2abfc7e94bc16a5_::operator()_::_1_::dtor$1 @ 0x1800EB499 (__lambda_f7bf13e3725ed8e2d2abfc7e94bc16a5_--operator()_--_1_--dtor$1.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::RemoveAllObjects_::_1_::dtor$1 @ 0x1800ED0C0 (_Windows--Internal--SpatialInteractions--SpatialInteractionObjectDevice--RemoveAllO_ea_1800ED0C0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveSpatialObjectDevice_::_1_::dtor$1 @ 0x1800ED3B4 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800ED3B4.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SetDynamicNodeInfo_::_1_::dtor$0 @ 0x1800ED651 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDevice--SetDynamicNodeInfo_--_1.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::OnHandSpatialObjectAdded_::_1_::dtor$4 @ 0x1800F5730 (_Windows--Internal--SpatialInteractions--SpatialInteractionHandObjectDevice--OnHand_ea_1800F5730.c)
 *     _Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_::_Create_Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory__::_1_::dtor$3 @ 0x18014C028 (_Microsoft--WRL--Singleton_Windows--Internal--Holographic--SpatialGraphNodeReferenc_ea_18014C028.c)
 *     _Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::UnregisterCallback_::_1_::dtor$0 @ 0x1801691A8 (_Windows--Internal--SpatialInteractions--NodePropertyChangedHandler--UnregisterCallback_--_1_--d.c)
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
