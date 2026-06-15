/*
 * XREFs of ?LogSetClientEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXXZ @ 0x14005A368
 * Callers:
 *     ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x14005F65C (-SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ.c)
 * Callees:
 *     _TlgWrite @ 0x140013FB4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogSetClientEvent(
        CSpatialCrossProcessEndpointTraceLogger *this,
        __int64 a2,
        __int64 a3,
        const GUID *a4)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  char *v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140086100 > 5 )
  {
    v7 = 0;
    v5 = (char *)this + 8;
    v6 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_140086100, &unk_140070771, 0LL, a4, 3u, &pData);
  }
}
