/*
 * XREFs of ?LogTelemetry@CSpatialCPEndpointGlitchEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14005A8D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x14000EEC0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140013FB4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointGlitchEventValues::LogTelemetry(
        CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointGlitchEventValues *this)
{
  ULONGLONG TickCount64; // rbx
  const struct _TlgProvider_t **v3; // rax
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r9
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r9
  __int64 v9; // [rsp+40h] [rbp-71h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp-69h] BYREF
  __int64 v11; // [rsp+50h] [rbp-61h] BYREF
  _QWORD v12[2]; // [rsp+58h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-49h] BYREF
  __int64 v14; // [rsp+88h] [rbp-29h]
  __int64 v15; // [rsp+90h] [rbp-21h]
  __int64 *v16; // [rsp+98h] [rbp-19h]
  __int64 v17; // [rsp+A0h] [rbp-11h]
  _QWORD *v18; // [rsp+A8h] [rbp-9h]
  __int64 v19; // [rsp+B0h] [rbp-1h]
  char *v20; // [rsp+B8h] [rbp+7h]
  __int64 v21; // [rsp+C0h] [rbp+Fh]
  char *v22; // [rsp+C8h] [rbp+17h]
  __int64 v23; // [rsp+D0h] [rbp+1Fh]
  char *v24; // [rsp+D8h] [rbp+27h]
  __int64 v25; // [rsp+E0h] [rbp+2Fh]
  char *v26; // [rsp+E8h] [rbp+37h]
  __int64 v27; // [rsp+F0h] [rbp+3Fh]

  if ( *((_QWORD *)this + 1) && *((_QWORD *)this + 2) && *((_QWORD *)this + 3) )
  {
    SystemTimeAsFileTime = 0LL;
    TickCount64 = GetTickCount64();
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v9 = 10000 * (**((_QWORD **)this + 3) - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime;
    v3 = (const struct _TlgProvider_t **)*((_QWORD *)this + 4);
    v11 = 10000 * (**((_QWORD **)this + 2) - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime;
    v12[0] = v9;
    v4 = *v3;
    if ( **((_BYTE **)this + 1) )
    {
      if ( *(_DWORD *)v4 > 3u )
      {
        if ( TlgKeywordOn(v4, 0x200000000001uLL) )
        {
          v14 = *((_QWORD *)this + 5);
          v16 = &v11;
          v18 = v12;
          v20 = (char *)this + 48;
          v22 = (char *)this + 52;
          v24 = (char *)this + 56;
          v26 = (char *)this + 64;
          v15 = 16LL;
          v17 = 8LL;
          v19 = 8LL;
          v21 = 4LL;
          v23 = 4LL;
          v25 = 4LL;
          v27 = 8LL;
          TlgWrite(v5, &unk_1400704E9, 0LL, v6, 9u, &pData);
        }
      }
    }
    else
    {
      if ( *(_DWORD *)v4 > 3u && TlgKeywordOn(v4, 0x400000000001uLL) )
      {
        v14 = *((_QWORD *)this + 5);
        v16 = &v11;
        v18 = v12;
        v20 = (char *)this + 48;
        v22 = (char *)this + 52;
        v24 = (char *)this + 56;
        v26 = (char *)this + 64;
        v15 = 16LL;
        v17 = 8LL;
        v19 = 8LL;
        v21 = 4LL;
        v23 = 4LL;
        v25 = 4LL;
        v27 = 8LL;
        TlgWrite(v7, &unk_140070590, 0LL, v8, 9u, &pData);
      }
      *((_QWORD *)this + 8) = 0LL;
    }
  }
}
