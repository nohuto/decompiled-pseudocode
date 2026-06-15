/*
 * XREFs of ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180033C20
 * Callers:
 *     ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180033CF0 (-get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800D6D50 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     AudioSessionManagerGetExistingSession @ 0x1800D8220 (AudioSessionManagerGetExistingSession.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800D8410 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180033B0C (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2194 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x1800C3AF4 (WPP_SF_qS.c)
 */

__int64 __fastcall CAudioSessionManager::GetAudioSessionControl(
        CAudioSessionManager *this,
        unsigned int a2,
        char a3,
        struct CAudioSession *a4,
        struct CServerAudioSessionControl **a5)
{
  CAudioSessionManager *v8; // rcx
  unsigned int v9; // eax
  int v10; // edi
  struct CServerAudioSessionControl *v11; // rsi
  struct CServerAudioSessionControl *v12; // rbx
  struct CServerAudioSessionControl *v14; // [rsp+30h] [rbp-18h] BYREF

  v14 = 0LL;
  v8 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, a2);
      v8 = WPP_GLOBAL_Control;
    }
    if ( v8 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v8 + 28) & 0x40) != 0
      && *((_BYTE *)v8 + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)v8 + 2), 15LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, 0LL);
    }
  }
  v9 = CAudioSessionManager::CreateAudioSessionControl(v8, a4, a2, a3, &v14);
  v10 = v9;
  if ( v9 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, v9);
    }
    v12 = v14;
    v11 = 0LL;
  }
  else
  {
    v11 = v14;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        17,
        (unsigned int)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
        (_DWORD)v14,
        0LL);
    }
    v12 = 0LL;
  }
  *a5 = v11;
  if ( v10 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetAudioSessionControl", 562, v10);
  if ( v12 )
    (*(void (__fastcall **)(struct CServerAudioSessionControl *))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v10;
}
