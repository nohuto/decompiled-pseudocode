/*
 * XREFs of ?LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x140054020
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x14000EEC0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140013FB4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 */

void __fastcall CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::LogTelemetry(
        CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues *this)
{
  ULONGLONG TickCount64; // rbx
  const struct _TlgProvider_t **v3; // rax
  const struct _TlgProvider_t *v4; // r9
  const struct _TlgProvider_t *v5; // r9
  const struct _TlgProvider_t *v6; // r9
  __int64 v7; // [rsp+40h] [rbp-C8h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v9; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v10[2]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v12; // [rsp+88h] [rbp-80h]
  __int64 v13; // [rsp+90h] [rbp-78h]
  __int64 *v14; // [rsp+98h] [rbp-70h]
  __int64 v15; // [rsp+A0h] [rbp-68h]
  _QWORD *v16; // [rsp+A8h] [rbp-60h]
  __int64 v17; // [rsp+B0h] [rbp-58h]
  char *v18; // [rsp+B8h] [rbp-50h]
  __int64 v19; // [rsp+C0h] [rbp-48h]
  char *v20; // [rsp+C8h] [rbp-40h]
  __int64 v21; // [rsp+D0h] [rbp-38h]
  char *v22; // [rsp+D8h] [rbp-30h]
  __int64 v23; // [rsp+E0h] [rbp-28h]
  char *v24; // [rsp+E8h] [rbp-20h]
  __int64 v25; // [rsp+F0h] [rbp-18h]
  char *v26; // [rsp+F8h] [rbp-10h]
  __int64 v27; // [rsp+100h] [rbp-8h]
  char *v28; // [rsp+108h] [rbp+0h]
  __int64 v29; // [rsp+110h] [rbp+8h]
  char *v30; // [rsp+118h] [rbp+10h]
  __int64 v31; // [rsp+120h] [rbp+18h]
  char *v32; // [rsp+128h] [rbp+20h]
  __int64 v33; // [rsp+130h] [rbp+28h]

  if ( *((_QWORD *)this + 1) && *((_QWORD *)this + 2) && *((_QWORD *)this + 3) )
  {
    SystemTimeAsFileTime = 0LL;
    TickCount64 = GetTickCount64();
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v7 = 10000 * (**((_QWORD **)this + 3) - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime;
    v3 = (const struct _TlgProvider_t **)*((_QWORD *)this + 4);
    v9 = 10000 * (**((_QWORD **)this + 2) - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime;
    v10[0] = v7;
    v4 = *v3;
    if ( **((_BYTE **)this + 1) )
    {
      if ( *(_DWORD *)v4 > 3u )
      {
        if ( TlgKeywordOn(v4, 2uLL) )
        {
          v12 = *((_QWORD *)this + 5);
          v14 = &v9;
          v18 = (char *)this + 48;
          v20 = (char *)this + 52;
          v22 = (char *)this + 56;
          v24 = (char *)this + 60;
          v26 = (char *)this + 64;
          v28 = (char *)this + 68;
          v30 = (char *)this + 72;
          v32 = (char *)this + 76;
          v13 = 16LL;
          v15 = 8LL;
          v16 = v10;
          v17 = 8LL;
          v19 = 4LL;
          v21 = 4LL;
          v23 = 4LL;
          v25 = 4LL;
          v27 = 4LL;
          v29 = 4LL;
          v31 = 4LL;
          v33 = 4LL;
          TlgWrite(v5, &unk_140070002, 0LL, (LPCGUID)v5, 0xDu, &pData);
        }
      }
    }
    else if ( *(_DWORD *)v4 > 3u && TlgKeywordOn(v4, 0x400000000002uLL) )
    {
      v12 = *((_QWORD *)this + 5);
      v14 = &v9;
      v18 = (char *)this + 48;
      v20 = (char *)this + 52;
      v22 = (char *)this + 56;
      v24 = (char *)this + 60;
      v26 = (char *)this + 64;
      v28 = (char *)this + 68;
      v30 = (char *)this + 72;
      v32 = (char *)this + 76;
      v13 = 16LL;
      v15 = 8LL;
      v16 = v10;
      v17 = 8LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      TlgWrite(v6, &unk_140070136, 0LL, (LPCGUID)v6, 0xDu, &pData);
    }
  }
}
