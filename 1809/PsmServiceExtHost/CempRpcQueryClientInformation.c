/*
 * XREFs of CempRpcQueryClientInformation @ 0x18000BC10
 * Callers:
 *     HamRpcSrvConnect @ 0x1800086E0 (HamRpcSrvConnect.c)
 *     HamRpcSrvConnectExtendedExecution @ 0x18000BDF0 (HamRpcSrvConnectExtendedExecution.c)
 *     RmgrSrv_RegisterWithServer @ 0x18002FBB0 (RmgrSrv_RegisterWithServer.c)
 *     CrmRpcSrvRegister @ 0x18003B8F0 (CrmRpcSrvRegister.c)
 *     HamRpcSrvConnectDebugging @ 0x18003FF60 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x180040060 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectServicing @ 0x180040160 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectSessionState @ 0x180040260 (HamRpcSrvConnectSessionState.c)
 *     RmCoreRpcSrvConnectToRmServer @ 0x1800464E0 (RmCoreRpcSrvConnectToRmServer.c)
 *     ?Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z @ 0x180046654 (-Handle_RM_ConnectToServer@ResourceManagerServerProxy@@QEAAJPEAXPEAPEAXPEAU_WNF_STATE_NAME@@@Z.c)
 *     RmgrSrv_RmSetMemoryUsageLimit @ 0x180054C20 (RmgrSrv_RmSetMemoryUsageLimit.c)
 *     HamRpcSrvConnectFullTrust @ 0x18006BD50 (HamRpcSrvConnectFullTrust.c)
 * Callees:
 *     CempGetUserSidFromToken @ 0x18000BD78 (CempGetUserSidFromToken.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall CempRpcQueryClientInformation(
        RPC_BINDING_HANDLE ClientBinding,
        __int64 a2,
        void *a3,
        _DWORD *a4,
        __int64 a5,
        _QWORD *a6)
{
  HANDLE CurrentThread; // rax
  NTSTATUS UserSidFromToken; // ebx
  void *v12; // rax
  void *TokenHandle; // [rsp+30h] [rbp-89h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-81h] BYREF
  _DWORD RpcCallAttributes[28]; // [rsp+40h] [rbp-79h] BYREF

  TokenHandle = 0LL;
  if ( RpcImpersonateClient(ClientBinding) )
    goto LABEL_18;
  CurrentThread = GetCurrentThread();
  UserSidFromToken = NtOpenThreadToken(CurrentThread, 8u, 1u, &TokenHandle);
  if ( UserSidFromToken < 0
    || a2 && (UserSidFromToken = CempGetUserSidFromToken(TokenHandle, a2), UserSidFromToken < 0)
    || a3
    && (UserSidFromToken = NtQueryInformationToken(TokenHandle, TokenSessionId, a3, 4u, &ReturnLength),
        UserSidFromToken < 0)
    || a5 && (UserSidFromToken = RtlQueryTokenHostIdAsUlong64(TokenHandle, a5), UserSidFromToken < 0) )
  {
    RpcRevertToSelf();
    goto LABEL_15;
  }
  if ( RpcRevertToSelf() )
    goto LABEL_18;
  if ( a4 )
  {
    memset_0(RpcCallAttributes, 0, sizeof(RpcCallAttributes));
    RpcCallAttributes[0] = 2;
    RpcCallAttributes[1] = 16;
    if ( !RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes) )
    {
      *a4 = RpcCallAttributes[16];
      goto LABEL_12;
    }
LABEL_18:
    UserSidFromToken = -1073741823;
    goto LABEL_15;
  }
LABEL_12:
  if ( a6 )
  {
    v12 = TokenHandle;
    TokenHandle = 0LL;
    *a6 = v12;
  }
  UserSidFromToken = 0;
LABEL_15:
  if ( TokenHandle )
    CloseHandle(TokenHandle);
  return (unsigned int)UserSidFromToken;
}
