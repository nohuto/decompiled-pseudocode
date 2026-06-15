/*
 * XREFs of ?OnGroupingParamChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x180016190
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 */

__int64 __fastcall CAudioSessionManager::OnGroupingParamChanged(
        CAudioSessionManager *this,
        struct IAudioSessionInfo *a2,
        struct _GUID *a3,
        const struct _GUID *a4)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids);
  }
  return 0LL;
}
