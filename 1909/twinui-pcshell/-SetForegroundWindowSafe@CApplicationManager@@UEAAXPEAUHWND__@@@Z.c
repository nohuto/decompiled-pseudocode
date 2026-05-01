/*
 * XREFs of ?SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1801371E0
 * Callers:
 *     <none>
 * Callees:
 *     CDelayIAMOperations::AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___ @ 0x18012954C (CDelayIAMOperations--AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___.c)
 *     _lambda_962fc89a5bac582bde0e3fc2d93f2aaa_::operator() @ 0x18012E0B8 (_lambda_962fc89a5bac582bde0e3fc2d93f2aaa_--operator().c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x18013379C (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 */

void __fastcall CApplicationManager::SetForegroundWindowSafe(int **this, CApplicationManagerUtility *a2)
{
  DWORD WindowThreadProcessId; // ebx
  CApplicationManagerUtility *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  if ( CIAMGlobals::IsCalledOnIAMThread((CIAMGlobals *)this)
    || (WindowThreadProcessId = GetWindowThreadProcessId((HWND)a2, 0LL), WindowThreadProcessId == GetCurrentThreadId()) )
  {
    CDelayIAMOperations::AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___(this[70], (HWND)&v5);
  }
  else
  {
    lambda_962fc89a5bac582bde0e3fc2d93f2aaa_::operator()(&v5);
  }
}
