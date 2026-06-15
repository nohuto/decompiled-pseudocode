/*
 * XREFs of ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x18005A790
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005AB64 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029620 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$MakeAndInitialize@VCAudioSessionManagerProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18005A698 (--$MakeAndInitialize@VCAudioSessionManagerProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCAud.c)
 */

__int64 CreateAudioSessionManagerProvider(void)
{
  volatile signed __int32 *v0; // rcx
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = (volatile signed __int32 *)g_SingletonAudioSessionManagerProvider;
  g_SingletonAudioSessionManagerProvider = 0LL;
  if ( v0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v0);
  v1 = Microsoft::WRL::Details::MakeAndInitialize<CAudioSessionManagerProvider,CAudioSessionManagerProvider,>(&g_SingletonAudioSessionManagerProvider);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x193,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
