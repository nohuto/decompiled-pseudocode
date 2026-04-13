/*
 * XREFs of ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x18001427C
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800D5B80 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1800084F0 (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180008ED4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEA.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800135F4 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180013A80 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 */

wil::details::FeatureStateManager *__fastcall wil::details::FeatureStateManager::`scalar deleting destructor'(
        wil::details::FeatureStateManager *this)
{
  void *v2; // rdi
  HANDLE ProcessHeap; // rax
  void *v4; // rsi
  HANDLE v5; // rax
  void *v6; // rsi
  HANDLE v7; // rax
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v8; // r8
  struct _TP_TIMER *v9; // rdi
  struct _TP_TIMER *v10; // rdi
  _QWORD *v11; // rcx

  *(_BYTE *)this = 0;
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)this + 6,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)this + 7,
    0LL);
  v2 = (void *)*((_QWORD *)this + 33);
  *((_QWORD *)this + 33) = 0LL;
  if ( v2 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v2);
  }
  v4 = (void *)*((_QWORD *)this + 29);
  *((_QWORD *)this + 29) = 0LL;
  if ( v4 )
  {
    v5 = GetProcessHeap();
    HeapFree(v5, 0, v4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v6 = (void *)*((_QWORD *)this + 20);
  *((_QWORD *)this + 20) = 0LL;
  if ( v6 )
  {
    v7 = GetProcessHeap();
    HeapFree(v7, 0, v6);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v8 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)*((_QWORD *)this + 11);
  if ( v8 && qword_18018D1B8 )
    wil::details_abi::SubscriptionList::Unsubscribe((LPCRITICAL_SECTION)&qword_18018D1B8[25], qword_18018D1B8, v8);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<__WIL__WNF_USER_SUBSCRIPTION *,void (*)(__WIL__WNF_USER_SUBSCRIPTION *),&void wil::details::UnsubscribeWilWnf(__WIL__WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,__WIL__WNF_USER_SUBSCRIPTION *,__WIL__WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<__WIL__WNF_USER_SUBSCRIPTION *,void (*)(__WIL__WNF_USER_SUBSCRIPTION *),&void wil::details::UnsubscribeWilWnf(__WIL__WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,__WIL__WNF_USER_SUBSCRIPTION *,__WIL__WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>((__int64 *)this + 10);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<__WIL__WNF_USER_SUBSCRIPTION *,void (*)(__WIL__WNF_USER_SUBSCRIPTION *),&void wil::details::UnsubscribeWilWnf(__WIL__WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,__WIL__WNF_USER_SUBSCRIPTION *,__WIL__WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<__WIL__WNF_USER_SUBSCRIPTION *,void (*)(__WIL__WNF_USER_SUBSCRIPTION *),&void wil::details::UnsubscribeWilWnf(__WIL__WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,__WIL__WNF_USER_SUBSCRIPTION *,__WIL__WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>((__int64 *)this + 9);
  v9 = (struct _TP_TIMER *)*((_QWORD *)this + 7);
  if ( v9 )
  {
    SetThreadpoolTimer(v9, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v9, 1);
    CloseThreadpoolTimer(v9);
  }
  v10 = (struct _TP_TIMER *)*((_QWORD *)this + 6);
  if ( v10 )
  {
    SetThreadpoolTimer(*((PTP_TIMER *)this + 6), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v10, 1);
    CloseThreadpoolTimer(v10);
  }
  v11 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v11 )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(v11);
  return this;
}
