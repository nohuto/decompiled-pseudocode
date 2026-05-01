/*
 * XREFs of ??0registry_watcher_state@details@wil@@QEAA@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800E557C
 * Callers:
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800E7C04 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x180183758 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregist_ea_180183758.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ @ 0x1800E2500 (-_Tidy@-$_Func_class@XAEBU_SEB_EVENT_HEADER@@U_Nil@wistd@@U23@U23@U23@U23@U23@@wistd@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::registry_watcher_state::registry_watcher_state(
        __int64 a1,
        _QWORD *a2,
        char a3,
        __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdx

  *(_QWORD *)(a1 + 104) = 0LL;
  v8 = *(_QWORD *)(a4 + 104);
  if ( v8 )
  {
    if ( v8 == a4 )
    {
      *(_QWORD *)(a1 + 104) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, a1);
      wistd::_Func_class<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
        a4,
        v9);
    }
    else
    {
      *(_QWORD *)(a1 + 104) = v8;
      *(_QWORD *)(a4 + 104) = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  *(_QWORD *)(a1 + 112) = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_BYTE *)(a1 + 136) = a3;
  *(_DWORD *)(a1 + 140) = 1;
  *(_QWORD *)(a1 + 144) = 0LL;
  return a1;
}
