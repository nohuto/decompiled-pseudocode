/*
 * XREFs of ?RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x18027426C
 * Callers:
 *     ?OnSourceCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItemDataSource@2345@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@Z @ 0x180273710 (-OnSourceCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@.c)
 *     ?SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x1802747B0 (-SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$A.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$find@PEAUIWin32ApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBQEAUIWin32ApplicationView@@@Z @ 0x18008E57C (--$find@PEAUIWin32ApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE$AAUISwitchItem@1234@W4SwitchItemCollectionChangedEventType@1234@@Z @ 0x1802695FC (--0SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@USwitchItemComparator@SwitchItemDataViewImpl@2345@V?$allocator@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18027C294 (-erase@-$_Tree@V-$_Tmap_traits@PE$AAUISwitchItem@Multitasking@ComposableShell@Inter_ea_18027C294.c)
 */

// Hidden C++ exception states: #wind=4
__int64 **__fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::RemoveSwitchItem(
        __int64 **a1,
        __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 **result; // rax
  __int64 **v5; // r10
  int v6; // ebx
  __int64 *v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // r8
  __int64 *v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v3 = __abi_winrt_ptr_ctor(a2);
  v11 = v3;
  result = std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::find<IWin32ApplicationView *,std::less<void>,int>(
             a1 + 13,
             &v10,
             &v11);
  if ( v10 != *v5 )
  {
    v6 = *(_DWORD *)(v10[5] + 8);
    result = (__int64 **)std::_Tree<std::_Tmap_traits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>,Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemComparator,std::allocator<std::pair<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * const,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>>>,0>>::erase(
                           v5,
                           &v10);
    if ( !v6 )
    {
      v10 = (__int64 *)Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
      v7 = (__int64 *)Windows::Internal::ComposableShell::Multitasking::SwitchItemCollectionChangedEventArgs::SwitchItemCollectionChangedEventArgs(
                        (__int64)v10,
                        v3,
                        1);
      v8 = v7;
      v10 = v7;
      v9 = v7 ? (__int64)(v7 + 1) : 0LL;
      result = (__int64 **)((__int64 (__fastcall *)(__int64 **, _QWORD, __int64))(*a1)[8])(
                             a1,
                             (unsigned __int64)(a1 + 2) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64),
                             v9);
      if ( v8 )
        result = (__int64 **)(*(__int64 (__fastcall **)(__int64 *))(*v8 + 16))(v8);
    }
  }
  if ( v3 )
    return (__int64 **)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  return result;
}
