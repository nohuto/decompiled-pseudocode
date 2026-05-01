/*
 * XREFs of _lambda_962fc89a5bac582bde0e3fc2d93f2aaa_::operator() @ 0x18012E0B8
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___::operator() @ 0x18012E2E0 (CDelayIAMOperations--CDelayedOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___--operator().c)
 *     ?SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1801371E0 (-SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?CanChangeForeground@@YAJXZ @ 0x18006A8D0 (-CanChangeForeground@@YAJXZ.c)
 *     ?SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z @ 0x180140EFC (-SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z.c)
 */

__int64 __fastcall lambda_962fc89a5bac582bde0e3fc2d93f2aaa_::operator()(CApplicationManagerUtility **a1)
{
  __int64 result; // rax
  HWND v3; // rdx

  result = CanChangeForeground();
  if ( (int)result >= 0 )
    return CApplicationManagerUtility::SetForegroundWindow(*a1, v3);
  return result;
}
