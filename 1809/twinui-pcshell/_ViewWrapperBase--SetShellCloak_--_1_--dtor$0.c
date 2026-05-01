/*
 * XREFs of _ViewWrapperBase::SetShellCloak_::_1_::dtor$0 @ 0x1802444B6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewWrapperBase::SetShellCloak_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)(a2 + 64));
}
