/*
 * XREFs of ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180029150
 * Callers:
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x180004DAC (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800199A0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     VADServerUserSessionChanged @ 0x180029328 (VADServerUserSessionChanged.c)
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180029648 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800BFD68 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?HandleAccessChangeNotification@@YAJPEBG0@Z @ 0x1800D900C (-HandleAccessChangeNotification@@YAJPEBG0@Z.c)
 *     ?DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z @ 0x1800DEC58 (-DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1800E0B80 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800F617C (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV-$ComPtr@UIStreamGr.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800F63A4 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetAudioSessionManagerProvider(struct CAudioSessionManagerProvider **a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx

  EnterCriticalSection(&g_SessionManagerProviderLock);
  v2 = 0LL;
  if ( g_SingletonAudioSessionManagerProvider )
  {
    *a1 = (struct CAudioSessionManagerProvider *)g_SingletonAudioSessionManagerProvider;
    _InterlockedIncrement((volatile signed __int32 *)(g_SingletonAudioSessionManagerProvider + 12));
    v2 = (__int64)*a1;
  }
  else
  {
    *a1 = 0LL;
  }
  v3 = v2 == 0 ? 0x80004005 : 0;
  LeaveCriticalSection(&g_SessionManagerProviderLock);
  return v3;
}
