/*
 * XREFs of ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x1801431D4
 * Callers:
 *     ?Destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800EB61C (-Destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x18007AB80 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800864F8 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18008785C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1801434B0 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180144D98 (-WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

struct _TP_TIMER **__fastcall wil::details::EnabledStateManager::`scalar deleting destructor'(struct _TP_TIMER **this)
{
  __int64 v2; // rdx
  void (*v3)(unsigned int, unsigned int, unsigned int, const char *); // r8
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v4; // rdx
  wil::details *v5; // rcx
  wil::details *v6; // rcx
  wil::details *v7; // rcx
  wil::details *v8; // rcx
  struct _TP_TIMER *v9; // rcx

  *(_BYTE *)this = 0;
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 2,
    0LL);
  *(_BYTE *)this = 0;
  wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)this, v2, v3);
  v5 = this[13];
  if ( v5 )
    wil::details::FreeProcessHeap(v5, v4);
  v6 = this[9];
  if ( v6 )
    wil::details::FreeProcessHeap(v6, v4);
  v7 = this[5];
  if ( v7 )
    wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(v7, v4);
  v8 = this[4];
  if ( v8 )
    wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(v8, v4);
  v9 = this[2];
  if ( v9 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v9);
  return this;
}
