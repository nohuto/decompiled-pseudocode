/*
 * XREFs of ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x180027A08
 * Callers:
 *     ?OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z @ 0x18000C3B0 (-OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800010A0 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F84 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002FB8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000829C (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000B398 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z @ 0x1800274B8 (-LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z.c)
 *     __security_check_cookie @ 0x1800369D0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800371A8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall RpcTryInitializeUserSettings(struct TSSession *a1)
{
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  RPC_STATUS v5; // eax
  unsigned int v6; // ebx
  HANDLE CurrentThread; // rax
  const char *v9; // r9
  unsigned int v10; // edi
  PSID *v11; // rbx
  PSID *v12; // rsi
  DWORD LastError; // eax
  const char *v14; // r9
  unsigned int v15; // eax
  unsigned int v16; // eax
  LSTATUS v17; // eax
  DWORD ReturnLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-C8h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-C0h] BYREF
  HKEY hKey; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  struct TSSession *v23; // [rsp+78h] [rbp-90h]
  int v24; // [rsp+80h] [rbp-88h]
  int v25; // [rsp+84h] [rbp-84h]
  _BYTE TokenInformation[512]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A0h] [rbp+198h]

  if ( *((_BYTE *)a1 + 324) )
    return *((_BYTE *)a1 + 324) == 0 ? 0x80070490 : 0;
  v2 = (const struct _TlgProvider_t *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v2 > 4u )
  {
    v25 = 0;
    v23 = a1;
    v24 = 4;
    TlgWrite(v2, &unk_180044A99, v3, v4, 3u, &pData);
  }
  v5 = RpcImpersonateClient(0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x371,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  TokenHandle = 0LL;
  CurrentThread = GetCurrentThread();
  if ( OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
  {
    v11 = 0LL;
    ReturnLength[0] = 512;
    v12 = (PSID *)TokenInformation;
    if ( !GetTokenInformation(TokenHandle, TokenUser, TokenInformation, 0x200u, ReturnLength) )
    {
      LastError = GetLastError();
      if ( LastError == 122 )
      {
        v11 = (PSID *)operator new[](ReturnLength[0], (const struct std::nothrow_t *)&std::nothrow);
        if ( !v11 )
        {
          v10 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x386,
            (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)0x8007000ELL);
          goto LABEL_21;
        }
        v12 = v11;
        if ( !GetTokenInformation(TokenHandle, TokenUser, v11, ReturnLength[0], ReturnLength) )
        {
          v15 = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x389,
                  (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                  v14);
LABEL_16:
          v10 = v15;
LABEL_21:
          if ( v11 )
            operator delete(v11, (const struct std::nothrow_t *)0x10);
          goto LABEL_23;
        }
      }
      else if ( LastError )
      {
        v15 = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0x38D,
                (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                (const char *)LastError);
        goto LABEL_16;
      }
    }
    if ( EqualSid(*v12, *((PSID *)a1 + 41)) )
    {
      phkResult = 0LL;
      v16 = RegOpenCurrentUser(0x20019u, &phkResult);
      if ( v16 )
      {
        v10 = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0x398,
                (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                (const char *)v16);
        if ( phkResult )
          RegCloseKey(phkResult);
        goto LABEL_21;
      }
      hKey = 0LL;
      v17 = RegOpenKeyExW(phkResult, L"Software\\Microsoft\\Multimedia\\Audio", 0, 1u, &hKey);
      *((_BYTE *)a1 + 324) = v17 == 0;
      if ( !v17 )
        LoadUserSettings(a1, hKey);
      if ( hKey )
        RegCloseKey(hKey);
      if ( phkResult )
        RegCloseKey(phkResult);
    }
    if ( v11 )
      operator delete(v11, (const struct std::nothrow_t *)0x10);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    RpcRevertToSelf();
    return *((_BYTE *)a1 + 324) == 0 ? 0x80070490 : 0;
  }
  v10 = wil::details::in1diag3::Return_GetLastError(
          retaddr,
          (void *)0x378,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          v9);
LABEL_23:
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(TokenHandle);
  RpcRevertToSelf();
  return v10;
}
