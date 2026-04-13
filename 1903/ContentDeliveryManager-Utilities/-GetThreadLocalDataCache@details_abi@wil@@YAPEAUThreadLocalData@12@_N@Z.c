/*
 * XREFs of ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004314
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x1800045B0 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180009F88 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z @ 0x18000B6B8 (-CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z.c)
 *     ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18000CA20 (-LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU-$IAsyncOperation@_.c)
 *     ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18000D330 (-LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x180047540 (-Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_I.c)
 *     ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x1800562B0 (-UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x180056980 (-StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z.c)
 *     ?StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z @ 0x180056F40 (-StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z.c)
 *     ?Invoke@PinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008FCF0 (-Invoke@PinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?MakePinWebsiteToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18008FE00 (-MakePinWebsiteToTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Act.c)
 *     wil::details::functor_wrapper_void__lambda_62158d46a05af21ae3d227fe228597be__&_::Run @ 0x180090430 (wil--details--functor_wrapper_void__lambda_62158d46a05af21ae3d227fe228597be__-_--Run.c)
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800ABE38 (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 * Callees:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800139A8 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 */

struct wil::details_abi::ThreadLocalData *__fastcall wil::details_abi::GetThreadLocalDataCache(wil::details_abi *this)
{
  __int64 v1; // rdi
  char v2; // r14
  signed __int64 i; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  DWORD CurrentThreadId; // ebp
  unsigned __int64 v7; // rsi
  HANDLE ProcessHeap; // rax
  _WORD *v9; // rax
  signed __int64 v10; // rax
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v1 = wil::details_abi::g_pProcessLocalData;
  v2 = (char)this;
  i = 0LL;
  if ( wil::details_abi::g_pProcessLocalData )
  {
    if ( !*(_QWORD *)(wil::details_abi::g_pProcessLocalData + 8) )
    {
      v4 = *(_QWORD *)wil::details_abi::g_pProcessLocalData;
      v12 = 0LL;
      if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(v4, &v12) >= 0
        && !*(_QWORD *)(v1 + 8) )
      {
        *(_QWORD *)(v1 + 8) = v12;
      }
    }
    v5 = (*(_QWORD *)(v1 + 8) + 32LL) & -(__int64)(*(_QWORD *)(v1 + 8) != 0LL);
    if ( v5 )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = CurrentThreadId % 0xAuLL;
      for ( i = *(_QWORD *)(v5 + 8 * v7 + 8); i; i = *(_QWORD *)(i + 48) )
      {
        if ( *(_DWORD *)(i + 40) == CurrentThreadId )
          goto LABEL_17;
      }
      if ( v2
        && (ProcessHeap = GetProcessHeap(), v9 = HeapAlloc(ProcessHeap, 0, 0x38uLL), (i = (signed __int64)v9) != 0) )
      {
        v9[1] = 0;
        *((_DWORD *)v9 + 5) = 0;
        *((_DWORD *)v9 + 9) = 0;
        *v9 = 40;
        *((_DWORD *)v9 + 1) = 0;
        *((_QWORD *)v9 + 1) = 0LL;
        *((_DWORD *)v9 + 4) = 0;
        *((_QWORD *)v9 + 3) = 0LL;
        *((_DWORD *)v9 + 8) = 0;
        *((_DWORD *)v9 + 10) = CurrentThreadId;
        *((_QWORD *)v9 + 6) = 0LL;
        _m_prefetchw((const void *)(v5 + 8 * v7 + 8));
        do
        {
          v10 = *(_QWORD *)(v5 + 8 * v7 + 8);
          *(_QWORD *)(i + 48) = v10;
        }
        while ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 8 * v7 + 8), i, v10) );
      }
      else
      {
        i = 0LL;
      }
LABEL_17:
      if ( i && !*(_QWORD *)(i + 8) )
        *(_QWORD *)(i + 8) = v5 + 4;
    }
  }
  return (struct wil::details_abi::ThreadLocalData *)i;
}
