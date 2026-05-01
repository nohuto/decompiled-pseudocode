/*
 * XREFs of HamRpcSrvConnectDebugging @ 0x180041200
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

__int64 __fastcall HamRpcSrvConnectDebugging(void *a1, struct _HAM_CLIENT_CONTEXT **a2, _QWORD *a3)
{
  unsigned int v5; // r9d
  __int64 v6; // rax
  struct _HAM_CLIENT_CONTEXT *v7; // rcx
  const struct _TlgProvider_t *v9; // rcx
  __int64 v10; // [rsp+38h] [rbp-C8h]
  __int64 v11; // [rsp+40h] [rbp-C0h]
  int v12; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  int TokenInformation; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v15; // [rsp+74h] [rbp-8Ch] BYREF
  struct _HAM_CLIENT_CONTEXT *v16; // [rsp+78h] [rbp-88h] BYREF
  _BYTE DestinationSid[80]; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int *v19; // [rsp+F0h] [rbp-10h]
  int v20; // [rsp+F8h] [rbp-8h]
  int v21; // [rsp+FCh] [rbp-4h]

  v16 = 0LL;
  Handle = 0LL;
  v12 = CempRpcQueryClientInformation(a1, DestinationSid, &TokenInformation, &v15, 0LL, &Handle);
  v5 = v12;
  if ( v12 >= 0 )
  {
    v12 = HamSrvConnect(
            (__int64)RmSvcGlobals + 1608,
            v15,
            (__int64)DestinationSid,
            (__int64)Handle,
            TokenInformation,
            1,
            0,
            v10,
            v11,
            0LL,
            (__int64 *)&v16);
    v5 = v12;
    if ( v12 < 0 )
    {
      v7 = v16;
    }
    else
    {
      v6 = (__int64)v16;
      v7 = 0LL;
      *a2 = v16;
      v5 = 0;
      *a3 = *(_QWORD *)(v6 + 104);
      v12 = 0;
    }
    if ( !v7 )
      goto LABEL_5;
    HamSrvDisconnect(v7);
    goto LABEL_13;
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v21 = 0;
    v19 = &v12;
    v20 = 4;
    TlgWrite(v9, &unk_180099862, 0LL, 0LL, 3u, &pData);
LABEL_13:
    v5 = v12;
  }
LABEL_5:
  if ( Handle )
  {
    NtClose(Handle);
    return (unsigned int)v12;
  }
  return v5;
}
