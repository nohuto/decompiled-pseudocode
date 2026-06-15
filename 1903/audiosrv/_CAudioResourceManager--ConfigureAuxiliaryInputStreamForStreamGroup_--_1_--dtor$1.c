/*
 * XREFs of _CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup_::_1_::dtor$1 @ 0x1800F6386
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>::~com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>((volatile signed __int32 **)(a2 + 40));
}
