/*
 * XREFs of _Platform::IVector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64__1_::[Windows::Foundation::Collections::IVector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_]::RemoveAt_::_1_::catch$28 @ 0x18027408F
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn Platform::IVector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64_std::equal_to_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64__1_::_Windows::Foundation::Collections::IVector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64__::RemoveAt_::_1_::catch_28(
        __int64 a1,
        __int64 a2)
{
  void *Exception; // rax
  __int64 v4; // rax

  Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
  *(_QWORD *)(a2 + 128) = Exception;
  v4 = Platform::FailureException::FailureException(Exception);
  *(_QWORD *)(a2 + 128) = v4;
  *(_QWORD *)(a2 + 40) = __abi_winrt_ptr_ctor(v4);
  throw (Platform::FailureException **)(a2 + 40);
}
