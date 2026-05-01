/*
 * XREFs of ?add@VirtualDesktopCollectionChanged@IVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UE$AAA?AVEventRegistrationToken@Foundation@6@PE$AAV?$TypedEventHandler@PE$AAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIVirtualDesktopCollectionChangedEventArgs@2345@@86@@Z @ 0x1802F5050
 * Callers:
 *     ?Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x1802E9A80 (-Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802D2E40 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource::VirtualDesktopCollectionChanged::add(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  int v4; // eax

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a1 + 64LL))(a1, a3, a2);
  if ( v4 < 0 )
    __abi_WinRTraiseException(v4);
  return a2;
}
