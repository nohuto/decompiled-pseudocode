/*
 * XREFs of ?UnsubscribeFromServices@HolographicViewHostItemLedger@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801BA9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall HolographicViewHostItemLedger::UnsubscribeFromServices(
        HolographicViewHostItemLedger *this,
        struct IServiceProvider *a2)
{
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 17);
  return 0LL;
}
