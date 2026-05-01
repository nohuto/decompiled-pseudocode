/*
 * XREFs of HamRpcSrvConnectStateChangeNotifications @ 0x1800410E0
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

__int64 __fastcall HamRpcSrvConnectStateChangeNotifications(
        void *a1,
        int *a2,
        struct _HAM_CLIENT_CONTEXT **a3,
        _QWORD *a4)
{
  unsigned int v7; // r9d
  __int64 v8; // rax
  struct _HAM_CLIENT_CONTEXT *v9; // rcx
  const struct _TlgProvider_t *v11; // rcx
  __int64 v12; // [rsp+38h] [rbp-C8h]
  __int64 v13; // [rsp+40h] [rbp-C0h]
  int v14; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  int TokenInformation; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v17; // [rsp+74h] [rbp-8Ch] BYREF
  struct _HAM_CLIENT_CONTEXT *v18; // [rsp+78h] [rbp-88h] BYREF
  _BYTE DestinationSid[80]; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int *v21; // [rsp+F0h] [rbp-10h]
  int v22; // [rsp+F8h] [rbp-8h]
  int v23; // [rsp+FCh] [rbp-4h]

  v18 = 0LL;
  Handle = 0LL;
  v14 = CempRpcQueryClientInformation(a1, DestinationSid, &TokenInformation, &v17, 0LL, &Handle);
  v7 = v14;
  if ( v14 >= 0 )
  {
    v14 = HamSrvConnect(
            (__int64)RmSvcGlobals + 1608,
            v17,
            (__int64)DestinationSid,
            (__int64)Handle,
            TokenInformation,
            6,
            0,
            v12,
            v13,
            a2,
            (__int64 *)&v18);
    v7 = v14;
    if ( v14 < 0 )
    {
      v9 = v18;
    }
    else
    {
      v8 = (__int64)v18;
      v9 = 0LL;
      *a3 = v18;
      v7 = 0;
      *a4 = *(_QWORD *)(v8 + 104);
      v14 = 0;
    }
    if ( !v9 )
      goto LABEL_5;
    HamSrvDisconnect(v9);
    goto LABEL_13;
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v23 = 0;
    v21 = &v14;
    v22 = 4;
    TlgWrite(v11, &unk_180099898, 0LL, 0LL, 3u, &pData);
LABEL_13:
    v7 = v14;
  }
LABEL_5:
  if ( Handle )
  {
    NtClose(Handle);
    return (unsigned int)v14;
  }
  return v7;
}
