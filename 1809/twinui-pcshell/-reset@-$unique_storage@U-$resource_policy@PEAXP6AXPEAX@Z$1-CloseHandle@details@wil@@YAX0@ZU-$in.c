/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800E26D8
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800DE818 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800DE994 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1800DED18 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x1800DF06C (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800E7C04 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x180183758 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregist_ea_180183758.c)
 *     _wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_____ptr64______ptr64__::_2_::CompletionDelegate::RuntimeClassInitialize @ 0x18018CFFC (_wil--details--WaitForCompletion_Windows--Foundation--IAsyncOperation_Windows--Devi_ea_18018CFFC.c)
 *     ??0?$event_t@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@Uerr_exception_policy@2@@wil@@QEAA@W4EventOptions@1@@Z @ 0x180194344 (--0-$event_t@V-$unique_any_t@V-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-Cl.c)
 *     _lambda_5685b7785c3a9eb18aecd9c477002c42_::_lambda_invoker_cdecl_ @ 0x1801FB310 (_lambda_5685b7785c3a9eb18aecd9c477002c42_--_lambda_invoker_cdecl_.c)
 *     ?GetEventByChangeCount@Details@WindowPropertyHelpers@@YAJPEAUHWND__@@JAEAV?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@Z @ 0x1801FF0BC (-GetEventByChangeCount@Details@WindowPropertyHelpers@@YAJPEAUHWND__@@JAEAV-$unique_any_t@V-$even.c)
 *     ?SetupAppSpecifiedIconsForView@DefaultIconManager@@UEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180200150 (-SetupAppSpecifiedIconsForView@DefaultIconManager@@UEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs.c)
 *     ?TrySubscribePropertiesChangedEvent@WindowPropertyChangedListener@@AEAA_NXZ @ 0x180200730 (-TrySubscribePropertiesChangedEvent@WindowPropertyChangedListener@@AEAA_NXZ.c)
 *     ??0WindowGroupManager@@QEAA@PEAUIPrivilegedWindowGroupingOperations@@@Z @ 0x1802042B0 (--0WindowGroupManager@@QEAA@PEAUIPrivilegedWindowGroupingOperations@@@Z.c)
 *     ?RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z @ 0x1802347A4 (-RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z.c)
 *     ?RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z @ 0x18024AD44 (-RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z.c)
 *     ?create@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJ$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x1802BE8E0 (-create@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@w.c)
 *     ??0AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18039A3A8 (--0AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ?HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z @ 0x18039AD1C (-HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z.c)
 *     ?CreateComponentEventHandles@ViewEventHandlers@OneCore@Internal@Windows@@YAJW4_CUI_VIEW_EVENT_TYPE@@IIW4EventOptions@wil@@PEAPEAX@Z @ 0x1803A4E68 (-CreateComponentEventHandles@ViewEventHandlers@OneCore@Internal@Windows@@YAJW4_CUI_VIEW_EVENT_TY.c)
 *     ?GetComponentEventHandles@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIKPEAPEAX@Z @ 0x1803A5360 (-GetComponentEventHandles@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@.c)
 *     ?GetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAPEAX@Z @ 0x1803A6260 (-GetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800DEBE0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        wil::details **a1,
        wil::details *a2)
{
  wil::details *v2; // rsi
  DWORD LastError; // ebx
  void *v6; // rdx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::CloseHandle(v2, v6);
    SetLastError(LastError);
  }
  *a1 = a2;
}
