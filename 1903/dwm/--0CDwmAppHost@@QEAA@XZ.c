/*
 * XREFs of ??0CDwmAppHost@@QEAA@XZ @ 0x140002120
 * Callers:
 *     _dynamic_initializer_for__g_dwmAppHost__ @ 0x140001000 (_dynamic_initializer_for__g_dwmAppHost__.c)
 * Callees:
 *     memset_0 @ 0x1400040EC (memset_0.c)
 */

CDwmAppHost *__fastcall CDwmAppHost::CDwmAppHost(CDwmAppHost *this)
{
  HANDLE CurrentProcess; // rax
  _BYTE ProcessInformation[40]; // [rsp+30h] [rbp-38h] BYREF
  int v4; // [rsp+58h] [rbp-10h]

  byte_1400109F0 = 1;
  qword_1400109B0 = 0LL;
  *(_OWORD *)&g_dwmAppHost = 0LL;
  dword_1400109B8 = 0;
  hwnd = 0LL;
  qword_1400109D8[0] = (__int64)&CSettingsManager::`vftable';
  qword_140010A00 = 0LL;
  dword_140010A08 = 0;
  *(_QWORD *)&uExitCode = 0LL;
  byte_140010A20 = 0;
  qword_140010A28 = 0LL;
  byte_140010A30 = 0;
  dword_140010A34 = 3000;
  qword_140010A38 = 0LL;
  word_140010A40 = 0;
  memset_0(ProcessInformation, 0, 0x30uLL);
  qword_1400109C8 = 0LL;
  qword_1400109D0 = 0LL;
  CurrentProcess = GetCurrentProcess();
  if ( NtQueryInformationProcess(CurrentProcess, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL) >= 0 )
    LODWORD(qword_1400109B0) = v4;
  return (CDwmAppHost *)&g_dwmAppHost;
}
