/*
 * XREFs of ?OnShellHookMessage@TitleBarController@@UEAAJ_K_J@Z @ 0x180248EC0
 * Callers:
 *     _lambda_8c677c44027c68cbd42f9970f610ae83_::operator() @ 0x18024777C (_lambda_8c677c44027c68cbd42f9970f610ae83_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate@TitleBarController@@AEAAXPEAUIApplicationView@@_N@Z @ 0x180249D00 (-SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate@TitleBarController@@AEAAXPEAUIApplicationVi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TitleBarController::OnShellHookMessage(RTL_SRWLOCK *this)
{
  HWND ForegroundWindow; // rax
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v6; // [rsp+58h] [rbp+20h] BYREF

  ForegroundWindow = GetForegroundWindow();
  try
  {
    v3 = (const char *)ForegroundWindow;
    if ( !ForegroundWindow
      || (*(int (__fastcall **)(PVOID, _QWORD, int *))(*(_QWORD *)this[15].Ptr + 104LL))(
           this[15].Ptr,
           (unsigned int)ForegroundWindow,
           &v6) >= 0
      && (_BYTE)v6 )
    {
      result = 0LL;
    }
    else
    {
      AcquireSRWLockExclusive(this + 7);
      TitleBarController::SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate((TitleBarController *)&this[-3], 0LL, 1);
      if ( this != (RTL_SRWLOCK *)-56LL )
        ReleaseSRWLockExclusive(this + 7);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x233,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
                           v3);
  }
  return result;
}
