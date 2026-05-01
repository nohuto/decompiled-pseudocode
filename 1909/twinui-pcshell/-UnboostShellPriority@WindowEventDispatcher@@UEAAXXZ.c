/*
 * XREFs of ?UnboostShellPriority@WindowEventDispatcher@@UEAAXXZ @ 0x180075280
 * Callers:
 *     <none>
 * Callees:
 *     ??$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z @ 0x18001DA10 (--$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z.c)
 *     ?BoostUnboostSiHostProcess@WindowEventDispatcher@@AEAAX_N@Z @ 0x1800753B4 (-BoostUnboostSiHostProcess@WindowEventDispatcher@@AEAAX_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall WindowEventDispatcher::UnboostShellPriority(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  RTL_SRWLOCK *v3; // rbx
  char *Ptr; // rax
  HWND ForegroundWindow; // rax
  HANDLE CurrentProcess; // rax
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char ProcessInformation; // [rsp+30h] [rbp+8h] BYREF
  DWORD dwProcessId; // [rsp+38h] [rbp+10h] BYREF

  v1 = this + 55;
  AcquireSRWLockExclusive(this + 55);
  v3 = this + 57;
  Ptr = (char *)this[57].Ptr;
  if ( Ptr )
  {
    v3->Ptr = Ptr - 1;
    ViewManagerInteropTraceLogging::ShellPriorityChanged<unsigned __int64 &>((int *)&this[57]);
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
            (void *)0x6F6,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v7,
            v8);
      }
      WindowEventDispatcher::BoostUnboostSiHostProcess((WindowEventDispatcher *)&this[-2], 0);
    }
  }
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
