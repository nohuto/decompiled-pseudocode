/*
 * XREFs of ??0SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE$AAUISwitchItem@1234@W4SwitchItemCollectionChangedEventType@1234@@Z @ 0x1802C26E4
 * Callers:
 *     ?AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x1802C6548 (-AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$A.c)
 *     ?OnSourceCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItemDataSource@2345@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@Z @ 0x1802CCA50 (-OnSourceCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@.c)
 *     ?RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x1802CD5E4 (-RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXP.c)
 *     ?UpdateItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPEAUDataViewItemState@12345@@Z @ 0x1802D0004 (-UpdateItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1802B4450 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemCollectionChangedEventArgs::SwitchItemCollectionChangedEventArgs(
        __int64 a1,
        __int64 a2,
        int a3)
{
  Platform::Object::Object(a1 + 16);
  *(_QWORD *)a1 = &Windows::Internal::ComposableShell::Multitasking::SwitchItemCollectionChangedEventArgs::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::__ISwitchItemCollectionChangedEventArgsPublicNonVirtuals'};
  *(_QWORD *)(a1 + 8) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemCollectionChangedEventArgs::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs'};
  *(_QWORD *)(a1 + 16) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemCollectionChangedEventArgs::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 24) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemCollectionChangedEventArgs::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 32) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemCollectionChangedEventArgs::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  __abi_FTMWeakRefData::__abi_FTMWeakRefData(a1 + 56);
  *(_QWORD *)(a1 + 40) = __abi_winrt_ptr_ctor(a2);
  *(_DWORD *)(a1 + 48) = a3;
  return a1;
}
