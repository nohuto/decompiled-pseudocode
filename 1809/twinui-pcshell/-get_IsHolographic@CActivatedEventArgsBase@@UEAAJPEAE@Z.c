/*
 * XREFs of ?get_IsHolographic@CActivatedEventArgsBase@@UEAAJPEAE@Z @ 0x1803BF450
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 */

__int64 __fastcall CActivatedEventArgsBase::get_IsHolographic(RTL_SRWLOCK *this, unsigned __int8 *a2)
{
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 12, &v5);
  *a2 = (unsigned __int8)this[11].Ptr;
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&v5);
  return 0LL;
}
