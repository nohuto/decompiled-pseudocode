/*
 * XREFs of ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800F5CCC
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001CC80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x1800F9654 (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002BF10 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002C480 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180035C70 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180036AA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E4E0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800D74C8 (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 *     _lambda_1a19eda420d26f754031790a40bd90be_::operator() @ 0x1800F52E4 (_lambda_1a19eda420d26f754031790a40bd90be_--operator().c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800F5EF4 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup(
        CAudioResourceManager *this,
        _QWORD *a2,
        const unsigned __int16 *a3)
{
  int AudioSessionManagerProvider; // eax
  int AudioSessionManager; // edi
  char v8; // si
  __int64 v9; // rdx
  int InternalLoopbackStream; // eax
  int v11; // edi
  int v12; // eax
  struct CAudioSessionManagerProvider *v14; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+30h] [rbp-D8h] BYREF
  __int64 *v16; // [rsp+38h] [rbp-D0h] BYREF
  struct CAudioSessionManager *v17; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-C0h]
  __int64 v19; // [rsp+50h] [rbp-B8h]
  _BYTE v20[1248]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+570h] [rbp+468h]

  v19 = -2LL;
  v14 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v14);
  AudioSessionManager = AudioSessionManagerProvider;
  if ( AudioSessionManagerProvider < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x512,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)AudioSessionManagerProvider);
    goto LABEL_19;
  }
  v15 = 0LL;
  v16 = &v15;
  v17 = 0LL;
  v8 = 1;
  LOBYTE(v18) = 1;
  AudioSessionManager = CAudioSessionManagerProvider::GetAudioSessionManager(v14, a3, &v17);
  if ( (_BYTE)v18 )
  {
    v9 = *v16;
    *v16 = (__int64)v17;
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(v9);
  }
  if ( AudioSessionManager >= 0 )
  {
    CAudioSessionManager::RegisterDisconnectNotificationClient(v15, a2);
    memset_0(v20, 0, sizeof(v20));
    v16 = (__int64 *)v20;
    LOBYTE(v17) = 1;
    InternalLoopbackStream = CAudioResourceManager::CreateInternalLoopbackStream(
                               this,
                               a3,
                               (struct IStreamGroupProxy *)*a2,
                               (struct SYSTEM_AUDIO_STREAM *)v20);
    v11 = InternalLoopbackStream;
    if ( InternalLoopbackStream < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x528,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)InternalLoopbackStream);
    if ( v11 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, const unsigned __int16 *))(*(_QWORD *)*a2 + 280LL))(
              *a2,
              v20,
              a3);
      AudioSessionManager = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x52A,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v12);
        goto LABEL_15;
      }
      LOBYTE(v17) = 0;
      v8 = 0;
    }
    AudioSessionManager = 0;
LABEL_15:
    if ( v8 )
    {
      LOBYTE(v17) = 0;
      lambda_1a19eda420d26f754031790a40bd90be_::operator()((__int64 *)&v16);
    }
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x515,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)AudioSessionManager);
LABEL_17:
  if ( v15 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(v15);
LABEL_19:
  if ( v14 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v14);
  return (unsigned int)AudioSessionManager;
}
