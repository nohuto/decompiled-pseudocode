/*
 * XREFs of _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$12 @ 0x1800EC21A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>::~com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>(a2 + 208);
}
