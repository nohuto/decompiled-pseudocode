/*
 * XREFs of wil::details::lambda_call__lambda_b70c1c25b8503a2b193b1a3094de3d4b___::_lambda_call__lambda_b70c1c25b8503a2b193b1a3094de3d4b___ @ 0x18009A984
 * Callers:
 *     ?EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUIViewGroup@@PEAPEAU2@@Z @ 0x18033CE94 (-EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabG.c)
 *     _CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup_::_1_::dtor$3 @ 0x18033D27C (_CDesktopPositioner--EnsureViewIsInViewGroupForTabGroup_--_1_--dtor$3.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::lambda_call__lambda_b70c1c25b8503a2b193b1a3094de3d4b___::_lambda_call__lambda_b70c1c25b8503a2b193b1a3094de3d4b___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[16] )
  {
    a1[16] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 328LL) + 32LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 328LL),
           **((_QWORD **)a1 + 1));
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        2849LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v1);
  }
}
