/*
 * XREFs of ?BoostShellPriority@ViewEventDispatcher@@QEAAXW4BoostOptions@1@@Z @ 0x180289B2C
 * Callers:
 *     ?BoostPriority@ViewWrapperBase@@UEAAJXZ @ 0x1802B65F0 (-BoostPriority@ViewWrapperBase@@UEAAJXZ.c)
 * Callees:
 *     ??$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z @ 0x18001DA10 (--$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BoostUnboostSiHostProcess@ViewEventDispatcher@@AEAAX_N@Z @ 0x180289BD4 (-BoostUnboostSiHostProcess@ViewEventDispatcher@@AEAAX_N@Z.c)
 */

void __fastcall ViewEventDispatcher::BoostShellPriority(RTL_SRWLOCK *a1, int a2)
{
  RTL_SRWLOCK *v2; // rdi
  int *v5; // rcx
  HANDLE CurrentProcess; // rax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char ProcessInformation; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1 + 35;
  AcquireSRWLockExclusive(a1 + 35);
  v5 = (int *)&a1[68];
  if ( !a2 )
    ++*(_QWORD *)v5;
  ViewManagerInteropTraceLogging::ShellPriorityChanged<unsigned __int64 &>(v5);
  ProcessInformation = 1;
  CurrentProcess = GetCurrentProcess();
  v7 = NtSetInformationProcess(CurrentProcess, ProcessForegroundInformation, &ProcessInformation, 1u) | 0x10000000;
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC81,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v7);
  ViewEventDispatcher::BoostUnboostSiHostProcess((ViewEventDispatcher *)a1, 1);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
