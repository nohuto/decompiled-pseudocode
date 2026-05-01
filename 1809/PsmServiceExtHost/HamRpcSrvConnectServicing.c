/*
 * XREFs of HamRpcSrvConnectServicing @ 0x180040160
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcQueryClientInformation @ 0x18000BC10 (CempRpcQueryClientInformation.c)
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000ED94 (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@PEAU_HAM_LOCAL_CALLBACKS@@2PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000F5B0 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@PEAU_HAM_L.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HamRpcSrvConnectServicing(void *a1, struct _HAM_CLIENT_CONTEXT **a2)
{
  unsigned int v3; // r9d
  struct _HAM_CLIENT_CONTEXT *v4; // rcx
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // [rsp+30h] [rbp-29h]
  __int64 v8; // [rsp+38h] [rbp-21h]
  int v9; // [rsp+50h] [rbp-9h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-1h] BYREF
  int v11; // [rsp+60h] [rbp+7h] BYREF
  unsigned int v12; // [rsp+64h] [rbp+Bh] BYREF
  struct _HAM_CLIENT_CONTEXT *v13; // [rsp+68h] [rbp+Fh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp+17h] BYREF
  int *v15; // [rsp+90h] [rbp+37h]
  int v16; // [rsp+98h] [rbp+3Fh]
  int v17; // [rsp+9Ch] [rbp+43h]

  v13 = 0LL;
  Handle = 0LL;
  v9 = CempRpcQueryClientInformation(a1, 0LL, &v11, &v12, 0LL, &Handle);
  v3 = v9;
  if ( v9 >= 0 )
  {
    v9 = HamSrvConnect((__int64)RmSvcGlobals + 1608, v12, 0LL, (__int64)Handle, v11, 4, v7, v8, (__int64)&v13);
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
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v17 = 0;
    v15 = &v9;
    v16 = 4;
    TlgWrite(v6, &unk_18008BA1A, 0LL, 0LL, 3u, &pData);
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
