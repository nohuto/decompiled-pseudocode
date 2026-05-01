/*
 * XREFs of ?RunCallbackWithTabTransferEventBrokerAsync@TabViewManager@@AEAAJV?$function@$$A6AJPEAUITabTransferEventBroker@Experience@Shell@Internal@Windows@@@Z@std@@@Z @ 0x1801E48B0
 * Callers:
 *     ?CancelTabTransfer@TabViewManager@@UEAAJU_GUID@@@Z @ 0x1801D89F0 (-CancelTabTransfer@TabViewManager@@UEAAJU_GUID@@@Z.c)
 *     ?NewViewForTab@TabViewManager@@UEAAJIU_GUID@@@Z @ 0x1801DEE30 (-NewViewForTab@TabViewManager@@UEAAJIU_GUID@@@Z.c)
 *     ?OnTabTransferStarting@TabViewManager@@AEAAJPEAUIInspectable@@0@Z @ 0x1801E1080 (-OnTabTransferStarting@TabViewManager@@AEAAJPEAUIInspectable@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18017B930 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??$?0VTabViewManager@@@?$ComPtr@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEAA@PEAVTabViewManager@@@Z @ 0x1801CDEAC (--$-0VTabViewManager@@@-$ComPtr@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd_____lambda_d5a453c259c1c666423c9d39fc9189fd___ @ 0x1801CEF50 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d5a453c259c1c.c)
 *     ??0?$function@$$A6AJPEAUITabTransferEventBroker@Experience@Shell@Internal@Windows@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x1801D4594 (--0-$function@$$A6AJPEAUITabTransferEventBroker@Experience@Shell@Internal@Windows@@@Z@std@@QEAA@.c)
 */

__int64 __fastcall TabViewManager::RunCallbackWithTabTransferEventBrokerAsync(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rax
  volatile int *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v10; // rdx
  int v11; // edi
  __int64 v12; // rdx
  __int64 v14; // [rsp+38h] [rbp-39h] BYREF
  __int64 v15[3]; // [rsp+40h] [rbp-31h] BYREF
  __int64 v16; // [rsp+58h] [rbp-19h] BYREF
  __int64 v17; // [rsp+60h] [rbp-11h] BYREF
  _BYTE v18[64]; // [rsp+68h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v15[1] = -2LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter>::ComPtr<Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter>(
         v15,
         a1);
  v16 = a1;
  v17 = 0LL;
  if ( &v17 != v4 )
  {
    v17 = *v4;
    *v4 = 0LL;
  }
  std::function<long (Windows::Internal::Shell::Experience::ITabTransferEventBroker *)>::function<long (Windows::Internal::Shell::Experience::ITabTransferEventBroker *)>(
    (__int64)v18,
    a2);
  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd_____lambda_d5a453c259c1c666423c9d39fc9189fd___(
         &v14,
         &v16);
  v7 = *v5;
  *v5 = 0LL;
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v8,
      v6);
  }
  CurrentThreadId = GetCurrentThreadId();
  v11 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  std::_Func_class<void,>::_Tidy((__int64)v18, v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  if ( v11 >= 0 )
    v11 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55F,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v11);
  std::_Func_class<void,>::_Tidy(a2, v12);
  return (unsigned int)v11;
}
