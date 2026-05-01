/*
 * XREFs of HamRpcSrvConnect @ 0x180007F40
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

__int64 __fastcall HamRpcSrvConnect(void *a1, struct _HAM_CLIENT_CONTEXT **a2, int a3, _QWORD *a4)
{
  unsigned int v7; // r9d
  struct _HAM_CLIENT_CONTEXT *v8; // rax
  struct _HAM_CLIENT_CONTEXT *v9; // rcx
  const struct _TlgProvider_t *v11; // rcx
  int ClientInformation; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  _DWORD TokenInformation[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _HAM_CLIENT_CONTEXT *v15; // [rsp+78h] [rbp-88h]
  _BYTE DestinationSid[80]; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int *p_ClientInformation; // [rsp+F0h] [rbp-10h]
  int v19; // [rsp+F8h] [rbp-8h]
  int v20; // [rsp+FCh] [rbp-4h]

  v15 = 0LL;
  Handle = 0LL;
  ClientInformation = CempRpcQueryClientInformation(a1, DestinationSid, TokenInformation, 0LL, (__int64)&Handle);
  v7 = ClientInformation;
  if ( ClientInformation >= 0 )
  {
    ClientInformation = HamSrvConnect(
                          (char *)RmSvcGlobals + 1608,
                          TokenInformation[1],
                          DestinationSid,
                          Handle,
                          TokenInformation[0],
                          0,
                          a3);
    v7 = ClientInformation;
    if ( ClientInformation < 0 )
    {
      v9 = v15;
    }
    else
    {
      v8 = v15;
      v9 = 0LL;
      *a2 = v15;
      v7 = 0;
      *a4 = *((_QWORD *)v8 + 13);
      ClientInformation = 0;
    }
    if ( !v9 )
      goto LABEL_5;
    HamSrvDisconnect(v9);
    goto LABEL_13;
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v20 = 0;
    p_ClientInformation = &ClientInformation;
    v19 = 4;
    TlgWrite(v11, &unk_180099862, 0LL, 0LL, 3u, &pData);
LABEL_13:
    v7 = ClientInformation;
  }
LABEL_5:
  if ( Handle )
  {
    NtClose(Handle);
    return (unsigned int)ClientInformation;
  }
  return v7;
}
