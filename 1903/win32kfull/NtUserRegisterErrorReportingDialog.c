/*
 * XREFs of NtUserRegisterErrorReportingDialog @ 0x1C02337B0
 * Callers:
 *     <none>
 * Callees:
 *     _RegisterErrorReportingDialog @ 0x1C01F96A0 (_RegisterErrorReportingDialog.c)
 */

__int64 __fastcall NtUserRegisterErrorReportingDialog(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0;
  if ( v2 )
    v4 = RegisterErrorReportingDialog(v2);
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
