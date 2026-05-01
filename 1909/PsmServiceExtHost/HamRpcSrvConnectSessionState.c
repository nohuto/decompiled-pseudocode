/*
 * XREFs of HamRpcSrvConnectSessionState @ 0x180041420
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcQueryClientInformation @ 0x18000A4C4 (CempRpcQueryClientInformation.c)
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000B13C (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAT_HAM_STATE_CHANGE_FLAGS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18002ED58 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HamRpcSrvConnectSessionState(void *a1, struct _HAM_CLIENT_CONTEXT **a2)
{
  unsigned int v3; // r9d
  struct _HAM_CLIENT_CONTEXT *v4; // rcx
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // [rsp+38h] [rbp-31h]
  __int64 v8; // [rsp+40h] [rbp-29h]
  int v9; // [rsp+60h] [rbp-9h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-1h] BYREF
  int TokenInformation; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v12; // [rsp+74h] [rbp+Bh] BYREF
  struct _HAM_CLIENT_CONTEXT *v13; // [rsp+78h] [rbp+Fh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp+17h] BYREF
  int *v15; // [rsp+A0h] [rbp+37h]
  int v16; // [rsp+A8h] [rbp+3Fh]
  int v17; // [rsp+ACh] [rbp+43h]

  v13 = 0LL;
  Handle = 0LL;
  v9 = CempRpcQueryClientInformation(a1, 0LL, &TokenInformation, &v12, 0LL, &Handle);
  v3 = v9;
  if ( v9 >= 0 )
  {
    v9 = HamSrvConnect(
           (__int64)RmSvcGlobals + 1608,
           v12,
           0LL,
           (__int64)Handle,
           TokenInformation,
           5,
           0,
           v7,
           v8,
           0LL,
           (__int64 *)&v13);
    v3 = v9;
    if ( v9 < 0 )
    {
      v4 = v13;
    }
    else
    {
      v4 = 0LL;
      v3 = 0;
      *a2 = v13;
      v9 = 0;
    }
    if ( !v4 )
      goto LABEL_5;
    HamSrvDisconnect(v4);
    goto LABEL_13;
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v17 = 0;
    v15 = &v9;
    v16 = 4;
    TlgWrite(v6, &unk_180099862, 0LL, 0LL, 3u, &pData);
LABEL_13:
    v3 = v9;
  }
LABEL_5:
  if ( Handle )
  {
    NtClose(Handle);
    return (unsigned int)v9;
  }
  return v3;
}
