/*
 * XREFs of ?VirtualDesktopInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z @ 0x18028AC84
 * Callers:
 *     ?VirtualDesktopInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z @ 0x1800A6010 (-VirtualDesktopInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     CreationThreadDispatcher::RunAsync__lambda_b6c581e8b051b8d7b55a0d96c6d35adf___ @ 0x1802857B4 (CreationThreadDispatcher--RunAsync__lambda_b6c581e8b051b8d7b55a0d96c6d35adf___.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _VirtualDesktopInvoked__QIXamlMultitaskingViewController__XamlAllUpViewController__UE_AAAXPE_AAUIVirtualDesktop_Multitasking_ComposableShell_Internal_Windows__0_Z(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 WeakReference; // rax
  __int64 v7; // rsi
  bool v8; // bl
  int v9; // eax
  __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  bool v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  bool v13; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  WeakReference = Platform::Details::GetWeakReference(a1);
  v7 = WeakReference;
  v12 = WeakReference;
  v8 = a2 == a3;
  v13 = v8;
  v10 = WeakReference;
  if ( WeakReference )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 8LL))(WeakReference);
  v11 = v8;
  v9 = CreationThreadDispatcher::RunAsync__lambda_b6c581e8b051b8d7b55a0d96c6d35adf___(
         *(_QWORD *)(a1 + 88),
         (volatile int *)&v10);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      205LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v9);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}
