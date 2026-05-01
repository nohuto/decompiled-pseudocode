/*
 * XREFs of ?__abi_Windows_UI_Xaml_IApplication____abi_set_RequestedTheme@?QIApplication@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJW4ApplicationTheme@234@@Z @ 0x1802DA360
 * Callers:
 *     ?__abi_Windows_UI_Xaml_IApplication____abi_set_RequestedTheme@?QIApplication@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@W7E$AAAJW4ApplicationTheme@234@@Z @ 0x1800DDB80 (-__abi_Windows_UI_Xaml_IApplication____abi_set_RequestedTheme@-QIApplication@Xaml@UI@Windows@@Xa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1?$VectorViewIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Platform@@QEAA@XZ @ 0x1802498F0 (--1-$VectorViewIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collec.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___abi_Windows_UI_Xaml_IApplication____abi_set_RequestedTheme__QIApplication_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAJW4ApplicationTheme_234__Z(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  if ( *(_BYTE *)(a1 + 240) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  v5 = 0LL;
  v3 = (***(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 56))(
         *(_QWORD *)(a1 + 56),
         &_uuidof__AUIApplication_Xaml_UI_Windows__,
         &v5);
  if ( !v3 )
  {
    v6 = v5;
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 80LL))(v5, a2);
    Platform::Collections::VectorViewIterator<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::~VectorViewIterator<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>(&v6);
  }
  return v3;
}
