/*
 * XREFs of _Platform::IVector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1_::[Windows::Foundation::Collections::IVector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___]::RemoveAt_::_1_::catch$27 @ 0x1802E3D2C
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180087D7C (_CxxThrowException_0.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

void __fastcall __noreturn Platform::IVector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____1_::_Windows::Foundation::Collections::IVector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata____::RemoveAt_::_1_::catch_27(
        __int64 a1,
        __int64 a2)
{
  void *Exception; // rax
  __int64 v4; // rax

  Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
  *(_QWORD *)(a2 + 128) = Exception;
  v4 = Platform::OutOfMemoryException::OutOfMemoryException(Exception);
  *(_QWORD *)(a2 + 128) = v4;
  *(_QWORD *)(a2 + 32) = __abi_winrt_ptr_ctor(v4);
  throw (Platform::OutOfMemoryException **)(a2 + 32);
}
