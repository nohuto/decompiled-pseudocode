/*
 * XREFs of ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x18000365C
 * Callers:
 *     ?DisconnectSessions@CPolicyConfig@@UEAAJPEBG@Z @ 0x180003640 (-DisconnectSessions@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x18000D800 (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x1800DE658 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x1800E1170 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 * Callees:
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002BF10 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002C480 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180035C70 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180036AA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800468C0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPolicyConfig::DisconnectHelper(const unsigned __int16 *a1)
{
  int AudioSessionManager; // eax
  __int64 v3; // r8
  struct CAudioSessionManager *v4; // rbx
  struct CAudioSessionManagerProvider *v5; // [rsp+48h] [rbp+10h] BYREF
  struct CAudioSessionManager *v6; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( (int)GetAudioSessionManagerProvider(&v5) >= 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids, a1);
    }
    v6 = 0LL;
    AudioSessionManager = CAudioSessionManagerProvider::GetAudioSessionManager(v5, a1, &v6);
    v4 = v6;
    if ( !AudioSessionManager )
    {
      LOBYTE(v3) = 1;
      CAudioSessionManager::Disconnect(v6, 2LL, v3);
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(v4);
  }
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5);
}
