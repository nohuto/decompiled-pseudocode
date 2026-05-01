/*
 * XREFs of _CImmersiveApp::AppendChainLink_::_1_::dtor$1 @ 0x180142A06
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::AppendChainLink_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 40));
}
