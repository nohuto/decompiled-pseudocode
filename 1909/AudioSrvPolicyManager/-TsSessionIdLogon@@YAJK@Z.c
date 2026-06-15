/*
 * XREFs of ?TsSessionIdLogon@@YAJK@Z @ 0x180025D98
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180026F00 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180008704 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x1800244EC (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18002465C (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800250A4 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdLogon(DWORD a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v3; // eax
  unsigned int v4; // edi
  struct TSSession *v5; // rbx
  __int64 v6; // rdx
  unsigned int v7; // eax
  unsigned int v8; // eax
  _QWORD v10[2]; // [rsp+38h] [rbp-40h] BYREF
  unsigned int (__fastcall *v11)(void *, unsigned int, void *); // [rsp+48h] [rbp-30h] BYREF
  __int64 v12; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct TSSession *v14; // [rsp+88h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+90h] [rbp+18h]
  void *v16; // [rsp+98h] [rbp+20h] BYREF

  v14 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v15 = v2;
  v3 = TsSessionFromSessionId(a1, 1, &v16, &v14);
  v4 = v3;
  if ( v3 == 1168 )
  {
    v4 = 0;
  }
  else if ( !v3 )
  {
    v5 = v14;
    TsSessionRefreshSessionInformation(v14);
    v6 = *(unsigned int *)v5;
    if ( (_DWORD)v6 && !*((_QWORD *)v5 + 30) && !*((_QWORD *)v5 + 31) )
    {
      v10[0] = TsSessionIdDisplayNotificationCallback;
      v10[1] = v6;
      v7 = PowerSettingRegisterNotificationEx(&GUID_SESSION_DISPLAY_STATUS, v6, 2LL, v10, (char *)v5 + 240);
      if ( v7 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          (void *)0xEB,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)v7);
      v11 = TsSessionConsoleLockedNotificationCallback;
      v12 = *(unsigned int *)v5;
      v8 = PowerSettingRegisterNotificationEx(&GUID_CONSOLE_LOCKED, (unsigned int)v12, 2LL, &v11, (char *)v5 + 248);
      if ( v8 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          (void *)0xF8,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)v8);
    }
    if ( !*((_DWORD *)v5 + 1) )
      TsSessionNewPrimaryConsoleAudioSession(v5);
    g_bIsSystemAsleep = 0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
