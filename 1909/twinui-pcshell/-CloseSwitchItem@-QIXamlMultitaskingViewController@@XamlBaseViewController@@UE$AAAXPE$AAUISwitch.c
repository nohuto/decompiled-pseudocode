/*
 * XREFs of ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18030C6A8
 * Callers:
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1800DF6C0 (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwitc.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_95ea086e3b8fa056e55a3a293b600f83___ @ 0x18030AB28 (CreationThreadDispatcher--RunAsync__lambda_95ea086e3b8fa056e55a3a293b600f83___.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall _CloseSwitchItem__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r14
  int v6; // eax
  _QWORD v7[8]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = __abi_winrt_ptr_ctor(a2);
  v4 = __abi_winrt_ptr_ctor(v3);
  v7[2] = v4;
  v5 = __abi_winrt_ptr_ctor(a1);
  v7[3] = v5;
  v7[0] = __abi_winrt_ptr_ctor(v4);
  v7[1] = __abi_winrt_ptr_ctor(v5);
  v6 = CreationThreadDispatcher::RunAsync__lambda_95ea086e3b8fa056e55a3a293b600f83___(
         *(_QWORD *)(a1 + 80),
         (volatile int *)v7);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      116LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlbaseviewcontroller.cpp",
      (const char *)(unsigned int)v6);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
