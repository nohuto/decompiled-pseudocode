/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_2ab80ba63dcc212dafbb4e4695138308_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x18012E8B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??1?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ @ 0x18004E878 (--1-$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ.c)
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x1801327D4 (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x180133910 (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@det.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x180133BA4 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_2ab80ba63dcc212dafbb4e4695138308_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        __int64 a2)
{
  int v2; // edx
  int v3; // r8d
  int v4; // r9d
  __int64 result; // rax
  void *v6; // rbx
  __int64 v7; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v8[3]; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v9[8]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v10[15]; // [rsp+58h] [rbp-90h] BYREF

  v8[2] = -2LL;
  try
  {
    v8[0] = a2;
    MPCSixDofProcessor::UpdateRegistryTuneables();
    v10[0] = off_180170E30;
    v10[13] = v10;
    v7 = 0LL;
    wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
      (unsigned int)&v7,
      v2,
      v3,
      v4,
      (__int64)v9);
    wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
      &MPCSixDofProcessor::s_registryWatcher,
      v7);
    wistd::function<void (enum wil::RegistryChangeKind)>::~function<void (enum wil::RegistryChangeKind)>((__int64)v9);
    result = 1LL;
  }
  catch ( ... )
  {
    v6 = *(void **)v8[0];
    __ExceptionPtrCreate(v8);
    __ExceptionPtrCurrentException(v8);
    __ExceptionPtrAssign(v6, v8);
    __ExceptionPtrDestroy(v8);
    return 0LL;
  }
  return result;
}
