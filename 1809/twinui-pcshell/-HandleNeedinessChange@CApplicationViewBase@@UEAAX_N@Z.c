/*
 * XREFs of ?HandleNeedinessChange@CApplicationViewBase@@UEAAX_N@Z @ 0x180134DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000EC50 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 */

void __fastcall CApplicationViewBase::HandleNeedinessChange(RTL_SRWLOCK *this, char a2)
{
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v4, this + 4);
  LOBYTE(this[14].Ptr) = a2;
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v4);
}
