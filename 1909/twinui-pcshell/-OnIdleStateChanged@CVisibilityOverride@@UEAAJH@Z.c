/*
 * XREFs of ?OnIdleStateChanged@CVisibilityOverride@@UEAAJH@Z @ 0x180141F90
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004FD9C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_ProcessOverride@CVisibilityOverride@@AEAAXXZ @ 0x1801420FC (-_ProcessOverride@CVisibilityOverride@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVisibilityOverride::OnIdleStateChanged(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v5; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v5, this + 5);
  BYTE1(this[7].Ptr) = a2 != 0;
  CVisibilityOverride::_ProcessOverride((CVisibilityOverride *)&this[-4]);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v5);
  return 0LL;
}
