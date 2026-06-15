/*
 * XREFs of ?OnSessionDisconnected@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4AudioServerSessionDisconnectReason@@@Z @ 0x1800D77D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800C2620 (WPP_SF_.c)
 */

__int64 CAudioSessionManager::OnSessionDisconnected()
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, (__int64)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids);
  }
  return 0LL;
}
