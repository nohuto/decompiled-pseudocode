/*
 * XREFs of ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x180079A7C
 * Callers:
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x1800419D4 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x180041EB4 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     ??1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x1800797EC (--1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 *     ?ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAX_N@Z @ 0x180079DB4 (-ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAX_N@Z.c)
 *     ?close_reset@?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@SAXPEAUregistry_watcher_state@23@@Z @ 0x18007A638 (-close_reset@-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1-delete_r.c)
 * Callees:
 *     ??1?$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ @ 0x180041FFC (--1-$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18004DA14 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z @ 0x180079AE4 (-Destroy@-$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z.c)
 */

wil::details::registry_watcher_state *__fastcall wil::details::registry_watcher_state::`scalar deleting destructor'(
        wil::details::registry_watcher_state *this,
        void *a2)
{
  struct _TP_WAIT *v3; // rcx
  wil::details *v4; // rcx
  HKEY v5; // rcx

  v3 = (struct _TP_WAIT *)*((_QWORD *)this + 17);
  if ( v3 )
    wil::details::DestroyThreadPoolWait<0>::Destroy(v3);
  v4 = (wil::details *)*((_QWORD *)this + 16);
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  v5 = (HKEY)*((_QWORD *)this + 15);
  if ( v5 )
    RegCloseKey(v5);
  wistd::function<void (int const &)>::~function<void (int const &)>((__int64)this);
  (*(void (__fastcall **)(WPF::HeapBase *, wil::details::registry_watcher_state *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
