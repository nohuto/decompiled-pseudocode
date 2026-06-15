/*
 * XREFs of ?LogSetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_J@Z @ 0x14005A3DC
 * Callers:
 *     ?SetGrantedObjectCount@CSpatialCrossProcessBaseEndpoint@@UEAAJI_J@Z @ 0x14005D0C0 (-SetGrantedObjectCount@CSpatialCrossProcessBaseEndpoint@@UEAAJI_J@Z.c)
 * Callees:
 *     _TlgWrite @ 0x140013FB4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogSetGrantedCount(
        CSpatialCrossProcessEndpointTraceLogger *this,
        int a2,
        __int64 a3,
        const GUID *a4)
{
  __int64 v4; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  char *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  int *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  __int64 *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]
  int v12; // [rsp+B8h] [rbp+6Fh] BYREF

  v12 = a2;
  if ( (unsigned int)dword_140086100 > 5 )
  {
    v7 = 16LL;
    v6 = (char *)this + 8;
    v8 = &v12;
    v10 = &v4;
    v9 = 4LL;
    v4 = a3;
    v11 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_140086100, &unk_1400709A5, 0LL, a4, 5u, &pData);
  }
}
