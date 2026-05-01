/*
 * XREFs of ?QueryInterface@TrayInfoTipAppInfoProvider@SystemTray@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemTray::TrayInfoTipAppInfoProvider::QueryInterface(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::QueryInterface(a1 - 8);
}
