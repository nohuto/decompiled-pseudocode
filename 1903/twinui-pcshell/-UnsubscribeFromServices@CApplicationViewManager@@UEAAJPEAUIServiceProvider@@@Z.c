/*
 * XREFs of ?UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180157950
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180109598 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180109EEC (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?Shutdown@NotificationDispatcher@@QEAAXXZ @ 0x180159618 (-Shutdown@NotificationDispatcher@@QEAAXXZ.c)
 */

__int64 __fastcall CApplicationViewManager::UnsubscribeFromServices(
        CApplicationViewManager *this,
        struct IServiceProvider *a2)
{
  NotificationDispatcher *v3; // rcx
  __int64 v4; // rcx

  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
    (Concurrency::details::_RefCounter **)this + 82,
    0LL);
  v3 = (NotificationDispatcher *)*((_QWORD *)this + 92);
  if ( v3 )
    NotificationDispatcher::Shutdown(v3);
  v4 = *((_QWORD *)this + 91);
  if ( v4 )
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v4 + 48LL))(
      v4,
      ((unsigned __int64)this + 104) & -(__int64)(this != (CApplicationViewManager *)72));
  SmartCookie::Unregister((CApplicationViewManager *)((char *)this + 472));
  SmartCookie::Unregister((CApplicationViewManager *)((char *)this + 216));
  SmartCookie::Unregister((CApplicationViewManager *)((char *)this + 344));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 84);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 85);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 90);
  return 0LL;
}
