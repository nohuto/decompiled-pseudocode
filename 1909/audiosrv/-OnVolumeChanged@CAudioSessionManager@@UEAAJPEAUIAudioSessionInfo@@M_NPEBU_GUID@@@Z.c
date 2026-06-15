/*
 * XREFs of ?OnVolumeChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x180049090
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 */

__int64 __fastcall CAudioSessionManager::OnVolumeChanged(
        CAudioSessionManager *this,
        struct IAudioSessionInfo *a2,
        float a3)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids);
  }
  return 0LL;
}
