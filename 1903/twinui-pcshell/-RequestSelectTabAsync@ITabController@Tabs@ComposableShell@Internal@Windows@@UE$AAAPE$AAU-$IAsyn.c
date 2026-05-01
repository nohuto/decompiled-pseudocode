/*
 * XREFs of ?RequestSelectTabAsync@ITabController@Tabs@ComposableShell@Internal@Windows@@UE$AAAPE$AAU?$IAsyncOperation@_N@Foundation@5@PE$AAVShellTabGroup@2345@PE$AAVShellTab@2345@@Z @ 0x1802ED820
 * Callers:
 *     _lambda_152963d5211cf6149a80abe334e76dfa_::operator() @ 0x1802ECAC4 (_lambda_152963d5211cf6149a80abe334e76dfa_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802B3920 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComposableShell::Tabs::ITabController::RequestSelectTabAsync(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // eax
  __int64 v4; // rbx
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)a1 + 144LL))(a1, a2, a3, &v6);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  v4 = __abi_winrt_ptr_ctor(v6);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v4;
}
