/*
 * XREFs of ??$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCAudioSessionManagerProvider@@U?$integral_constant@_N$00@wistd@@PEAPEAV3@@Z @ 0x1800D878C
 * Callers:
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002BF10 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     VADServerUserSessionChanged @ 0x18002C0C8 (VADServerUserSessionChanged.c)
 *     GetAudioSessionManager @ 0x180034FE0 (GetAudioSessionManager.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x180035480 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     ??$query@VCAudioSessionManager@@V1@@default_query_policy@details@wil@@SAJPEAVCAudioSessionManager@@PEAPEAV3@@Z @ 0x1800D877C (--$query@VCAudioSessionManager@@V1@@default_query_policy@details@wil@@SAJPEAVCAudioSessionManage.c)
 *     ?TryGetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x1800D9080 (-TryGetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@.c)
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualAudioStream@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800C9FC0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualAudioStre.c)
 */

__int64 __fastcall wil::details::default_query_policy::query_dispatch<CAudioSessionManagerProvider,CAudioSessionManagerProvider>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  *a3 = a1;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualAudioStream>::AddRef(a1);
  return 0LL;
}
