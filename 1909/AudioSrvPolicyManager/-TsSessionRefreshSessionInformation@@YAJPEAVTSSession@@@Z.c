/*
 * XREFs of ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x1800244EC
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002488C (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x180025BC4 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x180025D98 (-TsSessionIdLogon@@YAJK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800010A0 (_TlgWrite.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000499C (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x180023CBC (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 *     __security_check_cookie @ 0x1800342C0 (__security_check_cookie.c)
 */

__int64 __fastcall TsSessionRefreshSessionInformation(struct TSSession *a1)
{
  DWORD LastError; // edi
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  LPWSTR ppBuffer; // [rsp+30h] [rbp-58h] BYREF
  DWORD pBytesReturned; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  struct TSSession *v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]

  LastError = 0;
  ppBuffer = 0LL;
  v3 = (const struct _TlgProvider_t *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v3 > 4u )
  {
    v12 = 0;
    v10 = a1;
    v11 = 4;
    TlgWrite(v3, &unk_180042F4E, v4, v5, 3u, &pData);
  }
  if ( WTSQuerySessionInformationW(0LL, *(_DWORD *)a1, WTSSessionInfo, &ppBuffer, &pBytesReturned) )
  {
    EnterCriticalSection(&CriticalSection);
    ppBuffer = (LPWSTR)_InterlockedExchange64((volatile __int64 *)a1 + 5, (__int64)ppBuffer);
    TsSessionRefreshUserSid(a1);
    LeaveCriticalSection(&CriticalSection);
  }
  else
  {
    LastError = GetLastError();
  }
  if ( ppBuffer )
    WTSFreeMemory(ppBuffer);
  return LastError;
}
