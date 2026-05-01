/*
 * XREFs of ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800E7C04
 * Callers:
 *     ?RegisterForTransparencyChange@AcrylicPolicyManager@@AEAAJXZ @ 0x1800E6C64 (-RegisterForTransparencyChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802BB990 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800DF4A0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800E26D8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ??0registry_watcher_state@details@wil@@QEAA@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800E557C (--0registry_watcher_state@details@wil@@QEAA@$$QEAV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800E5F1C (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800E7180 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WAIT@@@Z @ 0x1800E7E54 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x1800E7F08 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_common(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  void *v7; // rax
  __int64 v8; // rsi
  wil::details::registry_watcher_state *v9; // rbx
  signed int LastErrorFailHr; // edi
  __int64 v11; // rdx
  __int64 v12; // rdx
  wil::details *v13; // rcx
  wil::details *Event; // rdi
  __int64 v15; // r8
  const char *v16; // r9
  void *v17; // rdx
  unsigned int v18; // eax
  signed int LastError; // eax
  PTP_WAIT ThreadpoolWait; // rax
  const char *v21; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v7 = operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v8 = wil::details::registry_watcher_state::registry_watcher_state((__int64)v7, a2, 0, a4);
  else
    v8 = 0LL;
  v9 = (wil::details::registry_watcher_state *)v8;
  if ( !v8 )
  {
    LastErrorFailHr = -2147024882;
    v11 = 168LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"internal\\sdk\\inc\\wil/registry.h",
      (const char *)(unsigned int)LastErrorFailHr);
    goto LABEL_18;
  }
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      (wil::details **)(v8 + 120),
      Event);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v13, v12, v15, v16);
  }
  if ( LastErrorFailHr < 0 )
  {
    v11 = 169LL;
    goto LABEL_11;
  }
  v18 = RegNotifyChangeKeyValue(
          *(HKEY *)(v8 + 112),
          *(unsigned __int8 *)(v8 + 136),
          0x10000005u,
          *(HANDLE *)(v8 + 120),
          1);
  if ( v18 )
  {
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  172LL,
                  (__int64)"internal\\sdk\\inc\\wil/registry.h",
                  (const char *)v18);
LABEL_16:
    LastErrorFailHr = LastError;
    goto LABEL_18;
  }
  ThreadpoolWait = CreateThreadpoolWait(
                     (PTP_WAIT_CALLBACK)lambda_1f7d91c801a964f38e999207b709b9ee_::_lambda_invoker_cdecl_,
                     (PVOID)v8,
                     0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<0>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,0,std::nullptr_t>>::reset(
    v8 + 128,
    ThreadpoolWait);
  if ( !*(_QWORD *)(v8 + 128) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xDA,
                  (__int64)"internal\\sdk\\inc\\wil/registry.h",
                  v21);
    goto LABEL_16;
  }
  v9 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
    a1,
    v8);
  SetThreadpoolWait(*(PTP_WAIT *)(*(_QWORD *)a1 + 128LL), *(HANDLE *)(*(_QWORD *)a1 + 120LL), 0LL);
  LastErrorFailHr = 0;
LABEL_18:
  if ( v9 )
    wil::details::registry_watcher_state::`scalar deleting destructor'(v9, v17);
  return (unsigned int)LastErrorFailHr;
}
