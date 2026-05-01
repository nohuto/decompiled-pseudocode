/*
 * XREFs of ?CreateInstance@__IVirtualDesktopBarElementViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVVirtualDesktopBarElementViewModel@2345@PE$AAUIVirtualDesktopDataSource@Multitasking@4Internal@Windows@@PE$AAUIVirtualDesktopController@849Windows@@W4SwitchItemCloseButtonBehavior@2345@VRect@Foundation@Windows@@@Z @ 0x18026F0BC
 * Callers:
 *     ??0VirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIVirtualDesktopDataSource@Multitasking@3Internal@Windows@@PE$AAUIVirtualDesktopController@6378@W4SwitchItemCloseButtonBehavior@1234@VRect@Foundation@8@@Z @ 0x18026A0E0 (--0VirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AA.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__IVirtualDesktopBarElementViewModelFactory::CreateInstance(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax

  v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, a2);
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  return __abi_winrt_ptr_ctor(0LL);
}
