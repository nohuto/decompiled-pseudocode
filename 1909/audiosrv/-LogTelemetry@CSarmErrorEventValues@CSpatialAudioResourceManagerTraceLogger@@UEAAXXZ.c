/*
 * XREFs of ?LogTelemetry@CSarmErrorEventValues@CSpatialAudioResourceManagerTraceLogger@@UEAAXXZ @ 0x1801230B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001E08C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::CSarmErrorEventValues::LogTelemetry(
        CSpatialAudioResourceManagerTraceLogger::CSarmErrorEventValues *this)
{
  ULONGLONG TickCount64; // rbx
  const struct _TlgProvider_t **v3; // rax
  const struct _TlgProvider_t *v4; // r9
  const GUID *v5; // r8
  const struct _TlgProvider_t *v6; // r9
  const GUID *v7; // r8
  const struct _TlgProvider_t *v8; // r9
  __int64 v9; // [rsp+40h] [rbp-51h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp-49h] BYREF
  __int64 v11; // [rsp+50h] [rbp-41h] BYREF
  _QWORD v12[2]; // [rsp+58h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-29h] BYREF
  __int64 *v14; // [rsp+88h] [rbp-9h]
  __int64 v15; // [rsp+90h] [rbp-1h]
  _QWORD *v16; // [rsp+98h] [rbp+7h]
  __int64 v17; // [rsp+A0h] [rbp+Fh]
  char *v18; // [rsp+A8h] [rbp+17h]
  __int64 v19; // [rsp+B0h] [rbp+1Fh]
  char *v20; // [rsp+B8h] [rbp+27h]
  __int64 v21; // [rsp+C0h] [rbp+2Fh]
  char *v22; // [rsp+C8h] [rbp+37h]
  __int64 v23; // [rsp+D0h] [rbp+3Fh]

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
        if ( TlgKeywordOn(v4, 0x400000000000uLL) )
        {
          v15 = 8LL;
          v14 = &v11;
          v16 = v12;
          v18 = (char *)this + 48;
          v20 = (char *)this + 52;
          v22 = (char *)this + 56;
          v17 = 8LL;
          v19 = 4LL;
          v21 = 4LL;
          v23 = 4LL;
          TlgWrite(v6, &unk_1801795FA, v5, (LPCGUID)v6, 7u, &pData);
        }
      }
    }
    else if ( *(_DWORD *)v4 > 3u && TlgKeywordOn(v4, 0x400000000000uLL) )
    {
      v15 = 8LL;
      v14 = &v11;
      v16 = v12;
      v18 = (char *)this + 48;
      v20 = (char *)this + 52;
      v22 = (char *)this + 56;
      v17 = 8LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      TlgWrite(v8, &unk_18017968F, v7, (LPCGUID)v8, 7u, &pData);
    }
  }
}
