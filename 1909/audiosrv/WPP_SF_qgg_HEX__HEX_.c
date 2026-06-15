/*
 * XREFs of WPP_SF_qgg_HEX__HEX_ @ 0x1800D1F68
 * Callers:
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800CFBA0 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qgg_HEX__HEX_(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+C8h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, 127LL, (__int64 *)va);
}
