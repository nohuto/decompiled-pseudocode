/*
 * XREFs of ??1SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAA@XZ @ 0x18026B2A8
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAKXZ @ 0x180279D10 (-__abi_Release@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShe_ea_180279D10.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@USwitchItemComparator@SwitchItemDataViewImpl@2345@V?$allocator@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x18027C1F0 (-erase@-$_Tree@V-$_Tmap_traits@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::~SwitchItemDataViewImpl(
        __int64 a1)
{
  void **v2; // rbx
  void **v3; // rdx
  __int64 v4; // rcx
  void **v5; // rdx
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = (void **)(a1 + 104);
  std::_Tree<std::_Tmap_traits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>,Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemComparator,std::allocator<std::pair<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * const,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>>>,0>>::erase(
    a1 + 104,
    &v6,
    **(_QWORD **)(a1 + 104));
  std::_Deallocate<16,0>(*v2, (const struct std::nothrow_t *)0x38);
  v4 = *(_QWORD *)(a1 + 88);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  Platform::Details::EventSourceUninitialize((Platform::Details *)(a1 + 64), v3);
  Platform::Details::EventSourceUninitialize((Platform::Details *)(a1 + 48), v5);
}
