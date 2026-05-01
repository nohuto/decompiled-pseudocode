/*
 * XREFs of ?SetIsTabbed@CApplicationViewBase@@UEAAJH@Z @ 0x18017E140
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004FD9C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 */

__int64 __fastcall CApplicationViewBase::SetIsTabbed(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v5, this + 6);
  LOBYTE(this[17].Ptr) = a2 != 0;
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v5);
  return 0LL;
}
