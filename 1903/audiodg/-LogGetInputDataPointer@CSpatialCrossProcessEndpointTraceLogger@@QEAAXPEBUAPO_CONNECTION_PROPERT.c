/*
 * XREFs of ?LogGetInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBUAPO_CONNECTION_PROPERTY@@_N@Z @ 0x140059FEC
 * Callers:
 *     ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x14005F960 (-GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@.c)
 * Callees:
 *     _TlgWrite @ 0x140013FB4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogGetInputDataPointer(
        CSpatialCrossProcessEndpointTraceLogger *this,
        const struct APO_CONNECTION_PROPERTY *a2,
        unsigned __int8 a3,
        const GUID *a4)
{
  APO_BUFFER_FLAGS u32BufferFlags; // [rsp+30h] [rbp-29h] BYREF
  int v5; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  char *v7; // [rsp+60h] [rbp+7h]
  __int64 v8; // [rsp+68h] [rbp+Fh]
  UINT32 *p_u32ValidFrameCount; // [rsp+70h] [rbp+17h]
  __int64 v10; // [rsp+78h] [rbp+1Fh]
  APO_BUFFER_FLAGS *p_u32BufferFlags; // [rsp+80h] [rbp+27h]
  __int64 v12; // [rsp+88h] [rbp+2Fh]
  int *v13; // [rsp+90h] [rbp+37h]
  __int64 v14; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_140086100 > 5 )
  {
    v8 = 16LL;
    v7 = (char *)this + 8;
    p_u32ValidFrameCount = &a2->u32ValidFrameCount;
    u32BufferFlags = a2->u32BufferFlags;
    p_u32BufferFlags = &u32BufferFlags;
    v5 = a3;
    v13 = &v5;
    v10 = 4LL;
    v12 = 4LL;
    v14 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_140086100, &unk_140070846, 0LL, a4, 6u, &pData);
  }
}
