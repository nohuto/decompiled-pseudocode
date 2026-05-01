/*
 * XREFs of ?BoostShellPriority@WindowEventDispatcher@@UEAAXW4BoostOptions@@@Z @ 0x180075320
 * Callers:
 *     <none>
 * Callees:
 *     ??$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z @ 0x18001DA10 (--$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z.c)
 *     ?BoostUnboostSiHostProcess@WindowEventDispatcher@@AEAAX_N@Z @ 0x1800753B4 (-BoostUnboostSiHostProcess@WindowEventDispatcher@@AEAAX_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall WindowEventDispatcher::BoostShellPriority(RTL_SRWLOCK *a1, int a2)
{
  RTL_SRWLOCK *v2; // rdi
  int *v5; // rcx
  HANDLE CurrentProcess; // rax
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char ProcessInformation; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1 + 55;
  AcquireSRWLockExclusive(a1 + 55);
  v5 = (int *)&a1[57];
  if ( !a2 )
    ++*(_QWORD *)v5;
  ViewManagerInteropTraceLogging::ShellPriorityChanged<unsigned __int64 &>(v5);
  ProcessInformation = 1;
  CurrentProcess = GetCurrentProcess();
  v7 = NtSetInformationProcess(CurrentProcess, ProcessForegroundInformation, &ProcessInformation, 1u) | 0x10000000;
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6D6,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v7,
      v8);
  WindowEventDispatcher::BoostUnboostSiHostProcess((WindowEventDispatcher *)&a1[-2], 1);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
