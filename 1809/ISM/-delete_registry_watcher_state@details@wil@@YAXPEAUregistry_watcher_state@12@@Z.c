/*
 * XREFs of ?delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z @ 0x1800F5C54
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_2ab80ba63dcc212dafbb4e4695138308_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800F4A80 (--$_Callback_once@V-$tuple@$$QEAV_lambda_2ab80ba63dcc212dafbb4e4695138308_@@AEAVexception_ptr@st.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800F58F4 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     _dynamic_atexit_destructor_for__MPCSixDofProcessor::s_registryWatcher__ @ 0x180136FF0 (_dynamic_atexit_destructor_for__MPCSixDofProcessor--s_registryWatcher__.c)
 * Callees:
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800F5B68 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 */

void __fastcall wil::details::delete_registry_watcher_state(
        wil::details *this,
        struct wil::details::registry_watcher_state *a2)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v4; // rdx
  DWORD LastError; // edi

  v2 = (RTL_SRWLOCK *)((char *)this + 144);
  AcquireSRWLockExclusive((PSRWLOCK)this + 18);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 35, 0xFFFFFFFF) != 1 )
    goto LABEL_6;
  if ( v2 )
  {
    LastError = GetLastError();
    ReleaseSRWLockExclusive(v2);
    SetLastError(LastError);
  }
  v2 = 0LL;
  if ( this )
  {
    wil::details::registry_watcher_state::`scalar deleting destructor'(this, v4);
LABEL_6:
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
