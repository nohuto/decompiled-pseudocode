/*
 * XREFs of ?CanSendPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEBA_NXZ @ 0x180125150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::CanSendPoses(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this)
{
  char v2; // di
  RTL_SRWLOCK *v4; // rcx
  char v5; // bl

  v2 = 0;
  if ( *((_BYTE *)this + 104) )
    return 0;
  if ( *((_BYTE *)this + 456) && *((_BYTE *)this + 457) )
    return 1;
  v4 = (RTL_SRWLOCK *)(((unsigned __int64)this + 80) & -(__int64)(TryAcquireSRWLockShared((PSRWLOCK)this + 10) != 0));
  if ( !v4 || (v5 = 1, !*((_QWORD *)this + 11)) )
    v5 = 0;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  if ( v5 )
    return 1;
  return v2;
}
