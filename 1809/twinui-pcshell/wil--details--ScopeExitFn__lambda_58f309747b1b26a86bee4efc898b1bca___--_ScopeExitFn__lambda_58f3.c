/*
 * XREFs of wil::details::ScopeExitFn__lambda_58f309747b1b26a86bee4efc898b1bca___::_ScopeExitFn__lambda_58f309747b1b26a86bee4efc898b1bca___ @ 0x180090984
 * Callers:
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180225AF0 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 *     _WindowEventDispatcher::AppViewShowRequested_::_1_::dtor$5 @ 0x180225F36 (_WindowEventDispatcher--AppViewShowRequested_--_1_--dtor$5.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_58f309747b1b26a86bee4efc898b1bca___::_ScopeExitFn__lambda_58f309747b1b26a86bee4efc898b1bca___(
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
        1014LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v2);
  }
}
