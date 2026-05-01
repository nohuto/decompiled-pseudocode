/*
 * XREFs of HamRpcSrvConnectExtendedExecution @ 0x18000A3B0
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

__int64 __fastcall HamRpcSrvConnectExtendedExecution(void *a1, struct _HAM_CLIENT_CONTEXT **a2, _QWORD *a3)
{
  unsigned int v5; // r9d
  struct _HAM_CLIENT_CONTEXT *v6; // rax
  struct _HAM_CLIENT_CONTEXT *v7; // rcx
  const struct _TlgProvider_t *v9; // rcx
  int ClientInformation; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  _DWORD TokenInformation[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _HAM_CLIENT_CONTEXT *v13; // [rsp+78h] [rbp-88h]
  _BYTE DestinationSid[80]; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int *p_ClientInformation; // [rsp+F0h] [rbp-10h]
  int v17; // [rsp+F8h] [rbp-8h]
  int v18; // [rsp+FCh] [rbp-4h]

  v13 = 0LL;
  Handle = 0LL;
  ClientInformation = CempRpcQueryClientInformation(a1, DestinationSid, TokenInformation, 0LL, (__int64)&Handle);
  v5 = ClientInformation;
  if ( ClientInformation >= 0 )
  {
    ClientInformation = HamSrvConnect(
                          (char *)RmSvcGlobals + 1608,
                          TokenInformation[1],
                          DestinationSid,
                          Handle,
                          TokenInformation[0],
                          2,
                          0);
    v5 = ClientInformation;
    if ( ClientInformation < 0 )
    {
      v7 = v13;
    }
    else
    {
      v6 = v13;
      v7 = 0LL;
      *a2 = v13;
      v5 = 0;
      *a3 = *((_QWORD *)v6 + 13);
      ClientInformation = 0;
    }
    if ( !v7 )
      goto LABEL_5;
    HamSrvDisconnect(v7);
    goto LABEL_13;
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v18 = 0;
    p_ClientInformation = &ClientInformation;
    v17 = 4;
    TlgWrite(v9, &unk_1800998D9, 0LL, 0LL, 3u, &pData);
LABEL_13:
    v5 = ClientInformation;
  }
LABEL_5:
  if ( Handle )
  {
    NtClose(Handle);
    return (unsigned int)ClientInformation;
  }
  return v5;
}
