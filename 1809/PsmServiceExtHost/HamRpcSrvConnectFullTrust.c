/*
 * XREFs of HamRpcSrvConnectFullTrust @ 0x18006BD50
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

__int64 __fastcall HamRpcSrvConnectFullTrust(void *a1, struct _HAM_CLIENT_CONTEXT **a2, _QWORD *a3)
{
  unsigned int v5; // r9d
  const struct _TlgProvider_t *v6; // rcx
  struct _HAM_CLIENT_CONTEXT *v7; // rax
  struct _HAM_CLIENT_CONTEXT *v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-89h]
  __int64 v11; // [rsp+38h] [rbp-81h]
  int v12; // [rsp+50h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-61h] BYREF
  int v14; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v15; // [rsp+64h] [rbp-55h] BYREF
  struct _HAM_CLIENT_CONTEXT *v16; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v17[80]; // [rsp+70h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp+7h] BYREF
  int *v19; // [rsp+E0h] [rbp+27h]
  int v20; // [rsp+E8h] [rbp+2Fh]
  int v21; // [rsp+ECh] [rbp+33h]

  v16 = 0LL;
  Handle = 0LL;
  v12 = CempRpcQueryClientInformation(a1, (__int64)v17, &v14, &v15, 0LL, &Handle);
  v5 = v12;
  if ( v12 >= 0 )
  {
    v12 = HamSrvConnect(
            (__int64)RmSvcGlobals + 1608,
            v15,
            (__int64)v17,
            (__int64)Handle,
            v14,
            3,
            v10,
            v11,
            (__int64)&v16);
    v5 = v12;
    if ( v12 < 0 )
    {
      v8 = v16;
    }
    else
    {
      v7 = v16;
      v8 = 0LL;
      *a2 = v16;
      v5 = 0;
      *a3 = *((_QWORD *)v7 + 13);
      v12 = 0;
    }
    if ( !v8 )
      goto LABEL_11;
    HamSrvDisconnect(v8);
    goto LABEL_10;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v21 = 0;
    v19 = &v12;
    v20 = 4;
    TlgWrite(v6, &unk_18008BA1A, 0LL, 0LL, 3u, &pData);
LABEL_10:
    v5 = v12;
  }
LABEL_11:
  if ( Handle )
  {
    NtClose(Handle);
    return (unsigned int)v12;
  }
  return v5;
}
