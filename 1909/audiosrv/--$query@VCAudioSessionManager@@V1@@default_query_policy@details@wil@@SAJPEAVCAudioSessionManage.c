/*
 * XREFs of ??$query@VCAudioSessionManager@@V1@@default_query_policy@details@wil@@SAJPEAVCAudioSessionManager@@PEAPEAV3@@Z @ 0x1800D877C
 * Callers:
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180035D50 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::default_query_policy::query<CAudioSessionManager,CAudioSessionManager>(
        __int64 a1,
        __int64 a2)
{
  return wil::details::default_query_policy::query_dispatch<CAudioSessionManagerProvider,CAudioSessionManagerProvider>(
           a1,
           a2,
           a2);
}
