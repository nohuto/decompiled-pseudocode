/*
 * XREFs of ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x1800B03C8
 * Callers:
 *     ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x1800B0024 (--_GFeatureStateManager@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B0568 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1800B05C4 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1800B11F0 (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x1800B1494 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x1800B264C (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x1800B2CD8 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800D8438 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x1800D8B4C (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??_G?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x180153728 (--_G-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x180153A60 (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18015483C (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180155398 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-ReleaseMutex@details@wil@@YAX0@ZU-$i.c)
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
  _DWORD *v15; // rbx
  void *v16; // rdx
  wil *v18; // rcx
  HANDLE ProcessHeap; // rax
  wil::details *v20; // [rsp+40h] [rbp+8h] BYREF

  *(_BYTE *)this = 0;
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (char *)this + 48,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (char *)this + 56,
    0LL);
  v3 = (wil::details *)*((_QWORD *)this + 33);
  *((_QWORD *)this + 33) = 0LL;
  if ( v3 )
    wil::details::FreeProcessHeap(v3, v2);
  v4 = (wil::details *)*((_QWORD *)this + 29);
  *((_QWORD *)this + 29) = 0LL;
  if ( v4 )
    wil::details::FreeProcessHeap(v4, v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v6 = (wil::details *)*((_QWORD *)this + 20);
  *((_QWORD *)this + 20) = 0LL;
  if ( v6 )
    wil::details::FreeProcessHeap(v6, v5);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v7 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)*((_QWORD *)this + 11);
  if ( v7 && qword_180339B68 )
    wil::details_abi::SubscriptionList::Unsubscribe((LPCRITICAL_SECTION)&qword_180339B68[25], qword_180339B68, v7);
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
  v15 = (_DWORD *)*((_QWORD *)this + 2);
  if ( v15 )
  {
    wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
      v15 + 2,
      &v20);
    if ( (*v15)-- == 1 )
    {
      wil::details_abi::SemaphoreValue::Destroy((wil::details_abi::SemaphoreValue *)(v15 + 4));
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::ReleaseMutex(void *),wistd::integral_constant<unsigned __int64,2>,void *,void *,0,std::nullptr_t>>::reset(
        &v20,
        0LL);
      if ( wil::ProcessShutdownInProgress(v18) )
      {
        wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)(v15 + 8));
      }
      else
      {
        wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::`scalar deleting destructor'(v15);
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v15);
      }
    }
    if ( v20 )
      wil::details::ReleaseMutex(v20, v16);
  }
}
