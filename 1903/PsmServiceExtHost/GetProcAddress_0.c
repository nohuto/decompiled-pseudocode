/*
 * XREFs of GetProcAddress_0 @ 0x180048224
 * Callers:
 *     ?UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z @ 0x1800808C8 (-UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
FARPROC __stdcall GetProcAddress_0(HMODULE hModule, LPCSTR lpProcName)
{
  return GetProcAddress(hModule, lpProcName);
}
