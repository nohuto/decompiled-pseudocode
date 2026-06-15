/*
 * XREFs of ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14005CDF8
 * Callers:
 *     CreateSpatialCrossProcessEndpointRT @ 0x14005B04C (CreateSpatialCrossProcessEndpointRT.c)
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJ_K0@Z @ 0x14005FC60 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJ_K0@Z.c)
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14005FDC0 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 *     ?EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ @ 0x140060EC4 (-EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEA_K1@Z @ 0x140061020 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     _TlgWrite @ 0x1400196A4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1400329B8 (_TlgCreateSz.c)
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
  if ( (unsigned int)dword_140088108 > 5 )
  {
    TlgCreateSz(&pDesc, psz);
    v7 = 0;
    v5 = &v8;
    v6 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_140088108, &unk_140072EF5, 0LL, v2, 4u, &pData);
  }
}
