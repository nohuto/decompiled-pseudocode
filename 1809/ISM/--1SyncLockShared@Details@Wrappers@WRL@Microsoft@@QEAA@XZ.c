/*
 * XREFs of ??1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800AA120
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::TryUpdatePose_::_1_::dtor$0 @ 0x1801368FD (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--TryUpdatePose_--_1_.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockShared::~SyncLockShared(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ReleaseSRWLockShared(v2);
    *this = 0LL;
  }
}
