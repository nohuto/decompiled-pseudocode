/*
 * XREFs of ?SetObject@?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@AEAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1802CDF5C
 * Callers:
 *     ??0?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1802C1A3C (--0-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@P.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18004E49C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802B3920 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?Release@?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAXXZ @ 0x1802CD184 (-Release@-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Windo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::SetObject(
        __int64 a1,
        unsigned int (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  Platform::Details *v4; // rcx
  struct IUnknown *ObjectContext; // rax
  HRESULT ContextToken; // eax
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Release(a1);
  if ( a2 )
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    if ( (**a2)(a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, &v8) )
    {
      *(_DWORD *)(a1 + 24) = 0;
      ObjectContext = Platform::Details::GetObjectContext(v4);
      Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)(a1 + 8), (__int64)ObjectContext);
      ContextToken = CoGetContextToken((ULONG_PTR *)(a1 + 16));
      if ( ContextToken < 0 )
        __abi_WinRTraiseException(ContextToken);
    }
    else
    {
      *(_DWORD *)(a1 + 24) = 1;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  }
  return __abi_winrt_ptr_assign((__int64 *)a1, (__int64)a2);
}
