/*
 * XREFs of ?GetIsTabbed@CApplicationViewBase@@UEAAJPEAH@Z @ 0x180134CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000EC50 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 */

__int64 __fastcall CApplicationViewBase::GetIsTabbed(RTL_SRWLOCK *this, int *a2)
{
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v5, this + 6);
  *a2 = LOBYTE(this[17].Ptr);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v5);
  return 0LL;
}
