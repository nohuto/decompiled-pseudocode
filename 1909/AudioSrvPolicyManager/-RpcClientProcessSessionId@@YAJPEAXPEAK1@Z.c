/*
 * XREFs of ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18002326C
 * Callers:
 *     PbmReportAppInteractivityChange @ 0x180020360 (PbmReportAppInteractivityChange.c)
 *     PbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x1800203E0 (PbmSwitchSoftNonInteractiveAppsToHardNonInteractive.c)
 *     PbmReportHostedAppStateChange @ 0x180020430 (PbmReportHostedAppStateChange.c)
 *     PbmReportAppClosing @ 0x1800204C0 (PbmReportAppClosing.c)
 *     PbmAllowMediaPlaybackForApp @ 0x180020530 (PbmAllowMediaPlaybackForApp.c)
 *     PbmReportApplicationState @ 0x180021380 (PbmReportApplicationState.c)
 *     PbmLaunchBackgroundTask @ 0x180021460 (PbmLaunchBackgroundTask.c)
 *     TS_SessionGetAudioProtocol @ 0x180027350 (TS_SessionGetAudioProtocol.c)
 *     TS_RegisterAudioProtocolNotification @ 0x180027400 (TS_RegisterAudioProtocolNotification.c)
 *     TS_UnregisterAudioProtocolNotification @ 0x180027460 (TS_UnregisterAudioProtocolNotification.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1800089B8 (WPP_SF_dd.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x18001863C (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     WPP_SF_q @ 0x18001EC90 (WPP_SF_q.c)
 *     WPP_SF_D @ 0x180022560 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x1800342C0 (__security_check_cookie.c)
 *     memset_0 @ 0x180034F8E (memset_0.c)
 */

__int64 __fastcall RpcClientProcessSessionId(RPC_BINDING_HANDLE BindingHandle, unsigned int *a2, unsigned int *a3)
{
  int v6; // r14d
  unsigned int LastError; // ebx
  __int64 v8; // r8
  int v9; // edi
  HANDLE CurrentThread; // rax
  unsigned int v11; // eax
  unsigned int *v13; // [rsp+20h] [rbp-79h]
  unsigned int v14; // [rsp+30h] [rbp-69h] BYREF
  void *TokenHandle; // [rsp+38h] [rbp-61h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v17[56]; // [rsp+48h] [rbp-51h] BYREF
  int v18; // [rsp+80h] [rbp-19h]

  memset_0(v17, 0, 0x68uLL);
  TokenHandle = 0LL;
  v6 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_0e5291d43ab738b4f1647aff6bbf1d9a_Traceguids, BindingHandle);
  }
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  LastError = RpcServerInqCallAttributesW(BindingHandle, RpcCallAttributes);
  if ( !LastError )
  {
    v9 = v18;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_0e5291d43ab738b4f1647aff6bbf1d9a_Traceguids, v18);
    }
    LastError = RpcImpersonateClient(BindingHandle);
    if ( !LastError )
    {
      v6 = 1;
      CurrentThread = GetCurrentThread();
      if ( !OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
      {
        LastError = GetLastError();
        goto LABEL_19;
      }
      LastError = GetTokenInformation(TokenHandle, 0LL, 0LL, 0LL, &v14);
      if ( !LastError )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          LODWORD(v13) = v14;
          WPP_SF_dd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            LastError + 12,
            &WPP_0e5291d43ab738b4f1647aff6bbf1d9a_Traceguids,
            v9,
            v13);
        }
        v11 = v14;
        *a2 = v9;
        *a3 = v11;
LABEL_19:
        if ( !LastError )
          goto LABEL_24;
      }
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, v8, LastError);
  }
LABEL_24:
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( v6 )
    RpcRevertToSelf();
  return LastError;
}
