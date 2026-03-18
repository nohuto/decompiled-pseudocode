/*
 * XREFs of ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140001F30
 * Callers:
 *     WinMain @ 0x140001960 (WinMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400017A0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x140002060 (-ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x140002200 (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x1400023F0 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 *     _Init_thread_footer @ 0x1400034B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x140003518 (_Init_thread_header.c)
 *     IsRegisterHotKeyPresent @ 0x140004378 (IsRegisterHotKeyPresent.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x140004768 (IsDWMGhostHandleGhostMsgPresent.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140005848 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 */

__int64 __fastcall CDwmAppHost::Initialize(CDwmAppHost *this, HINSTANCE a2, __int64 a3, __int64 a4)
{
  CDwmAppHost *v5; // rcx
  int v6; // ebx
  CDwmAppHost *v7; // rcx
  __int64 v8; // rcx
  signed int LastError; // eax
  signed int v11; // eax
  unsigned __int64 v12; // rcx
  const unsigned __int16 *v13; // [rsp+20h] [rbp-18h]

  if ( dword_140010A48 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) )
  {
    Init_thread_header(&dword_140010A48, 4LL, a3, a4);
    if ( dword_140010A48 == -1 )
    {
      dword_140010988 = -2147024348;
      Init_thread_footer(&dword_140010A48);
    }
  }
  g_dwmAppHost = a2;
  HIDWORD(qword_1400109B0) = GetCurrentThreadId();
  CSettingsManager::RefreshPreferencesAndPolicies((CSettingsManager *)qword_1400109D8);
  v6 = CDwmAppHost::InitializeWindow(v5);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140010988, 1u, v6, 0x22u);
    return (unsigned int)v6;
  }
  v6 = DwmInitializePort(CDwmAppHost::s_LpcCommandHandler, &g_dwmAppHost + 1, &dword_1400109B8);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140010988, 1u, v6, 0x25u);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140010988, 1u, v6, 0x28u);
  }
  if ( v6 < 0 )
  {
    CDwmAppHost::ReportEventWithDword(v7, 1u, 0xC0002344, v6);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140010988, 1u, v6, 0x34u);
    return (unsigned int)v6;
  }
  CDwmAppHost::ReportEventW(v7, 4u, 0x40002343u, 0LL, v13);
  if ( (unsigned __int8)IsDWMGhostHandleGhostMsgPresent() )
  {
    DWMGhostInitialize();
    *(&uExitCode + 1) = 1;
  }
  if ( (unsigned __int8)IsRegisterHotKeyPresent(v8) && !RegisterHotKey(hwnd, 0, 0x400Eu, 0x42u) )
  {
    v11 = GetLastError();
    v12 = (unsigned int)v11;
    if ( v11 > 0 )
      v12 = (unsigned __int16)v11 | 0x80070000;
    CDwmAppHost::ReportEventWithDword((CDwmAppHost *)v12, 2u, 0x8000234B, v12);
  }
  return 0LL;
}
