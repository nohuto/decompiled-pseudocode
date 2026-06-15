/*
 * XREFs of ?OnDisplayNameChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x1800C8C70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 */

__int64 __fastcall CAudioSessionManager::OnDisplayNameChanged(
        CAudioSessionManager *this,
        struct IAudioSessionInfo *a2,
        const unsigned __int16 *a3,
        const struct _GUID *a4)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x14u, (__int64)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids);
  }
  return 0LL;
}
