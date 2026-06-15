/*
 * XREFs of ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x1800065C8
 * Callers:
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x1800069A0 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180006A30 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800086D8 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x180026BB0 (-TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowsPolicyManager::InitAccessibilityAudioSettings(CWindowsPolicyManager *this, unsigned int a2)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // [rsp+20h] [rbp-38h]
  unsigned int v10; // [rsp+20h] [rbp-38h]
  HKEY hKey; // [rsp+30h] [rbp-28h] BYREF
  HKEY phkResult[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+10h]
  CWindowsPolicyManager *Type; // [rsp+70h] [rbp+18h] BYREF
  char v15; // [rsp+79h] [rbp+21h]
  DWORD cbData; // [rsp+80h] [rbp+28h] BYREF
  int Data; // [rsp+88h] [rbp+30h] BYREF

  Type = this;
  phkResult[1] = HKEY_DYN_DATA|0x7FFFFFF8LL;
  if ( !a2 )
    return 0LL;
  v4 = RpcImpersonateClient(0LL);
  if ( v4 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x1E3,
             (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             (const char *)v4,
             v9);
  v15 = 1;
  phkResult[0] = 0LL;
  v5 = RegOpenCurrentUser(0x20019u, phkResult);
  if ( v5 )
  {
    v6 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x1E8,
           (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
           (const char *)v5,
           v9);
  }
  else
  {
    hKey = 0LL;
    v7 = RegOpenKeyExW(phkResult[0], L"Software\\Microsoft\\Multimedia\\Audio", 0, 1u, &hKey);
    if ( v7 )
    {
      v6 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x1EB,
             (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             (const char *)v7,
             v10);
    }
    else
    {
      LODWORD(Type) = 4;
      cbData = 4;
      if ( !RegQueryValueExW(hKey, L"AccessibilityMonoMixState", 0LL, (LPDWORD)&Type, (LPBYTE)&Data, &cbData)
        && (_DWORD)Type == 4
        && cbData == 4 )
      {
        v8 = Data;
      }
      else
      {
        v8 = 0;
        Data = 0;
      }
      TsSessionIdInitAccessibilityAudioSettings(a2, v8);
      v6 = 0;
    }
    if ( hKey )
      RegCloseKey(hKey);
  }
  if ( phkResult[0] )
    RegCloseKey(phkResult[0]);
  RpcRevertToSelf();
  return v6;
}
