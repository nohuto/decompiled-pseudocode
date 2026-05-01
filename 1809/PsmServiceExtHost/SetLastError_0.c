/*
 * XREFs of SetLastError_0 @ 0x1800487AC
 * Callers:
 *     ?UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z @ 0x1800748BC (-UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall SetLastError_0(DWORD dwErrCode)
{
  SetLastError(dwErrCode);
}
