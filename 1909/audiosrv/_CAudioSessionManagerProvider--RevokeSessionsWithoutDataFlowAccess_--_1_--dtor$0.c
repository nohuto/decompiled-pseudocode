/*
 * XREFs of _CAudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess_::_1_::dtor$0 @ 0x1800D9026
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return std::vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::_Tidy((_QWORD *)(a2 + 56));
}
