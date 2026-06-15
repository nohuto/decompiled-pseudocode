/*
 * XREFs of ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x18005A04C
 * Callers:
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x180059A58 (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@det.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180048200 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x18005A1A4 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     ??0registry_watcher_state@details@wil@@QEAA@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x18005A1D8 (--0registry_watcher_state@details@wil@@QEAA@$$QEAV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800AD64C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800ADD68 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800C2BC4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800FAB58 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z @ 0x1800FABC8 (-Destroy@-$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_common(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rsi
  wil::details::registry_watcher_state *v10; // rbx
  wil::details *v11; // rcx
  HANDLE Event; // r14
  wil::details *v13; // rbp
  int LastErrorFailHr; // edi
  unsigned int v15; // eax
  PTP_WAIT ThreadpoolWait; // rbp
  const char *v17; // r9
  struct _TP_WAIT *v18; // r14
  unsigned int v19; // edx
  __int64 v21; // rdx
  DWORD LastError; // edi
  void *v23; // rdx
  int v24; // eax
  DWORD v25; // edi
  BOOL fAsynchronous; // [rsp+20h] [rbp-38h]
  BOOL fAsynchronousa; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7 = operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v9 = wil::details::registry_watcher_state::registry_watcher_state(v7, a2, v8, a4);
  else
    v9 = 0LL;
  v10 = (wil::details::registry_watcher_state *)v9;
  if ( !v9 )
  {
    LastErrorFailHr = -2147024882;
    v21 = 168LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"internal\\sdk\\inc\\wil/registry.h",
      (const char *)(unsigned int)LastErrorFailHr,
      fAsynchronous);
    goto LABEL_14;
  }
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v13 = *(wil::details **)(v9 + 120);
    if ( v13 )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v13, v23);
      SetLastError(LastError);
    }
    *(_QWORD *)(v9 + 120) = Event;
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v11);
  }
  if ( LastErrorFailHr < 0 )
  {
    v21 = 169LL;
    goto LABEL_21;
  }
  v15 = RegNotifyChangeKeyValue(
          *(HKEY *)(v9 + 112),
          *(unsigned __int8 *)(v9 + 136),
          0x10000005u,
          *(HANDLE *)(v9 + 120),
          1);
  if ( v15 )
  {
    v24 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0xAC,
            (unsigned int)"internal\\sdk\\inc\\wil/registry.h",
            (const char *)v15,
            fAsynchronousa);
  }
  else
  {
    ThreadpoolWait = CreateThreadpoolWait(
                       lambda_1f7d91c801a964f38e999207b709b9ee_::_lambda_invoker_cdecl_,
                       (PVOID)v9,
                       0LL);
    v18 = *(struct _TP_WAIT **)(v9 + 128);
    if ( v18 )
    {
      v25 = GetLastError();
      wil::details::DestroyThreadPoolWait<0>::Destroy(v18);
      SetLastError(v25);
    }
    *(_QWORD *)(v9 + 128) = ThreadpoolWait;
    if ( ThreadpoolWait )
    {
      v10 = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
        a1,
        v9);
      SetThreadpoolWait(*(PTP_WAIT *)(*(_QWORD *)a1 + 128LL), *(HANDLE *)(*(_QWORD *)a1 + 120LL), 0LL);
      LastErrorFailHr = 0;
      goto LABEL_14;
    }
    v24 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0xDA,
            (unsigned int)"internal\\sdk\\inc\\wil/registry.h",
            v17);
  }
  LastErrorFailHr = v24;
LABEL_14:
  if ( v10 )
    wil::details::registry_watcher_state::`scalar deleting destructor'(v10, v19);
  return (unsigned int)LastErrorFailHr;
}
