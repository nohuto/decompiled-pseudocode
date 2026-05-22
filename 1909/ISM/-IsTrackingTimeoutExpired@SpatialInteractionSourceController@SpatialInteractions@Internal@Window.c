/*
 * XREFs of ?IsTrackingTimeoutExpired@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAA_NXZ @ 0x1801665B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::IsTrackingTimeoutExpired(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  char Ptr; // bl

  v1 = this + 75;
  AcquireSRWLockShared(this + 75);
  Ptr = (char)this[74].Ptr;
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return Ptr == 0;
}
