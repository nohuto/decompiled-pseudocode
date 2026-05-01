/*
 * XREFs of ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x1802D9740
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@W7E$AAAKXZ @ 0x1800DD9D0 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@W.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAKXZ @ 0x1800DD9E0 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Windo_ea_1800DD9E0.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WCI@E$AAAKXZ @ 0x1800DD9F0 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Windo_ea_1800DD9F0.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEA@E$AAAKXZ @ 0x1800DDA00 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Windo_ea_1800DDA00.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEI@E$AAAKXZ @ 0x1800DDA10 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Windo_ea_1800DDA10.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WFA@E$AAAKXZ @ 0x1800DDA20 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Windo_ea_1800DDA20.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x1802D4384 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x1802D5508 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     ??1XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@AE$AAA@XZ @ 0x1802D6CFC (--1XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@AE$AAA@XZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAKXZ(
        __int64 a1)
{
  Platform::Details::ControlBlock **v1; // rsi
  unsigned int v3; // edi
  __int64 v4; // rcx
  Platform::Details::ControlBlock *v5; // rbx

  v1 = (Platform::Details::ControlBlock **)(a1 + 224);
  v3 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 224));
  if ( !v3 )
  {
    WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::~XamlExplorerHostApp(a1);
    v4 = *(_QWORD *)(a1 + 56);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    v5 = *v1;
    Platform::Details::ControlBlock::ReleaseTarget(*v1);
    Platform::Details::ControlBlock::__abi_Release(v5);
  }
  return v3;
}
