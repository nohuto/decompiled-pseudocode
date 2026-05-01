/*
 * XREFs of ?IsGestureActive@MultitaskingViewGestureState@@UEAAHXZ @ 0x180364A20
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x180084F74 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 */

_BOOL8 __fastcall MultitaskingViewGestureState::IsGestureActive(RTL_SRWLOCK *this)
{
  BOOL v2; // ebx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 7, &SRWLock);
  v2 = (unsigned int)(LODWORD(this[8].Ptr) - 1) <= 1;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v2;
}
