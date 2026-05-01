/*
 * XREFs of _LockScreenDirectorServiceProviderImpl::GetLockScreenDirector_::_1_::dtor$1 @ 0x180191764
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LockScreenDirectorServiceProviderImpl::GetLockScreenDirector_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)(a2 + 40));
}
