/*
 * XREFs of _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$19 @ 0x1800F7E6C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor_19(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>::~com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>((volatile signed __int32 **)(a2 + 296));
}
