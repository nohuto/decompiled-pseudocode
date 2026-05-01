/*
 * XREFs of ?get@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@ZOrderSort@SwitchItemDataViewImpl@2345@UE$AAAPE$AAUISwitchItemSort@2345@XZ @ 0x18027C6F0
 * Callers:
 *     ?get@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@ZOrderSort@SwitchItemDataViewImpl@2345@WBA@E$AAAPE$AAUISwitchItemSort@2345@XZ @ 0x1800A5CE0 (-get@-QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@ZOrderSort@SwitchIte.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAUISwitchItem@3456@XZ @ 0x18027C7EC (-get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@U.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _get__QISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__ZOrderSort_SwitchItemDataViewImpl_2345_UE_AAAPE_AAUISwitchItemSort_2345_XZ(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rdi

  v1 = *(_QWORD *)(a1 + 88);
  if ( !v1 )
    return 0LL;
  v2 = Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs::Item::get(v1);
  v3 = __abi_winrt_ptr_ctor(v2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return v3;
}
