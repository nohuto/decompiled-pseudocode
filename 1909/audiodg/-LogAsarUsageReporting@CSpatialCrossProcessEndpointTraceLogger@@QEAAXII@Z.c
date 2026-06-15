/*
 * XREFs of ?LogAsarUsageReporting@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z @ 0x140059B74
 * Callers:
 *     ?SetObjectUsageCounts@CSpatialCrossProcessBaseEndpoint@@UEAAJII@Z @ 0x14005D130 (-SetObjectUsageCounts@CSpatialCrossProcessBaseEndpoint@@UEAAJII@Z.c)
 * Callees:
 *     _TlgWrite @ 0x140014224 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogAsarUsageReporting(
        CSpatialCrossProcessEndpointTraceLogger *this,
        unsigned int a2,
        unsigned int a3,
        const GUID *a4)
{
  unsigned int v4; // edi
  __int64 v6; // r9
  UINT32 cData; // [rsp+20h] [rbp-39h]
  UINT32 cDataa; // [rsp+20h] [rbp-39h]
  unsigned int v9; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v10; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  char *v12; // [rsp+60h] [rbp+7h]
  __int64 v13; // [rsp+68h] [rbp+Fh]
  unsigned int *v14; // [rsp+70h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+1Fh]
  unsigned int *v16; // [rsp+80h] [rbp+27h]
  __int64 v17; // [rsp+88h] [rbp+2Fh]

  v4 = a3;
  v9 = a2;
  v10 = a3;
  if ( (unsigned int)dword_140085100 > 5 )
  {
    v13 = 16LL;
    v12 = (char *)this + 8;
    v14 = &v9;
    v16 = &v10;
    v15 = 4LL;
    v17 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_140085100, &unk_140070A0E, 0LL, a4, 5u, &pData);
    a2 = v9;
    v4 = v10;
  }
  LOBYTE(cData) = 1;
  LOBYTE(a4) = 1;
  (*(void (__fastcall **)(char *, _QWORD, _QWORD, const GUID *, UINT32))(*((_QWORD *)this + 56) + 56LL))(
    (char *)this + 448,
    0LL,
    a2,
    a4,
    cData);
  LOBYTE(v6) = 1;
  LOBYTE(cDataa) = 1;
  (*(void (__fastcall **)(char *, __int64, _QWORD, __int64, UINT32))(*((_QWORD *)this + 56) + 56LL))(
    (char *)this + 448,
    1LL,
    v4,
    v6,
    cDataa);
}
