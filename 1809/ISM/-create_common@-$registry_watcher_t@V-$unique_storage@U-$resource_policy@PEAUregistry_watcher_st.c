/*
 * XREFs of ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800F58F4
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_2ab80ba63dcc212dafbb4e4695138308_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800F4A80 (--$_Callback_once@V-$tuple@$$QEAV_lambda_2ab80ba63dcc212dafbb4e4695138308_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180002698 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180004D78 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180064E88 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800F5B68 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z @ 0x1800F5C54 (-delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_common(
        wil::details **a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  wil::details::registry_watcher_state *v12; // rbx
  int LastErrorFailHr; // edi
  __int64 v14; // rdx
  wil::details *v15; // rcx
  HANDLE Event; // rdi
  unsigned int v17; // edx
  unsigned int v18; // eax
  int v19; // eax
  PTP_WAIT ThreadpoolWait; // rbp
  const char *v21; // r9
  struct _TP_WAIT *v22; // r14
  DWORD LastError; // edi
  wil::details *v24; // rbp
  DWORD v25; // edi
  struct wil::details::registry_watcher_state *v26; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v7 = operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v7[13] = 0LL;
    v9 = *(_QWORD *)(a4 + 104);
    if ( !v9 )
    {
      v7[13] = 0LL;
LABEL_9:
      v8[14] = *a2;
      *a2 = 0LL;
      v8[15] = 0LL;
      v8[16] = 0LL;
      *((_BYTE *)v8 + 136) = 1;
      *((_DWORD *)v8 + 35) = 1;
      v8[18] = 0LL;
      goto LABEL_11;
    }
    if ( v9 == a4 )
    {
      v7[13] = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 8LL))(v9, v7);
      v11 = *(_QWORD *)(a4 + 104);
      if ( !v11 )
        goto LABEL_9;
      LOBYTE(v10) = v11 != a4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, v10);
    }
    else
    {
      v7[13] = v9;
    }
    *(_QWORD *)(a4 + 104) = 0LL;
    goto LABEL_9;
  }
  v8 = 0LL;
LABEL_11:
  v12 = (wil::details::registry_watcher_state *)v8;
  if ( !v8 )
  {
    LastErrorFailHr = -2147024882;
    v14 = 168LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"internal\\sdk\\inc\\wil\\registry.h",
      (const char *)(unsigned int)LastErrorFailHr);
    goto LABEL_29;
  }
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      (void **)v8 + 15,
      Event);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v15);
  }
  if ( LastErrorFailHr < 0 )
  {
    v14 = 169LL;
    goto LABEL_18;
  }
  v18 = RegNotifyChangeKeyValue((HKEY)v8[14], *((unsigned __int8 *)v8 + 136), 0x10000005u, (HANDLE)v8[15], 1);
  if ( v18 )
  {
    v19 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0xAC,
            (__int64)"internal\\sdk\\inc\\wil\\registry.h",
            (const char *)v18);
LABEL_25:
    LastErrorFailHr = v19;
    goto LABEL_29;
  }
  ThreadpoolWait = CreateThreadpoolWait(
                     (PTP_WAIT_CALLBACK)lambda_1f7d91c801a964f38e999207b709b9ee_::_lambda_invoker_cdecl_,
                     v8,
                     0LL);
  v22 = (struct _TP_WAIT *)v8[16];
  if ( v22 )
  {
    LastError = GetLastError();
    SetThreadpoolWait(v22, 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(v22, 1);
    CloseThreadpoolWait(v22);
    SetLastError(LastError);
  }
  v8[16] = ThreadpoolWait;
  if ( !ThreadpoolWait )
  {
    v19 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0xDA,
            (__int64)"internal\\sdk\\inc\\wil\\registry.h",
            v21);
    goto LABEL_25;
  }
  v12 = 0LL;
  v24 = *a1;
  if ( *a1 )
  {
    v25 = GetLastError();
    wil::details::delete_registry_watcher_state(v24, v26);
    SetLastError(v25);
  }
  *a1 = (wil::details *)v8;
  SetThreadpoolWait((PTP_WAIT)v8[16], (HANDLE)v8[15], 0LL);
  LastErrorFailHr = 0;
LABEL_29:
  if ( v12 )
    wil::details::registry_watcher_state::`scalar deleting destructor'(v12, v17);
  return (unsigned int)LastErrorFailHr;
}
