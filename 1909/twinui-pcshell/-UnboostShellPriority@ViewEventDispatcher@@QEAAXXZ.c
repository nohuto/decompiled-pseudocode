/*
 * XREFs of ?UnboostShellPriority@ViewEventDispatcher@@QEAAXXZ @ 0x180290978
 * Callers:
 *     ?UnboostPriority@ViewWrapperBase@@UEAAJXZ @ 0x1802BA9E0 (-UnboostPriority@ViewWrapperBase@@UEAAJXZ.c)
 * Callees:
 *     ??$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z @ 0x18001DA10 (--$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BoostUnboostSiHostProcess@ViewEventDispatcher@@AEAAX_N@Z @ 0x180289BD4 (-BoostUnboostSiHostProcess@ViewEventDispatcher@@AEAAX_N@Z.c)
 */

void __fastcall ViewEventDispatcher::UnboostShellPriority(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  RTL_SRWLOCK *v3; // rbx
  char *Ptr; // rax
  HWND ForegroundWindow; // rax
  HANDLE CurrentProcess; // rax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char ProcessInformation; // [rsp+30h] [rbp+8h] BYREF
  DWORD dwProcessId; // [rsp+38h] [rbp+10h] BYREF

  v1 = this + 35;
  AcquireSRWLockExclusive(this + 35);
  v3 = this + 68;
  Ptr = (char *)this[68].Ptr;
  if ( Ptr )
  {
    v3->Ptr = Ptr - 1;
    ViewManagerInteropTraceLogging::ShellPriorityChanged<unsigned __int64 &>((int *)&this[68]);
    if ( !v3->Ptr )
    {
      ForegroundWindow = GetForegroundWindow();
      if ( !GetWindowThreadProcessId(ForegroundWindow, &dwProcessId) || dwProcessId != GetCurrentProcessId() )
      {
        ProcessInformation = 0;
        CurrentProcess = GetCurrentProcess();
        v7 = NtSetInformationProcess(CurrentProcess, ProcessForegroundInformation, &ProcessInformation, 1u) | 0x10000000;
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xCA0,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)v7);
      }
      ViewEventDispatcher::BoostUnboostSiHostProcess((ViewEventDispatcher *)this, 0);
    }
  }
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
