/*
 * XREFs of ??1?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAA@XZ @ 0x1801C4D38
 * Callers:
 *     _wil::details::GetTokenInfoWrap__TOKEN_USER_wil::err_exception_policy_0__::_1_::dtor$0 @ 0x1801C18F7 (_wil--details--GetTokenInfoWrap__TOKEN_USER_wil--err_exception_policy_0__--_1_--dtor$0.c)
 *     _CortanaStoreAppHelper::ApplyDeviceCapabilitiesToStoreAppOnReplace_::_1_::dtor$2 @ 0x1801C6158 (_CortanaStoreAppHelper--ApplyDeviceCapabilitiesToStoreAppOnReplace_--_1_--dtor$2.c)
 *     _CortanaStoreAppHelper::RevokeDeviceCapabilitiesFromSystemAppOnReplace_::_1_::dtor$2 @ 0x1801C8246 (_CortanaStoreAppHelper--RevokeDeviceCapabilitiesFromSystemAppOnReplace_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::~unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>(
        __int64 a1)
{
  return wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::reset(a1, 0LL);
}
