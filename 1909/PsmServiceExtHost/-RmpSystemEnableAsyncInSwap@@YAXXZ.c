/*
 * XREFs of ?RmpSystemEnableAsyncInSwap@@YAXXZ @ 0x18007331C
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004241C (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void RmpSystemEnableAsyncInSwap(void)
{
  int v0; // ebx
  NTSTATUS v1; // eax
  const struct _TlgProvider_t *v2; // rcx
  NTSTATUS v3; // [rsp+38h] [rbp-29h] BYREF
  void *TokenHandle[2]; // [rsp+40h] [rbp-21h] BYREF
  _DWORD v5[2]; // [rsp+50h] [rbp-11h] BYREF
  _DWORD SystemInformation[2]; // [rsp+58h] [rbp-9h] BYREF
  _DWORD *v7; // [rsp+60h] [rbp-1h]
  __int64 v8; // [rsp+68h] [rbp+7h]
  struct _TOKEN_PRIVILEGES NewState; // [rsp+70h] [rbp+Fh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp+1Fh] BYREF
  NTSTATUS *v11; // [rsp+A0h] [rbp+3Fh]
  __int64 v12; // [rsp+A8h] [rbp+47h]

  TokenHandle[0] = 0LL;
  v0 = 0;
  if ( ImpersonateSelf(SecurityImpersonation) )
  {
    v0 = 1;
    v3 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x20u, 0, TokenHandle);
    if ( v3 >= 0 )
    {
      TokenHandle[1] = (void *)13;
      NewState.Privileges[0].Luid = (LUID)13LL;
      NewState.PrivilegeCount = 1;
      NewState.Privileges[0].Attributes = 2;
      v3 = NtAdjustPrivilegesToken(TokenHandle[0], 0, &NewState, 0x10u, 0LL, 0LL);
      if ( !v3 )
      {
        v8 = 8LL;
        SystemInformation[0] = 1;
        SystemInformation[1] = 19;
        v7 = v5;
        v5[0] = 16777220;
        v5[1] = 1;
        v1 = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
        if ( v1 >= 0 )
          v1 = 0;
        v3 = v1;
      }
    }
  }
  else
  {
    v3 = -1073741555;
  }
  if ( TokenHandle[0] )
    NtClose(TokenHandle[0]);
  if ( v0 )
    RevertToSelf();
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v12 = 4LL;
      v11 = &v3;
      TlgWrite(v2, &unk_180096C20, 0LL, 0LL, 3u, &pData);
    }
  }
}
