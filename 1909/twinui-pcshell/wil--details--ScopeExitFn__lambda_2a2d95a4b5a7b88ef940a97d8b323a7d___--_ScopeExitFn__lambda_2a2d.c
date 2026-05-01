/*
 * XREFs of wil::details::ScopeExitFn__lambda_2a2d95a4b5a7b88ef940a97d8b323a7d___::_ScopeExitFn__lambda_2a2d95a4b5a7b88ef940a97d8b323a7d___ @ 0x18042FB78
 * Callers:
 *     _CSingleViewShellExperience::OnViewCreatedBase_::_1_::dtor$0 @ 0x1800E94D9 (_CSingleViewShellExperience--OnViewCreatedBase_--_1_--dtor$0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1804300B8 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_2a2d95a4b5a7b88ef940a97d8b323a7d___::_ScopeExitFn__lambda_2a2d95a4b5a7b88ef940a97d8b323a7d___(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    v1 = CSingleViewShellExperience::DestroyView(*(CSingleViewShellExperience **)a1);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x19B,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v1);
  }
}
