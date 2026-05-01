/*
 * XREFs of ??1?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAA@XZ @ 0x1801E3D58
 * Callers:
 *     _KioskPositioner::GetUserSidString_::_1_::dtor$3 @ 0x1800AD304 (_KioskPositioner--GetUserSidString_--_1_--dtor$3.c)
 *     _KioskPositioner::GetUserSidString_::_1_::dtor$0 @ 0x1800AD32A (_KioskPositioner--GetUserSidString_--_1_--dtor$0.c)
 *     _wil::details::GetTokenInfoWrap__TOKEN_USER_wil::err_exception_policy_0__::_1_::dtor$0 @ 0x1801E0917 (_wil--details--GetTokenInfoWrap__TOKEN_USER_wil--err_exception_policy_0__--_1_--dtor$0.c)
 *     _CortanaStoreAppHelper::ApplyDeviceCapabilitiesToStoreAppOnReplace_::_1_::dtor$2 @ 0x1801E517A (_CortanaStoreAppHelper--ApplyDeviceCapabilitiesToStoreAppOnReplace_--_1_--dtor$2.c)
 *     _CortanaStoreAppHelper::RevokeDeviceCapabilitiesFromSystemAppOnReplace_::_1_::dtor$2 @ 0x1801E7268 (_CortanaStoreAppHelper--RevokeDeviceCapabilitiesFromSystemAppOnReplace_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::~unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>(
        __int64 a1)
{
  return wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::reset(a1, 0LL);
}
