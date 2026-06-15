/*
 * XREFs of ?CheckGlitches@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ @ 0x14005B82C
 * Callers:
 *     ?ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x14005FDE0 (-ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14000EEC0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140013FB4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     ?RegisterGlitches@CSpatialCrossProcessEndpointTraceLogger@@QEAAXHH@Z @ 0x14005AB40 (-RegisterGlitches@CSpatialCrossProcessEndpointTraceLogger@@QEAAXHH@Z.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::CheckGlitches(CSpatialCrossProcessBaseEndpoint *this)
{
  __int32 v2; // eax
  __int64 v3; // rcx
  int v4; // r10d
  const GUID *v5; // r9
  const struct _TlgProvider_t *v6; // rcx
  int v7; // [rsp+30h] [rbp-19h] BYREF
  int v8; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  char *v10; // [rsp+60h] [rbp+17h]
  __int64 v11; // [rsp+68h] [rbp+1Fh]
  int *v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  int *v14; // [rsp+80h] [rbp+37h]
  __int64 v15; // [rsp+88h] [rbp+3Fh]

  v2 = _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 112) + 76LL), 0);
  v3 = *((_QWORD *)this + 112);
  v7 = v2 != 0;
  v4 = v7;
  LODWORD(v5) = _InterlockedExchange((volatile __int32 *)(v3 + 80), 0) != 0;
  v8 = (int)v5;
  if ( (v2 || (_DWORD)v5)
    && (unsigned int)dword_140086100 > 5
    && TlgKeywordOn((TraceLoggingHProvider)&dword_140086100, 1uLL) )
  {
    v11 = 16LL;
    v12 = &v7;
    v10 = (char *)this + 408;
    v14 = &v8;
    v13 = 4LL;
    v15 = 4LL;
    TlgWrite(v6, &unk_140070B34, (LPCGUID)((char *)this + 408), v5, 5u, &pData);
    v4 = v7;
    LODWORD(v5) = v8;
  }
  CSpatialCrossProcessEndpointTraceLogger::RegisterGlitches(
    (CSpatialCrossProcessBaseEndpoint *)((char *)this + 400),
    v4,
    (int)v5);
}
