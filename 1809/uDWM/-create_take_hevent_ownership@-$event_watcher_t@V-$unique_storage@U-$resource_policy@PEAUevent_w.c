/*
 * XREFs of ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18003FBCC
 * Callers:
 *     ?create@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18003FAD4 (-create@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@w.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WAIT@@@Z @ 0x18003FCB8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     ??0event_watcher_state@details@wil@@QEAA@$$QEAV?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18003FCFC (--0event_watcher_state@details@wil@@QEAA@$$QEAV-$unique_any_t@V-$event_t@V-$unique_storage@U-$re.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18004B53C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18006FDF4 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180071614 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x180073044 (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_take_hevent_ownership(
        wil::details::event_watcher_state **a1,
        wil::details *a2,
        __int64 a3,
        const char *a4)
{
  wil::details *v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  PTP_WAIT ThreadpoolWait; // rax
  const char *v11; // r9
  wil::details::event_watcher_state *v12; // rbp
  void *v13; // rdx
  unsigned int v15; // edi
  void *v16; // rdx
  unsigned int v17; // edx
  DWORD LastError; // edi
  unsigned int v19; // edx
  int v20; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  wil::details *v22; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  if ( !a2 )
  {
    wil::details::in1diag3::FailFast_Unexpected(retaddr, (void *)0xEF8, a3, a4);
    __debugbreak();
  }
  v22 = a2;
  v7 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         128LL);
  if ( v7 )
  {
    v8 = wil::details::event_watcher_state::event_watcher_state(v7, &v22, a3);
    v5 = v22;
    v9 = v8;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    ThreadpoolWait = CreateThreadpoolWait(
                       wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::wait_callback,
                       (PVOID)v9,
                       0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<0>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,0,std::nullptr_t>>::reset(
      v9 + 120,
      ThreadpoolWait);
    if ( *(_QWORD *)(v9 + 120) )
    {
      v12 = *a1;
      if ( *a1 )
      {
        LastError = GetLastError();
        wil::details::event_watcher_state::`scalar deleting destructor'(v12, v19);
        SetLastError(LastError);
      }
      *a1 = (wil::details::event_watcher_state *)v9;
      SetThreadpoolWait(*(PTP_WAIT *)(v9 + 120), *(HANDLE *)(v9 + 112), 0LL);
      if ( v5 )
        wil::details::CloseHandle(v5, v13);
      return 0LL;
    }
    v15 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0xEFE,
            (unsigned int)"internal\\sdk\\inc\\wil\\resource.h",
            v11);
    wil::details::event_watcher_state::`scalar deleting destructor'((wil::details::event_watcher_state *)v9, v17);
  }
  else
  {
    v15 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEFB,
      (unsigned int)"internal\\sdk\\inc\\wil\\resource.h",
      (const char *)0x8007000ELL,
      v20);
  }
  if ( v5 )
    wil::details::CloseHandle(v5, v16);
  return v15;
}
