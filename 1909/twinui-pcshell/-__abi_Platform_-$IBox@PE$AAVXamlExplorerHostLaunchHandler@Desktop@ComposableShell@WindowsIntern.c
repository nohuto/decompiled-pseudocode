/*
 * XREFs of ?__abi_Platform_?$IBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@____abi_get_Value@?Q?$IBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Platform@@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@2@UE$AAAJPEAPE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x1802D8C40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Platform___IBox_PE_AAVXamlExplorerHostLaunchHandler_Desktop_ComposableShell_WindowsInternal______abi_get_Value__Q__IBox_PE_AAVXamlExplorerHostLaunchHandler_Desktop_ComposableShell_WindowsInternal___Platform____CustomBox_PE_AAVXamlExplorerHostLaunchHandler_Desktop_ComposableShell_WindowsInternal___Details_2_UE_AAAJPEAPE_AAVXamlExplorerHostLaunchHandler_Desktop_ComposableShell_WindowsInternal___Z(
        _BYTE *a1,
        _QWORD *a2)
{
  if ( a1[72] )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  try
  {
    *a2 = 0LL;
    *a2 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 56LL))(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
