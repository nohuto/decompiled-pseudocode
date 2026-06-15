/*
 * XREFs of ?CoAllocString@@YAJPEBGPEAPEAG@Z @ 0x18000D724
 * Callers:
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x1800061A0 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 *     ?HandleVirtualStreamStateChange@CWindowsPolicyManager@@QEAAJPEAUIAudioProcess@@PEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KW4_AudioStreamState@@3@Z @ 0x180007124 (-HandleVirtualStreamStateChange@CWindowsPolicyManager@@QEAAJPEAUIAudioProcess@@PEBGW4__MIDL___MI.c)
 *     ?Initialize@CApplication@@IEAAJPEBG_K@Z @ 0x18000DF08 (-Initialize@CApplication@@IEAAJPEBG_K@Z.c)
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180010E0C (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x18001175C (-Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x1800188C0 (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18001F244 (-CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z.c)
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x18002005C (-OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z.c)
 *     ?CreateInstance@CAppStateChangedWorkItem@@SAJPEBG_KHKPEAPEAVIPBMWorkItem@@@Z @ 0x180028B60 (-CreateInstance@CAppStateChangedWorkItem@@SAJPEBG_KHKPEAPEAVIPBMWorkItem@@@Z.c)
 *     ?CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBG_KPEAPEAVIPBMWorkItem@@@Z @ 0x180029184 (-CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBG_KPEAPEAVIPBMWorkItem@@@Z.c)
 *     ?CreateInstance@HostedAppStateChangedContext@@SAJPEBG_KKHPEAPEAV1@@Z @ 0x1800293BC (-CreateInstance@HostedAppStateChangedContext@@SAJPEBG_KKHPEAPEAV1@@Z.c)
 *     ?CreateInstance@ApplicationStateChangedContext@@SAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@PEAPEAU1@@Z @ 0x1800294D8 (-CreateInstance@ApplicationStateChangedContext@@SAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerrpc.c)
 *     ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18002CD6C (-RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STRE.c)
 *     ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x18002E764 (-UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_00.c)
 *     ?GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z @ 0x18002F540 (-GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180017110 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 */

__int64 __fastcall CoAllocString(const unsigned __int16 *a1, unsigned __int16 **a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v4; // ebx
  unsigned __int64 v6; // rsi
  unsigned __int16 *v7; // rax
  unsigned __int16 **v9; // [rsp+20h] [rbp-28h]
  unsigned __int64 *v10; // [rsp+28h] [rbp-20h]
  unsigned int v11; // [rsp+30h] [rbp-18h]

  v2 = -1LL;
  v4 = 0;
  do
    ++v2;
  while ( a1[v2] );
  v6 = v2 + 1;
  *a2 = 0LL;
  if ( v2 + 1 >= v2 && is_mul_ok(v6, 2uLL) )
  {
    v7 = (unsigned __int16 *)CoTaskMemAlloc(2 * v6);
    *a2 = v7;
    if ( v7 )
      StringCchCopyNExW(v7, v2 + 1, a1, v2, v9, v10, v11);
    else
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v4;
}
