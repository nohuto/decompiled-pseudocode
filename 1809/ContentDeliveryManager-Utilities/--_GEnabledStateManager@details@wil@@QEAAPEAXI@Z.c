/*
 * XREFs of ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x180013BF4
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x1800D1870 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800098AC (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800130F4 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

struct _TP_TIMER **__fastcall wil::details::EnabledStateManager::`scalar deleting destructor'(struct _TP_TIMER **this)
{
  struct _TP_TIMER *v2; // rdi
  HANDLE ProcessHeap; // rax
  struct _TP_TIMER *v4; // rdi
  HANDLE v5; // rax
  struct _TP_TIMER *v6; // rcx
  void (*v7)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *); // rdx
  void (*v8)(void); // rax
  struct _TP_TIMER *v9; // rdi

  *(_BYTE *)this = 0;
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 2,
    0LL);
  *(_BYTE *)this = 0;
  wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)this);
  v2 = this[13];
  if ( v2 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v2);
  }
  v4 = this[9];
  if ( v4 )
  {
    v5 = GetProcessHeap();
    HeapFree(v5, 0, v4);
  }
  v6 = this[5];
  v7 = g_wil_details_internalUnsubscribeFeatureStateChangeNotification;
  if ( v6 )
  {
    if ( g_wil_details_internalUnsubscribeFeatureStateChangeNotification )
    {
      ((void (__fastcall *)(struct _TP_TIMER *, void (*)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)))g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(
        v6,
        g_wil_details_internalUnsubscribeFeatureStateChangeNotification);
    }
    else
    {
      v8 = (void (*)(void))g_wil_details_apiUnsubscribeFeatureStateChangeNotification;
      if ( !g_wil_details_apiUnsubscribeFeatureStateChangeNotification )
        goto LABEL_12;
      ((void (__fastcall *)(struct _TP_TIMER *, _QWORD))g_wil_details_apiUnsubscribeFeatureStateChangeNotification)(
        v6,
        0LL);
    }
    v7 = g_wil_details_internalUnsubscribeFeatureStateChangeNotification;
  }
  v8 = (void (*)(void))g_wil_details_apiUnsubscribeFeatureStateChangeNotification;
LABEL_12:
  if ( !this[4] )
    goto LABEL_17;
  if ( v7 )
  {
    v8 = (void (*)(void))v7;
  }
  else if ( !v8 )
  {
    goto LABEL_17;
  }
  v8();
LABEL_17:
  v9 = this[2];
  if ( v9 )
  {
    SetThreadpoolTimer(this[2], 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v9, 1);
    CloseThreadpoolTimer(v9);
  }
  return this;
}
