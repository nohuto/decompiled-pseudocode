/*
 * XREFs of ?LogTelemetry@CSarmErrorEventValues@CSpatialAudioResourceManagerTraceLogger@@UEAAXXZ @ 0x180116BC0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::CSarmErrorEventValues::LogTelemetry(
        CSpatialAudioResourceManagerTraceLogger::CSarmErrorEventValues *this)
{
  ULONGLONG TickCount64; // rbx
  __int64 v3; // r8
  const struct _TlgProvider_t **v4; // rax
  const struct _TlgProvider_t *v5; // r9
  const GUID *v6; // r8
  const struct _TlgProvider_t *v7; // r9
  const GUID *v8; // r8
  const struct _TlgProvider_t *v9; // r9
  __int64 v10; // [rsp+38h] [rbp-59h]
  __int64 v11; // [rsp+48h] [rbp-49h] BYREF
  __int64 v12; // [rsp+50h] [rbp-41h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+58h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-29h] BYREF
  __int64 *v15; // [rsp+88h] [rbp-9h]
  __int64 v16; // [rsp+90h] [rbp-1h]
  __int64 *v17; // [rsp+98h] [rbp+7h]
  __int64 v18; // [rsp+A0h] [rbp+Fh]
  char *v19; // [rsp+A8h] [rbp+17h]
  __int64 v20; // [rsp+B0h] [rbp+1Fh]
  char *v21; // [rsp+B8h] [rbp+27h]
  __int64 v22; // [rsp+C0h] [rbp+2Fh]
  char *v23; // [rsp+C8h] [rbp+37h]
  __int64 v24; // [rsp+D0h] [rbp+3Fh]

  if ( *((_QWORD *)this + 1) && *((_QWORD *)this + 2) && *((_QWORD *)this + 3) )
  {
    SystemTimeAsFileTime = 0LL;
    TickCount64 = GetTickCount64();
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v10 = 10000 * (**((_QWORD **)this + 2) - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime;
    v3 = 10000 * (**((_QWORD **)this + 3) - TickCount64);
    LODWORD(v11) = 0;
    v12 = (unsigned int)(v3 + SystemTimeAsFileTime.dwLowDateTime);
    v4 = (const struct _TlgProvider_t **)*((_QWORD *)this + 4);
    v11 = v10;
    HIDWORD(v12) = (unsigned __int64)(v3 + *(_QWORD *)&SystemTimeAsFileTime) >> 32;
    v5 = *v4;
    if ( **((_BYTE **)this + 1) )
    {
      if ( *(_DWORD *)v5 > 3u )
      {
        if ( TlgKeywordOn(v5, 0x400000000000uLL) )
        {
          v16 = 8LL;
          v15 = &v11;
          v17 = &v12;
          v19 = (char *)this + 48;
          v21 = (char *)this + 52;
          v23 = (char *)this + 56;
          v18 = 8LL;
          v20 = 4LL;
          v22 = 4LL;
          v24 = 4LL;
          TlgWrite(v7, &unk_180175495, v6, (LPCGUID)v7, 7u, &pData);
        }
      }
    }
    else if ( *(_DWORD *)v5 > 3u && TlgKeywordOn(v5, 0x400000000000uLL) )
    {
      v16 = 8LL;
      v15 = &v11;
      v17 = &v12;
      v19 = (char *)this + 48;
      v21 = (char *)this + 52;
      v23 = (char *)this + 56;
      v18 = 8LL;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      TlgWrite(v9, &unk_180175400, v8, (LPCGUID)v9, 7u, &pData);
    }
  }
}
