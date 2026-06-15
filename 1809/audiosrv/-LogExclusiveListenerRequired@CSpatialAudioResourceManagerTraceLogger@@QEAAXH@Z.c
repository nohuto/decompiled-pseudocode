/*
 * XREFs of ?LogExclusiveListenerRequired@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x180114708
 * Callers:
 *     ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x1800405B0 (-OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogExclusiveListenerRequired(
        CSpatialAudioResourceManagerTraceLogger *this,
        int a2,
        const GUID *a3,
        const GUID *a4)
{
  EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  int *v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]
  int v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = a2;
  if ( (unsigned int)dword_1801B1350 > 4 )
  {
    v5 = &v8;
    v7 = 0;
    v6 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1801B1350, &unk_1801752CD, a3, a4, 3u, &v4);
  }
}
