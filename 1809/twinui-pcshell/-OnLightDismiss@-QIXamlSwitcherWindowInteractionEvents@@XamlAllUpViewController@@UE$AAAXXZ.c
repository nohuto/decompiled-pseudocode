/*
 * XREFs of ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXXZ @ 0x18028A474
 * Callers:
 *     ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WBI@E$AAAXXZ @ 0x1800A5FA0 (-OnLightDismiss@-QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WBI@E$AAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     CreationThreadDispatcher::RunAsync__lambda_b62b7423e3f7d115cab3cf876a54b413___ @ 0x1802856B8 (CreationThreadDispatcher--RunAsync__lambda_b62b7423e3f7d115cab3cf876a54b413___.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _OnLightDismiss__QIXamlSwitcherWindowInteractionEvents__XamlAllUpViewController__UE_AAAXXZ(__int64 a1)
{
  __int64 WeakReference; // rax
  __int64 v3; // rbx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h]

  WeakReference = Platform::Details::GetWeakReference(a1);
  v3 = WeakReference;
  v7 = WeakReference;
  v6 = WeakReference;
  if ( WeakReference )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 8LL))(WeakReference);
  v4 = CreationThreadDispatcher::RunAsync__lambda_b62b7423e3f7d115cab3cf876a54b413___(
         *(_QWORD *)(a1 + 88),
         (volatile int *)&v6);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      408LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
