/*
 * XREFs of ?CanSendPoses@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEBA_NXZ @ 0x1800BD890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::CanSendPoses(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rcx
  bool v3; // bl

  v2 = (RTL_SRWLOCK *)((unsigned __int64)&this[10] & -(__int64)(TryAcquireSRWLockShared(this + 10) != 0));
  v3 = v2 && this[11].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v3;
}
