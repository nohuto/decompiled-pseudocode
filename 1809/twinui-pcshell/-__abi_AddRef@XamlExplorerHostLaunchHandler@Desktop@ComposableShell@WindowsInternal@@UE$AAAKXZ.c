/*
 * XREFs of ?__abi_AddRef@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x18025CF80
 * Callers:
 *     ?__abi_AddRef@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@W7E$AAAKXZ @ 0x1800A3630 (-__abi_AddRef@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@W7E$AAAKXZ.c)
 *     ?__abi_AddRef@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAKXZ @ 0x1800A3640 (-__abi_AddRef@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAKX.c)
 *     ?__abi_AddRef@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBI@E$AAAKXZ @ 0x1800A3650 (-__abi_AddRef@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBI@E$AAAKX.c)
 *     ?__abi_AddRef@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WCA@E$AAAKXZ @ 0x1800A3660 (-__abi_AddRef@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WCA@E$AAAKX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_AddRef(__int64 a1)
{
  return __abi_FTMWeakRefData::Increment(a1 + 40);
}
