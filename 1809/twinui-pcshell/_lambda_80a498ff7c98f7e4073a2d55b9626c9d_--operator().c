/*
 * XREFs of _lambda_80a498ff7c98f7e4073a2d55b9626c9d_::operator() @ 0x1801F25F8
 * Callers:
 *     _lambda_cc438cded295d7f5aa1a2d545e8da4a6_::_lambda_invoker_cdecl_ @ 0x1801F23C0 (_lambda_cc438cded295d7f5aa1a2d545e8da4a6_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IsWindowEligibleForTabbing@@YA_NPEAUHWND__@@0@Z @ 0x1801F34DC (-IsWindowEligibleForTabbing@@YA_NPEAUHWND__@@0@Z.c)
 */

__int64 __fastcall lambda_80a498ff7c98f7e4073a2d55b9626c9d_::operator()(__int64 a1, HWND a2)
{
  __int64 v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD v8; // [rsp+40h] [rbp+18h] BYREF
  int v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  v9 = 1;
  if ( GetWindowThreadProcessId(a2, &v8) && v8 == **(_DWORD **)a1 && IsWindowEligibleForTabbing(a2, **(HWND **)(a1 + 8)) )
  {
    v4 = **(_QWORD **)(a1 + 16);
    if ( !v4 )
    {
LABEL_8:
      **(_QWORD **)(a1 + 24) = a2;
      return 0LL;
    }
    v5 = (*(__int64 (__fastcall **)(__int64, HWND, int *))(*(_QWORD *)v4 + 24LL))(v4, a2, &v9);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        57LL,
        (__int64)"internal\\onecoreuapshell\\private\\inc\\tabshellhelpers.h",
        (const char *)(unsigned int)v5);
      goto LABEL_8;
    }
    if ( v9 )
      goto LABEL_8;
  }
  return 1LL;
}
