/*
 * XREFs of ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x1800040F0
 * Callers:
 *     ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180003F30 (-get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800C8810 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     AudioSessionManagerGetExistingSession @ 0x1800C9C90 (AudioSessionManagerGetExistingSession.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800C9E80 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x1800041C0 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x1800B58C4 (WPP_SF_qS.c)
 */

__int64 __fastcall CAudioSessionManager::GetAudioSessionControl(
        CAudioSessionManager *this,
        unsigned int a2,
        bool a3,
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
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetAudioSessionControl", 0x232u, v10);
  if ( v12 )
    (*(void (__fastcall **)(struct CServerAudioSessionControl *))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v10;
}
