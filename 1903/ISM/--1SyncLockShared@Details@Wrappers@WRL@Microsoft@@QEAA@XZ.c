/*
 * XREFs of ??1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800E0D80
 * Callers:
 *     __lambda_a95b93df32bd5c2434c79e330695bd51_::operator()_::_1_::dtor$0 @ 0x1800EB52F (__lambda_a95b93df32bd5c2434c79e330695bd51_--operator()_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::TryUpdatePose_::_1_::dtor$0 @ 0x1801690AA (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--TryUpdatePose_--_1_.c)
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
