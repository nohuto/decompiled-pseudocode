/*
 * XREFs of ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14005AD28
 * Callers:
 *     CreateSpatialCrossProcessEndpointRT @ 0x14005917C (CreateSpatialCrossProcessEndpointRT.c)
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z @ 0x14005DCB0 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z.c)
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14005DE50 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 *     ?EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ @ 0x14005EFCC (-EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x14005F0C0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     _TlgWrite @ 0x140013FB4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x14002C0B8 (_TlgCreateSz.c)
 */

void __fastcall SpatialCPTraceLoggingTracer(LPCSTR psz, int a2)
{
  LPCGUID v2; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-38h] BYREF
  int *v5; // [rsp+60h] [rbp-28h]
  int v6; // [rsp+68h] [rbp-20h]
  int v7; // [rsp+6Ch] [rbp-1Ch]
  int v8; // [rsp+98h] [rbp+10h] BYREF

  v8 = a2;
  if ( (unsigned int)dword_140086100 > 5 )
  {
    TlgCreateSz(&pDesc, psz);
    v7 = 0;
    v5 = &v8;
    v6 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_140086100, &unk_140070AC9, 0LL, v2, 4u, &pData);
  }
}
