/*
 * XREFs of ??0CDwmAppHost@@QEAA@XZ @ 0x1400029F0
 * Callers:
 *     _dynamic_initializer_for__g_dwmAppHost__ @ 0x140001000 (_dynamic_initializer_for__g_dwmAppHost__.c)
 * Callees:
 *     memset_0 @ 0x140003C76 (memset_0.c)
 */

CDwmAppHost *__fastcall CDwmAppHost::CDwmAppHost(CDwmAppHost *this)
{
  HANDLE CurrentProcess; // rax
  _BYTE ProcessInformation[40]; // [rsp+30h] [rbp-38h] BYREF
  int v4; // [rsp+58h] [rbp-10h]

  byte_14000B870 = 1;
  qword_14000B830 = 0LL;
  *(_OWORD *)&g_dwmAppHost = 0LL;
  dword_14000B838 = 0;
  hWnd = 0LL;
  qword_14000B858[0] = (__int64)&CSettingsManager::`vftable';
  dword_14000B888 = 0;
  InitializeSRWLock(&SRWLock);
  *(_QWORD *)&uExitCode = 0LL;
  word_14000B8A0 = 0;
  memset_0(ProcessInformation, 0, 0x30uLL);
  qword_14000B848 = 0LL;
  qword_14000B850 = 0LL;
  CurrentProcess = GetCurrentProcess();
  if ( NtQueryInformationProcess(CurrentProcess, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL) >= 0 )
    LODWORD(qword_14000B830) = v4;
  return (CDwmAppHost *)&g_dwmAppHost;
}
