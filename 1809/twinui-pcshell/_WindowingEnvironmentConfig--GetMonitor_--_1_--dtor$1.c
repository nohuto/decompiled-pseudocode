/*
 * XREFs of _WindowingEnvironmentConfig::GetMonitor_::_1_::dtor$1 @ 0x18025823D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowingEnvironmentConfig::GetMonitor_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWSharedLock::~CAutoSRWSharedLock((RTL_SRWLOCK **)(a2 + 80));
}
