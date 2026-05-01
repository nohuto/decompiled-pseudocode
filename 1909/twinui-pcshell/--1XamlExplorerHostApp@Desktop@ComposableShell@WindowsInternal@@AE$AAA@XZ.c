/*
 * XREFs of ??1XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@AE$AAA@XZ @ 0x1802D6CFC
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x1802D9740 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802D2E40 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802D2F28 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?pop_back@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAAXXZ @ 0x1802DAD74 (-pop_back@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::~XamlExplorerHostApp(__int64 a1)
{
  __int64 i; // rbx
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rbx
  int v9; // eax

  for ( i = a1 + 184;
        *(_QWORD *)(i + 32);
        std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::pop_back(i) )
  {
    ;
  }
  v3 = *(_QWORD *)(i + 16);
  while ( v3 )
  {
    --v3;
    v4 = *(void **)(*(_QWORD *)(i + 8) + 8 * v3);
    if ( v4 )
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)0x10);
  }
  v5 = *(void **)(i + 8);
  if ( v5 )
    std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)(8LL * *(_QWORD *)(i + 16)));
  *(_QWORD *)(i + 16) = 0LL;
  *(_QWORD *)(i + 8) = 0LL;
  std::_Deallocate<16,0>(*(void **)i, (const struct std::nothrow_t *)0x10);
  *(_QWORD *)i = 0LL;
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 104));
  v6 = *(_QWORD *)(a1 + 96);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 88));
  result = __abi_winrt_cast_to(
             1,
             *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(a1 + 56),
             (__int64)&_uuidof__AUIDisposable_Platform__);
  v8 = result;
  if ( result )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 48LL))(result);
    if ( v9 < 0 )
      __abi_WinRTraiseException(v9);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return result;
}
