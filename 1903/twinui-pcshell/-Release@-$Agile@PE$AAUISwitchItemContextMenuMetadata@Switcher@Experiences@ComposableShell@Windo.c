/*
 * XREFs of ?Release@?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAXXZ @ 0x1802CD184
 * Callers:
 *     ??1?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@XZ @ 0x1802C3EAC (--1-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@X.c)
 *     ?SetObject@?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@AEAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1802CDF5C (-SetObject@-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802B3920 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

void __fastcall Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Release(
        __int64 a1)
{
  Platform::Details *v1; // rdi
  HRESULT ContextToken; // eax
  struct IUnknown *v4; // r8
  __int64 v5; // rax
  __int64 *v6; // rsi
  struct IUnknown *v7; // rdx
  ULONG_PTR pToken; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(Platform::Details **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    ContextToken = CoGetContextToken(&pToken);
    if ( ContextToken < 0 )
      __abi_WinRTraiseException(ContextToken);
    v5 = *(_QWORD *)(a1 + 16);
    if ( v5 && (v6 = (__int64 *)(a1 + 8), (v7 = *(struct IUnknown **)(a1 + 8)) != 0LL) && v5 != pToken )
    {
      Platform::Details::ReleaseInContextImpl(v1, v7, v4);
    }
    else
    {
      (*(void (__fastcall **)(Platform::Details *))(*(_QWORD *)v1 + 16LL))(v1);
      v6 = (__int64 *)(a1 + 8);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v6);
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 2;
  }
}
