/*
 * XREFs of ?OnIconPathChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x1800D7330
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 */

__int64 __fastcall CAudioSessionManager::OnIconPathChanged(
        CAudioSessionManager *this,
        struct IAudioSessionInfo *a2,
        const unsigned __int16 *a3,
        const struct _GUID *a4)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, (__int64)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids);
  }
  return 0LL;
}
