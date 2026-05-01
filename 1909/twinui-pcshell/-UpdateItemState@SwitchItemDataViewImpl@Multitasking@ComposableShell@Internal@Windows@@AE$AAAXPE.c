/*
 * XREFs of ?UpdateItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPEAUDataViewItemState@12345@@Z @ 0x1802EF4F4
 * Callers:
 *     ?OnSwitchItemChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@W4SwitchItemProperty@2345@@Z @ 0x1802EC0C0 (-OnSwitchItemChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AA.c)
 *     ?ReevaluateItem@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x1802EC2EC (-ReevaluateItem@-QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows_ea_1802EC2EC.c)
 *     ?UpdateAllItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXXZ @ 0x1802EF47C (-UpdateAllItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE$AAUISwitchItem@1234@W4SwitchItemCollectionChangedEventType@1234@@Z @ 0x1802E1C14 (--0SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE.c)
 *     ?InternalEvaluateItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAA?AW4SwitchItemInclusion@2345@PE$AAUISwitchItem@2345@@Z @ 0x1802EA408 (-InternalEvaluateItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$A.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::UpdateItemState(
        _DWORD *a1,
        __int64 a2)
{
  int v4; // ebx
  __int64 result; // rax
  BOOL v6; // ebx
  void *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // r8

  v4 = *(_DWORD *)(a2 + 8);
  result = Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::InternalEvaluateItem(
             a1,
             *(_QWORD *)a2);
  if ( v4 != (_DWORD)result )
  {
    *(_DWORD *)(a2 + 8) = result;
    v6 = result != 0;
    v7 = Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
    v8 = Windows::Internal::ComposableShell::Multitasking::SwitchItemCollectionChangedEventArgs::SwitchItemCollectionChangedEventArgs(
           (__int64)v7,
           *(_QWORD *)a2,
           v6);
    v9 = __abi_winrt_ptr_ctor(v8);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v9 )
      v10 = v9 + 8;
    else
      v10 = 0LL;
    result = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 64LL))(
               a1,
               (unsigned __int64)(a1 + 4) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64),
               v10);
    if ( v9 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return result;
}
