/*
 * XREFs of ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x180142FAC
 * Callers:
 *     ?Destroy@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800EB7B0 (-Destroy@-$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXX.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x18007AB80 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18008785C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180087E68 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1801434B0 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180144560 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180144CA0 (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

void __fastcall wil::details::FeatureStateManager::~FeatureStateManager(wil::details::FeatureStateManager *this)
{
  void *v2; // rdx
  wil::details *v3; // rcx
  wil::details *v4; // rcx
  void *v5; // rdx
  wil::details *v6; // rcx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v7; // r8
  __int64 v8; // rdi
  FARPROC ProcAddress; // rax
  HMODULE NtDllModuleHandle; // rax
  __int64 v11; // rdi
  HMODULE v12; // rax
  struct _TP_TIMER *v13; // rcx
  struct _TP_TIMER *v14; // rcx
  void *v15; // rcx

  *(_BYTE *)this = 0;
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)this + 6,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)this + 7,
    0LL);
  v3 = (wil::details *)*((_QWORD *)this + 33);
  if ( v3 )
    wil::details::FreeProcessHeap(v3, v2);
  v4 = (wil::details *)*((_QWORD *)this + 29);
  if ( v4 )
    wil::details::FreeProcessHeap(v4, v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v6 = (wil::details *)*((_QWORD *)this + 20);
  if ( v6 )
    wil::details::FreeProcessHeap(v6, v5);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v7 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)*((_QWORD *)this + 11);
  if ( v7 && *(&xmmword_1803083F0 + 1) )
    wil::details_abi::SubscriptionList::Unsubscribe(
      (LPCRITICAL_SECTION)*(&xmmword_1803083F0 + 1) + 5,
      (PSRWLOCK)*(&xmmword_1803083F0 + 1),
      v7);
  v8 = *((_QWORD *)this + 10);
  ProcAddress = (FARPROC)g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion;
  if ( v8 )
  {
    if ( g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion
      || (NtDllModuleHandle = wil_details_GetNtDllModuleHandle(),
          ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlUnsubscribeWnfNotificationWaitForCompletion"),
          (g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion = (int (*)(struct __WIL__WNF_USER_SUBSCRIPTION *))ProcAddress) != 0LL) )
    {
      ((void (__fastcall *)(__int64))ProcAddress)(v8);
      ProcAddress = (FARPROC)g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion;
    }
  }
  v11 = *((_QWORD *)this + 9);
  if ( v11 )
  {
    if ( ProcAddress
      || (v12 = wil_details_GetNtDllModuleHandle(),
          ProcAddress = GetProcAddress(v12, "RtlUnsubscribeWnfNotificationWaitForCompletion"),
          (g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion = (int (*)(struct __WIL__WNF_USER_SUBSCRIPTION *))ProcAddress) != 0LL) )
    {
      ((void (__fastcall *)(__int64))ProcAddress)(v11);
    }
  }
  v13 = (struct _TP_TIMER *)*((_QWORD *)this + 7);
  if ( v13 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v13);
  v14 = (struct _TP_TIMER *)*((_QWORD *)this + 6);
  if ( v14 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v14);
  v15 = (void *)*((_QWORD *)this + 2);
  if ( v15 )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(v15);
}
