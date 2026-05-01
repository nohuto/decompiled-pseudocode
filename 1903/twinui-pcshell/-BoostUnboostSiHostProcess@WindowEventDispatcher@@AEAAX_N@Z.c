/*
 * XREFs of ?BoostUnboostSiHostProcess@WindowEventDispatcher@@AEAAX_N@Z @ 0x180072884
 * Callers:
 *     ?UnboostShellPriority@WindowEventDispatcher@@UEAAXXZ @ 0x180072750 (-UnboostShellPriority@WindowEventDispatcher@@UEAAXXZ.c)
 *     ?BoostShellPriority@WindowEventDispatcher@@UEAAXW4BoostOptions@@@Z @ 0x1800727F0 (-BoostShellPriority@WindowEventDispatcher@@UEAAXW4BoostOptions@@@Z.c)
 * Callees:
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180275148 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall WindowEventDispatcher::BoostUnboostSiHostProcess(
        WindowEventDispatcher *this,
        char a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  void *v5; // rcx
  NTSTATUS v6; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char ProcessInformation; // [rsp+30h] [rbp+8h] BYREF

  v5 = (void *)*((_QWORD *)this + 58);
  if ( (((unsigned __int64)v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ProcessInformation = a2;
    v6 = NtSetInformationProcess(v5, ProcessForegroundInformation, &ProcessInformation, 1u);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_NtStatus(
        retaddr,
        (void *)0xB1D,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        v7);
  }
  else
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0xB14,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x8000FFFFLL,
      a5);
  }
}
