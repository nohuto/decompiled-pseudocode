/*
 * XREFs of wil::details::ScopeExitFn__lambda_c577331a9ba766756cc4398e468b6c9d___::_ScopeExitFn__lambda_c577331a9ba766756cc4398e468b6c9d___ @ 0x1803515F8
 * Callers:
 *     _AccessibilityExperienceManager::_OnViewCreated_::_1_::dtor$2 @ 0x180354325 (_AccessibilityExperienceManager--_OnViewCreated_--_1_--dtor$2.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_c577331a9ba766756cc4398e468b6c9d___::_ScopeExitFn__lambda_c577331a9ba766756cc4398e468b6c9d___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)a1 + 392LL))(**(_QWORD **)a1, 0LL);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2DB,
        (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v1);
  }
}
