/*
 * XREFs of ?LogObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDII@Z @ 0x14005A218
 * Callers:
 *     ?ProcessComplete@CSpatialCrossProcessClientOutputEndpoint@@UEAAJXZ @ 0x14005EE50 (-ProcessComplete@CSpatialCrossProcessClientOutputEndpoint@@UEAAJXZ.c)
 *     ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x14005F960 (-GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@.c)
 * Callees:
 *     _TlgWrite @ 0x140013FB4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x14002C0B8 (_TlgCreateSz.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogObjectCount(
        CSpatialCrossProcessEndpointTraceLogger *this,
        const char *a2,
        int a3,
        int a4)
{
  LPCGUID v4; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-19h] BYREF
  char *v6; // [rsp+50h] [rbp+7h]
  __int64 v7; // [rsp+58h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+17h] BYREF
  int *v9; // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+78h] [rbp+2Fh]
  int *v11; // [rsp+80h] [rbp+37h]
  __int64 v12; // [rsp+88h] [rbp+3Fh]
  int v13; // [rsp+C0h] [rbp+77h] BYREF
  int v14; // [rsp+C8h] [rbp+7Fh] BYREF

  v14 = a4;
  v13 = a3;
  if ( (unsigned int)dword_140086100 > 5 )
  {
    v7 = 16LL;
    v6 = (char *)this + 8;
    TlgCreateSz(&pDesc, a2);
    v10 = 4LL;
    v11 = &v14;
    v9 = &v13;
    v12 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_140086100, &unk_140070AED, 0LL, v4, 6u, &pData);
  }
}
