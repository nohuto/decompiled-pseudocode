/*
 * XREFs of _ViewWrapperBase::EnableInput_::_1_::dtor$0 @ 0x1802417BE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewWrapperBase::EnableInput_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)(a2 + 64));
}
