/*
 * XREFs of ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x1802BE998
 * Callers:
 *     ?create@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJ$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x1802BE8E0 (-create@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@w.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800DEBE0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DF27C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WAIT@@@Z @ 0x1800E7E54 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     ??0?$function@$$A6AXXZ@wistd@@QEAA@$$QEAV01@@Z @ 0x18012B1D4 (--0-$function@$$A6AXXZ@wistd@@QEAA@$$QEAV01@@Z.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1802B5034 (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_take_hevent_ownership(
        wil::details::event_watcher_state **a1,
        wil::details *a2,
        __int64 a3,
        const char *a4)
{
  wil::details *v5; // rbx
  void *v7; // rax
  void *v8; // rsi
  unsigned int LastError; // edi
  void *v10; // rdx
  struct _TP_WAIT *ThreadpoolWait; // rax
  const char *v13; // r9
  void *v14; // rdx
  wil::details::event_watcher_state *v15; // rbp
  DWORD v16; // edi
  void *v17; // rdx
  void *v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = a2;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(retaddr, 3832LL, (__int64)"internal\\sdk\\inc\\wil\\Resource.h", a4);
    __debugbreak();
  }
  v7 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    wistd::function<void (void)>::function<void (void)>((__int64)v7, a3);
    *((_QWORD *)v8 + 14) = v5;
    v5 = 0LL;
    *((_QWORD *)v8 + 15) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEFB,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8007000ELL);
LABEL_8:
    if ( v5 )
      wil::details::CloseHandle(v5, v10);
    return LastError;
  }
  ThreadpoolWait = CreateThreadpoolWait(
                     wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::wait_callback,
                     v8,
                     0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<0>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,0,std::nullptr_t>>::reset(
    (struct _TP_WAIT **)v8 + 15,
    ThreadpoolWait);
  if ( !*((_QWORD *)v8 + 15) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xEFE,
                  (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
                  v13);
    wil::details::event_watcher_state::`scalar deleting destructor'((wil::details::event_watcher_state *)v8, v14);
    goto LABEL_8;
  }
  v15 = *a1;
  if ( *a1 )
  {
    v16 = GetLastError();
    wil::details::event_watcher_state::`scalar deleting destructor'(v15, v17);
    SetLastError(v16);
  }
  *a1 = (wil::details::event_watcher_state *)v8;
  SetThreadpoolWait(*((PTP_WAIT *)v8 + 15), *((HANDLE *)v8 + 14), 0LL);
  if ( v5 )
    wil::details::CloseHandle(v5, v18);
  return 0LL;
}
