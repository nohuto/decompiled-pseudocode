/*
 * XREFs of WPP_SF_qq @ 0x1400392D0
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000C8B0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qq(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids, 12LL, (__int64 *)va);
}
