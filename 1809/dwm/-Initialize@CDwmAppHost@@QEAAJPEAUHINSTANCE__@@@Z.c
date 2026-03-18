/*
 * XREFs of ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140001E20
 * Callers:
 *     WinMain @ 0x140001890 (WinMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001690 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x140001F30 (-ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x140001FF0 (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x1400021E0 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 *     _Init_thread_footer @ 0x1400032B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x140003318 (_Init_thread_header.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x140004064 (IsDWMGhostHandleGhostMsgPresent.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140004F68 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 */

__int64 __fastcall CDwmAppHost::Initialize(CDwmAppHost *this, HINSTANCE a2, __int64 a3, __int64 a4)
{
  CDwmAppHost *v5; // rcx
  int v6; // ebx
  CDwmAppHost *v7; // rcx
  signed int LastError; // eax
  const unsigned __int16 *v10; // [rsp+20h] [rbp-18h]

  if ( dword_14000B8A8 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) )
  {
    Init_thread_header(&dword_14000B8A8, 4LL, a3, a4);
    if ( dword_14000B8A8 == -1 )
    {
      dword_14000B81C = -2147024348;
      Init_thread_footer(&dword_14000B8A8);
    }
  }
  g_dwmAppHost = a2;
  HIDWORD(qword_14000B830) = GetCurrentThreadId();
  CSettingsManager::RefreshPreferencesAndPolicies((CSettingsManager *)qword_14000B858);
  v6 = CDwmAppHost::InitializeWindow(v5);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000B81C, 1u, v6, 0x20u);
    return (unsigned int)v6;
  }
  v6 = DwmInitializePort(CDwmAppHost::s_LpcCommandHandler, &g_dwmAppHost + 1, &dword_14000B838);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000B81C, 1u, v6, 0x23u);
    return (unsigned int)v6;
  }
  SetLastError(0);
  if ( !(unsigned int)RegisterSessionPort(*(&g_dwmAppHost + 1)) )
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    if ( v6 >= 0 )
      v6 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000B81C, 1u, v6, 0x26u);
  }
  if ( v6 < 0 )
  {
    CDwmAppHost::ReportEventWithDword(v7, 1u, 0xC0002344, v6);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000B81C, 1u, v6, 0x32u);
    return (unsigned int)v6;
  }
  CDwmAppHost::ReportEventW(v7, 4u, 0x40002343u, 0LL, v10);
  if ( (unsigned __int8)IsDWMGhostHandleGhostMsgPresent() )
  {
    DWMGhostInitialize();
    *(&uExitCode + 1) = 1;
  }
  return 0LL;
}
