/*
 * XREFs of ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x1800067D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180005980 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800086B8 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800250C8 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z @ 0x180026B50 (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z.c)
 *     ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x180026BD0 (-TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z @ 0x180026C58 (-TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::RpcSetAccessibilityAudioMonoMixState(CWindowsPolicyManager *this, int a2)
{
  int Process; // eax
  HKEY v3; // rbx
  unsigned int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rdx
  int v11; // r14d
  struct _RTL_CRITICAL_SECTION *v12; // rsi
  unsigned int lpData; // [rsp+20h] [rbp-40h]
  unsigned int lpDataa; // [rsp+20h] [rbp-40h]
  struct TSSession *v16; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int Data; // [rsp+98h] [rbp+38h] BYREF
  HKEY hKey; // [rsp+A0h] [rbp+40h] BYREF
  HKEY phkResult; // [rsp+A8h] [rbp+48h] BYREF

  Data = a2;
  hKey = 0LL;
  Process = CWindowsPolicyManager::RpcGetProcess(this, 0LL, (struct IAudioProcess **)&hKey);
  v3 = hKey;
  v4 = Process;
  if ( Process < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FF,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)Process);
    goto LABEL_31;
  }
  v5 = (*(__int64 (__fastcall **)(HKEY))(*(_QWORD *)hKey + 48LL))(hKey);
  v6 = v5;
  if ( !v5 )
    goto LABEL_30;
  if ( !(unsigned int)TsSessionIdAreAccessibilityAudioSettingsInitialized(v5) )
    TsSessionIdInitAccessibilityAudioSettings(v6, 0);
  if ( (unsigned int)TsSessionIdGetAccessibilityAudioMonoMixState(v6) == Data )
    goto LABEL_30;
  v7 = RpcImpersonateClient(0LL);
  if ( v7 )
  {
    v4 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x210,
           (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
           (const char *)v7,
           lpData);
    goto LABEL_31;
  }
  phkResult = 0LL;
  v8 = RegOpenCurrentUser(0xF003Fu, &phkResult);
  if ( !v8 )
  {
    hKey = 0LL;
    v9 = RegCreateKeyExW(phkResult, L"Software\\Microsoft\\Multimedia\\Audio", 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL);
    if ( v9 )
    {
      v10 = 536LL;
      goto LABEL_15;
    }
    v9 = RegSetValueExW(hKey, L"AccessibilityMonoMixState", 0, 4u, (const BYTE *)&Data, 4u);
    if ( v9 )
    {
      v10 = 538LL;
LABEL_15:
      v4 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)v10,
             (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             (const char *)v9,
             lpDataa);
      if ( hKey )
        RegCloseKey(hKey);
      goto LABEL_17;
    }
    v11 = Data;
    v12 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    if ( !(unsigned int)TsSessionFromSessionId(v6, 1, 0LL, &v16) && *((_DWORD *)v16 + 76) )
      *((_DWORD *)v16 + 77) = v11;
    if ( v12 )
      LeaveCriticalSection(v12);
    if ( hKey )
      RegCloseKey(hKey);
    if ( phkResult )
      RegCloseKey(phkResult);
    RpcRevertToSelf();
LABEL_30:
    v4 = 0;
    goto LABEL_31;
  }
  v4 = wil::details::in1diag3::Return_Win32(
         retaddr,
         (void *)0x215,
         (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
         (const char *)v8,
         lpData);
LABEL_17:
  if ( phkResult )
    RegCloseKey(phkResult);
  RpcRevertToSelf();
LABEL_31:
  if ( v3 )
    (*(void (__fastcall **)(HKEY))(*(_QWORD *)v3 + 16LL))(v3);
  return v4;
}
