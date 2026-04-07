/*
 * XREFs of ?callback@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18007A230
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEBAXW4RegistryChangeKind@wil@@@Z @ 0x180079640 (--R-$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEBAXW4RegistryChangeKind@wil@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180079898 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAX_N@Z @ 0x180079A54 (-ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAX_N@Z.c)
 */

void __fastcall wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::callback(
        PTP_CALLBACK_INSTANCE Instance,
        unsigned __int8 *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  int v5; // eax
  void *v6; // rdx
  __int64 v7; // r8
  char v8; // dl
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( _InterlockedIncrement((volatile signed __int32 *)Context + 37) > 1 )
  {
    v5 = RegNotifyChangeKeyValue(*((HKEY *)Context + 15), Context[144], 0x10000005u, *((HANDLE *)Context + 16), 1);
    if ( !v5 || v5 == 5 )
    {
      wistd::function<void (enum wil::RegistryChangeKind)>::operator()((__int64)Context, 0);
      v8 = 1;
    }
    else
    {
      if ( v5 != 811 )
      {
        if ( v5 != 1018 )
        {
          if ( v5 > 0 )
            v5 = (unsigned __int16)v5 | 0x80070000;
          wil::details::in1diag3::FailFast_Hr(retaddr, v6, v7, (const char *)(unsigned int)v5);
          __debugbreak();
        }
        wistd::function<void (enum wil::RegistryChangeKind)>::operator()((__int64)Context, 1);
      }
      v8 = 0;
    }
    wil::details::registry_watcher_state::ReleaseFromCallback((wil::details::registry_watcher_state *)Context, v8);
  }
}
