/*
 * XREFs of NtUserRegisterErrorReportingDialog @ 0x1C01F3F70
 * Callers:
 *     <none>
 * Callees:
 *     _RegisterErrorReportingDialog @ 0x1C01BFD60 (_RegisterErrorReportingDialog.c)
 */

__int64 __fastcall NtUserRegisterErrorReportingDialog(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v7 = 0;
  if ( v2 )
    v7 = RegisterErrorReportingDialog(v2);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
