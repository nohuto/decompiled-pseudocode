/*
 * XREFs of ?LogEmptyBufferCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z @ 0x140059D64
 * Callers:
 *     ?EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ @ 0x14005EF0C (-EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x140014224 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogEmptyBufferCount(
        CSpatialCrossProcessEndpointTraceLogger *this,
        int a2,
        __int64 a3,
        const GUID *a4)
{
  EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-58h] BYREF
  char *v5; // [rsp+50h] [rbp-38h]
  int v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+5Ch] [rbp-2Ch]
  int *v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+6Ch] [rbp-1Ch]
  int v11; // [rsp+98h] [rbp+10h] BYREF

  v11 = a2;
  if ( (unsigned int)dword_140085100 > 5 )
  {
    v5 = (char *)this + 8;
    v7 = 0;
    v6 = 16;
    v8 = &v11;
    v10 = 0;
    v9 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_140085100, &unk_140070828, 0LL, a4, 4u, &v4);
  }
}
