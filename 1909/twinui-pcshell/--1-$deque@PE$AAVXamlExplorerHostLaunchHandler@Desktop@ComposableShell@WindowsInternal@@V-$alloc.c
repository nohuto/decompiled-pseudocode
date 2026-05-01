/*
 * XREFs of ??1?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAA@XZ @ 0x1802D6BA8
 * Callers:
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::XamlExplorerHostApp_::_1_::dtor$4 @ 0x1802D6A78 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--XamlExplorerHostAp_ea_1802D6A78.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?pop_back@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAAXXZ @ 0x1802DAD74 (-pop_back@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V.c)
 */

void __fastcall std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::~deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(
        __int64 a1)
{
  __int64 v2; // rdi
  void *v3; // rcx
  void *v4; // rcx

  while ( *(_QWORD *)(a1 + 32) )
    std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::pop_back(a1);
  v2 = *(_QWORD *)(a1 + 16);
  while ( v2 )
  {
    --v2;
    v3 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * v2);
    if ( v3 )
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x10);
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
    std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a1 + 16)));
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  std::_Deallocate<16,0>(*(void **)a1, (const struct std::nothrow_t *)0x10);
  *(_QWORD *)a1 = 0LL;
}
