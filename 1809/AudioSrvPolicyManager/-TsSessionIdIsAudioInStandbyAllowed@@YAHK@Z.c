/*
 * XREFs of ?TsSessionIdIsAudioInStandbyAllowed@@YAHK@Z @ 0x1800298FC
 * Callers:
 *     ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x180017170 (-GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1800010A0 (_TlgWrite.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000829C (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180028878 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     __security_check_cookie @ 0x1800369D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdIsAudioInStandbyAllowed(DWORD a1)
{
  unsigned int v2; // edi
  struct TSSession *v3; // rsi
  int v4; // eax
  const struct _TlgProvider_t *v5; // r8
  const GUID *v6; // r9
  struct TSSession *v8[4]; // [rsp+38h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-39h] BYREF
  struct TSSession *v10; // [rsp+78h] [rbp-19h]
  __int64 v11; // [rsp+80h] [rbp-11h]
  char *v12; // [rsp+88h] [rbp-9h]
  __int64 v13; // [rsp+90h] [rbp-1h]
  char *v14; // [rsp+98h] [rbp+7h]
  __int64 v15; // [rsp+A0h] [rbp+Fh]
  int *v16; // [rsp+A8h] [rbp+17h]
  __int64 v17; // [rsp+B0h] [rbp+1Fh]
  int *v18; // [rsp+B8h] [rbp+27h]
  __int64 v19; // [rsp+C0h] [rbp+2Fh]
  int *v20; // [rsp+C8h] [rbp+37h]
  __int64 v21; // [rsp+D0h] [rbp+3Fh]

  v8[1] = (struct TSSession *)-2LL;
  v2 = 1;
  v3 = (CApplicationManager *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v8[2] = v3;
  if ( !(unsigned int)TsSessionFromSessionId(a1, 0, 0LL, v8) )
  {
    v4 = *((_DWORD *)v8[0] + 58);
    if ( (v4 == 1 || !*((_DWORD *)v8[0] + 57)) && g_bLowPowerEpoch == 1
      || (v4 == 1 || !*((_DWORD *)v8[0] + 57)) && g_bApmSuspended == 1 )
    {
      v2 = 0;
    }
    else if ( v4 == 1 && g_bIsSystemAsleep == 1 )
    {
      v2 = 0;
    }
    g_bIsSystemAsleep &= -(v4 != 0);
    v5 = (const struct _TlgProvider_t *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
    if ( *(_DWORD *)v5 > 4u )
    {
      v10 = v8[0];
      v11 = 4LL;
      v12 = (char *)v8[0] + 232;
      v13 = 4LL;
      v14 = (char *)v8[0] + 228;
      v15 = 4LL;
      v16 = &g_bLowPowerEpoch;
      v17 = 4LL;
      v18 = &g_bApmSuspended;
      v19 = 4LL;
      v20 = &g_bIsSystemAsleep;
      v21 = 4LL;
      TlgWrite(v5, &unk_1800449D1, (LPCGUID)v5, v6, 8u, &pData);
    }
  }
  if ( v3 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v3);
  return v2;
}
