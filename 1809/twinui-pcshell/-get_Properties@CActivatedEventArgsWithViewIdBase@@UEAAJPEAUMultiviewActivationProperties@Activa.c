/*
 * XREFs of ?get_Properties@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUMultiviewActivationProperties@Activation@ApplicationModel@Windows@@@Z @ 0x1803BF510
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 */

__int64 __fastcall CActivatedEventArgsWithViewIdBase::get_Properties(
        CActivatedEventArgsWithViewIdBase *this,
        struct Windows::ApplicationModel::Activation::MultiviewActivationProperties *a2)
{
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)this + 5, &v5);
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 24);
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&v5);
  return 0LL;
}
