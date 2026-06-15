/*
 * XREFs of ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x18005C450
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18004C3B0 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020980 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$MakeAndInitialize@VCAudioSessionManagerProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18005C498 (--$MakeAndInitialize@VCAudioSessionManagerProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCAud.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 CreateAudioSessionManagerProvider(void)
{
  __int64 v0; // rcx
  int v1; // eax
  unsigned int v2; // ebx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = g_SingletonAudioSessionManagerProvider;
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
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
    (const char *)(unsigned int)v1,
    v4);
  return v2;
}
