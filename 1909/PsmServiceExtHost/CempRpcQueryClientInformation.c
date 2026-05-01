/*
 * XREFs of CempRpcQueryClientInformation @ 0x18000A4C4
 * Callers:
 *     HamRpcSrvConnect @ 0x180007F40 (HamRpcSrvConnect.c)
 *     CrmRpcSrvRegister @ 0x180008070 (CrmRpcSrvRegister.c)
 *     RmgrSrv_RegisterWithServer @ 0x180008410 (RmgrSrv_RegisterWithServer.c)
 *     HamRpcSrvConnectExtendedExecution @ 0x18000A3B0 (HamRpcSrvConnectExtendedExecution.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x1800410E0 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectDebugging @ 0x180041200 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvConnectServicing @ 0x180041320 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectSessionState @ 0x180041420 (HamRpcSrvConnectSessionState.c)
 *     RmCoreRpcSrvConnectToRmServer @ 0x180045900 (RmCoreRpcSrvConnectToRmServer.c)
 *     ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x180045A74 (-Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z.c)
 *     RmgrSrv_RmSetMemoryUsageLimit @ 0x180061650 (RmgrSrv_RmSetMemoryUsageLimit.c)
 *     HamRpcSrvConnectFullTrust @ 0x180079B70 (HamRpcSrvConnectFullTrust.c)
 * Callees:
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall CempRpcQueryClientInformation(
        RPC_BINDING_HANDLE ClientBinding,
        PSID DestinationSid,
        PVOID TokenInformation,
        _DWORD *a4,
        __int64 a5,
        _QWORD *a6)
{
  HANDLE CurrentThread; // rax
  NTSTATUS TokenHostIdAsUlong64; // ebx
  void *v12; // rax
  void *TokenHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v16; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v18[56]; // [rsp+48h] [rbp-B8h] BYREF
  int v19; // [rsp+80h] [rbp-80h]
  PSID TokenInformationa[12]; // [rsp+B0h] [rbp-50h] BYREF

  TokenHandle = 0LL;
  if ( RpcImpersonateClient(ClientBinding) )
    goto LABEL_20;
  CurrentThread = GetCurrentThread();
  TokenHostIdAsUlong64 = NtOpenThreadToken(CurrentThread, 8u, 1u, &TokenHandle);
  if ( TokenHostIdAsUlong64 < 0 )
    goto LABEL_22;
  if ( DestinationSid )
  {
    TokenHostIdAsUlong64 = NtQueryInformationToken(TokenHandle, TokenUser, TokenInformationa, 0x58u, &ReturnLength);
    if ( TokenHostIdAsUlong64 >= 0 )
      TokenHostIdAsUlong64 = RtlCopySid(0x44u, DestinationSid, TokenInformationa[0]);
    if ( TokenHostIdAsUlong64 < 0 )
      goto LABEL_22;
  }
  if ( TokenInformation
    && (TokenHostIdAsUlong64 = NtQueryInformationToken(TokenHandle, TokenSessionId, TokenInformation, 4u, &v16),
        TokenHostIdAsUlong64 < 0)
    || a5 && (TokenHostIdAsUlong64 = RtlQueryTokenHostIdAsUlong64(TokenHandle, a5), TokenHostIdAsUlong64 < 0) )
  {
LABEL_22:
    RpcRevertToSelf();
    goto LABEL_17;
  }
  if ( RpcRevertToSelf() )
    goto LABEL_20;
  if ( a4 )
  {
    memset_0(v18, 0, 0x68uLL);
    RpcCallAttributes[0] = 2;
    RpcCallAttributes[1] = 16;
    if ( !RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes) )
    {
      *a4 = v19;
      goto LABEL_14;
    }
LABEL_20:
    TokenHostIdAsUlong64 = -1073741823;
    goto LABEL_17;
  }
LABEL_14:
  if ( a6 )
  {
    v12 = TokenHandle;
    TokenHandle = 0LL;
    *a6 = v12;
  }
  TokenHostIdAsUlong64 = 0;
LABEL_17:
  if ( TokenHandle )
    CloseHandle(TokenHandle);
  return (unsigned int)TokenHostIdAsUlong64;
}
