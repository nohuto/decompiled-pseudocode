/*
 * XREFs of ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F7D24
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001CC80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2194 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F8C3C (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F8E18 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 */

__int64 __fastcall CAudioResourceManager::GetSaDeviceForExclusiveStream(
        CAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        const wchar_t **a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        bool a7,
        struct IAudioProcess *a8,
        struct CAudioSessionManager *a9,
        struct ISaDeviceProxy **a10)
{
  int v13; // ebx
  CAudioResourceManager *v14; // rcx
  int SaDeviceForExclusive; // eax

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_79ddef80328333c3349c04c3a3e53ca6_Traceguids, *a3);
  }
  v13 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, const wchar_t **, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
          g_DeviceGraphManager,
          a2,
          a3,
          a4,
          a5,
          a6,
          a10);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_79ddef80328333c3349c04c3a3e53ca6_Traceguids, v13);
  }
  if ( v13 != -2005139364 )
  {
    if ( v13 != -2005139363 )
      goto LABEL_18;
    if ( !a7 )
      goto LABEL_19;
  }
  if ( !(*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a8 + 96LL))(a8) )
  {
    if ( v13 != -2005139363 )
      goto LABEL_18;
    if ( a7 )
    {
      SaDeviceForExclusive = CAudioResourceManager::RetryGetSaDeviceForExclusive(
                               v14,
                               a2,
                               (struct SaDeviceParams *)a3,
                               a4,
                               a5,
                               a6,
                               a9,
                               a10);
      goto LABEL_17;
    }
LABEL_19:
    AudSrvTraceLoggingErrorHelper("CAudioResourceManager::GetSaDeviceForExclusiveStream", 1752, v13);
    return (unsigned int)v13;
  }
  SaDeviceForExclusive = CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
                           v14,
                           a2,
                           (struct SaDeviceParams *)a3,
                           a4,
                           a5,
                           a6,
                           a9,
                           a10);
LABEL_17:
  v13 = SaDeviceForExclusive;
LABEL_18:
  if ( v13 < 0 )
    goto LABEL_19;
  return (unsigned int)v13;
}
