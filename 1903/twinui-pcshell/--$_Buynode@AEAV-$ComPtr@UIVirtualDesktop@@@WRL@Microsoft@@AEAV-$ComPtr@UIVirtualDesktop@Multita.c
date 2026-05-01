/*
 * XREFs of ??$_Buynode@AEAV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@AEAV?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@?$_List_buy@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@PEAX@1@PEAU21@0AEAV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@AEAV?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@45@@Z @ 0x1803360C0
 * Callers:
 *     ??$emplace@AEAV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@AEAV?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@std@@_N@1@AEAV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@AEAV?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@45@@Z @ 0x1803364FC (--$emplace@AEAV-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@AEAV-$ComPtr@UIVirtualDesktop@Multitas.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@PEAX@2@PEAU32@0@Z @ 0x180338624 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBV-$ComPtr@UIVirtualDesktop@@@WRL@Micros.c)
 */

__int64 __fastcall std::_List_buy<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>::_Buynode<Microsoft::WRL::ComPtr<IVirtualDesktop> &,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop> &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v7; // [rsp+40h] [rbp+8h]

  v7 = std::_List_alloc<std::_List_base_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>::_Buynode0(a1);
  *(_QWORD *)(v7 + 16) = *a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v7 + 16));
  *(_QWORD *)(v7 + 24) = *a5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v7 + 24));
  return v7;
}
