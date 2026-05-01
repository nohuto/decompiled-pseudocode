/*
 * XREFs of wil::details::ScopeExitFn__lambda_83c9e190a1f0206c0193bcefea34c3f2___::_ScopeExitFn__lambda_83c9e190a1f0206c0193bcefea34c3f2___ @ 0x1800A7870
 * Callers:
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18029AAF0 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 *     _WindowEventDispatcher::AppViewShowRequested_::_1_::dtor$7 @ 0x18029AFF2 (_WindowEventDispatcher--AppViewShowRequested_--_1_--dtor$7.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_83c9e190a1f0206c0193bcefea34c3f2___::_ScopeExitFn__lambda_83c9e190a1f0206c0193bcefea34c3f2___(
        __int64 a1)
{
  _QWORD *v1; // rax
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_QWORD **)a1;
    *(_BYTE *)(a1 + 8) = 0;
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v1 + 24LL))(*v1, 2147500037LL);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x416,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v2);
  }
}
