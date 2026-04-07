/*
 * XREFs of ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180077AAC
 * Callers:
 *     ?destroy@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18004E004 (-destroy@-$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x180075DE0 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180034584 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x180041F34 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x18004DCF0 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ??_G?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x180076020 (--_G-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x18007667C (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180077610 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800787B8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-ReleaseMutex@details@wil@@YAX0@ZU-$i.c)
 */

void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(char *lpMem)
{
  void *v2; // rdx
  wil *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  HANDLE ProcessHeap; // rax
  wil::details *v9; // [rsp+40h] [rbp+8h] BYREF

  wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
    (HANDLE *)lpMem + 1,
    &v9);
  if ( (*(_DWORD *)lpMem)-- == 1 )
  {
    wil::details_abi::SemaphoreValue::Destroy((wil::details **)lpMem + 2);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::ReleaseMutex(void *),wistd::integral_constant<unsigned __int64,2>,void *,void *,0,std::nullptr_t>>::reset(
      &v9,
      0LL);
    if ( wil::ProcessShutdownInProgress(v4) )
    {
      wil::details_abi::FeatureStateData::ProcessShutdown(
        (wil::details_abi::FeatureStateData *)(lpMem + 32),
        v5,
        v6,
        v7);
    }
    else
    {
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::`scalar deleting destructor'((__int64)lpMem);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
  if ( v9 )
    wil::details::ReleaseMutex(v9, v2);
}
