/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_2ab80ba63dcc212dafbb4e4695138308_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800F4A80
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x1800F3274 (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800F58F4 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     ?delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z @ 0x1800F5C54 (-delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_2ab80ba63dcc212dafbb4e4695138308_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        __int64 a2)
{
  LSTATUS v2; // eax
  __int64 v3; // r8
  signed int v4; // ecx
  wil::details *v5; // rdi
  DWORD LastError; // ebx
  struct wil::details::registry_watcher_state *v7; // rdx
  _QWORD *v8; // rdx
  void *v10; // rbx
  HKEY hKey; // [rsp+50h] [rbp-B8h] BYREF
  wil::details *v12; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v13[4]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v14[13]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD *v15; // [rsp+E8h] [rbp-20h]

  v13[2] = -2LL;
  v13[0] = a2;
  try
  {
    MPCSixDofProcessor::UpdateRegistryTuneables();
    v14[0] = off_1801423C8;
    v15 = v14;
    v12 = 0LL;
    hKey = 0LL;
    v2 = RegCreateKeyExW(
           HKEY_LOCAL_MACHINE,
           L"Software\\Microsoft\\Windows\\ISM\\6dof",
           0,
           0LL,
           0,
           0x10u,
           0LL,
           &hKey,
           0LL);
    v4 = (unsigned __int16)v2 | 0x80070000;
    if ( v2 <= 0 )
      v4 = v2;
    if ( v4 >= 0 )
      wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_common(
        &v12,
        &hKey,
        v3,
        v14);
    if ( hKey )
      RegCloseKey(hKey);
    v5 = MPCSixDofProcessor::s_registryWatcher;
    if ( MPCSixDofProcessor::s_registryWatcher )
    {
      LastError = GetLastError();
      wil::details::delete_registry_watcher_state(v5, v7);
      SetLastError(LastError);
    }
    MPCSixDofProcessor::s_registryWatcher = v12;
    if ( v15 )
    {
      v8 = v14;
      LOBYTE(v8) = v15 != v14;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v15 + 24LL))(v15, v8);
    }
  }
  catch ( ... )
  {
    v10 = *(void **)v13[0];
    __ExceptionPtrCreate(v13);
    __ExceptionPtrCurrentException(v13);
    __ExceptionPtrAssign(v10, v13);
    __ExceptionPtrDestroy(v13);
    return 0LL;
  }
  return 1LL;
}
