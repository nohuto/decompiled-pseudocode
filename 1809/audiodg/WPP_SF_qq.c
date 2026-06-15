/*
 * XREFs of WPP_SF_qq @ 0x14003D458
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140001BC0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qq(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_c996c122903733bc288a845a1996e411_Traceguids, 12LL, (__int64 *)va);
}
