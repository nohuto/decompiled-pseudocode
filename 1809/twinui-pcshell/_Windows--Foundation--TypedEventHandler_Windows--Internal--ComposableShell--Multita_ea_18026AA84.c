/*
 * XREFs of _Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::SwitchItemProperty_::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::SwitchItemProperty__Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl_void_(__cdecl_Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::_)(Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::SwitchItemProperty)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture @ 0x18026AA84
 * Callers:
 *     ??$?0VSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@P801234@E$AAAXPE$AAUISwitchItem@1234@W4SwitchItemProperty@1234@@Z@?$TypedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@W4SwitchItemProperty@2345@@Foundation@Windows@@QE$AAA@PE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@2@P834562@E$AAAXPE$AAUISwitchItem@4562@W4SwitchItemProperty@4562@@ZW4CallbackContext@Platform@@_N@Z @ 0x180265800 (--$-0VSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@P801234@E$AAAXPE$AAU.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x180270870 (-GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::SwitchItemProperty_::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::SwitchItemProperty__Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl_void____cdecl_Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::___Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::SwitchItemProperty____ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture(
        __int64 a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 WeakReference; // rdi

  *(_QWORD *)a1 = &off_18050A0E0;
  WeakReference = Platform::Details::IWeakReferenceSource::GetWeakReference((a2 + 32) & -(__int64)(a2 != 0));
  *(_QWORD *)(a1 + 8) = __abi_winrt_ptr_ctor(WeakReference);
  if ( WeakReference )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 16LL))(WeakReference);
  *(_OWORD *)(a1 + 16) = *a3;
  return a1;
}
