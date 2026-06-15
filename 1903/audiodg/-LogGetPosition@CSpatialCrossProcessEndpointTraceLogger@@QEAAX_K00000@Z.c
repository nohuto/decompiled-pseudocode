/*
 * XREFs of ?LogGetPosition@CSpatialCrossProcessEndpointTraceLogger@@QEAAX_K00000@Z @ 0x14005A0A0
 * Callers:
 *     ?GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14005E890 (-GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x140013FB4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogGetPosition(
        CSpatialCrossProcessEndpointTraceLogger *this,
        __int64 a2,
        __int64 a3,
        const GUID *a4,
        char a5,
        char a6,
        char a7)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-61h] BYREF
  char *v8; // [rsp+58h] [rbp-41h]
  __int64 v9; // [rsp+60h] [rbp-39h]
  __int64 *v10; // [rsp+68h] [rbp-31h]
  __int64 v11; // [rsp+70h] [rbp-29h]
  __int64 *v12; // [rsp+78h] [rbp-21h]
  __int64 v13; // [rsp+80h] [rbp-19h]
  char *v14; // [rsp+88h] [rbp-11h]
  __int64 v15; // [rsp+90h] [rbp-9h]
  const GUID **v16; // [rsp+98h] [rbp-1h]
  __int64 v17; // [rsp+A0h] [rbp+7h]
  char *v18; // [rsp+A8h] [rbp+Fh]
  __int64 v19; // [rsp+B0h] [rbp+17h]
  char *v20; // [rsp+B8h] [rbp+1Fh]
  __int64 v21; // [rsp+C0h] [rbp+27h]
  __int64 v22; // [rsp+F0h] [rbp+57h] BYREF
  __int64 v23; // [rsp+F8h] [rbp+5Fh] BYREF
  const GUID *v24; // [rsp+100h] [rbp+67h] BYREF

  v24 = a4;
  v23 = a3;
  v22 = a2;
  if ( (unsigned int)dword_140086100 > 5 )
  {
    v9 = 16LL;
    v8 = (char *)this + 8;
    v10 = &v22;
    v12 = &v23;
    v14 = &a6;
    v16 = &v24;
    v18 = &a5;
    v20 = &a7;
    v11 = 8LL;
    v13 = 8LL;
    v15 = 8LL;
    v17 = 8LL;
    v19 = 8LL;
    v21 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_140086100, &unk_1400707A0, 0LL, a4, 9u, &pData);
  }
}
