/*
 * XREFs of WmsgpSendPSPMessage @ 0x1C0246740
 * Callers:
 *     xxxSendWinlogonPowerMessage @ 0x1C00B1800 (xxxSendWinlogonPowerMessage.c)
 * Callees:
 *     ClientI_WMsgkSendPSPMessage @ 0x1C00B1894 (ClientI_WMsgkSendPSPMessage.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

RPC_STATUS __fastcall WmsgpSendPSPMessage(__int64 a1, int a2, __int128 *a3, RPC_STATUS *a4)
{
  __int128 v6; // xmm6
  RPC_BINDING_HANDLE v7; // r14
  RPC_STATUS result; // eax
  NTSTATUS v9; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-C8h] BYREF
  RPC_STATUS *v11; // [rsp+48h] [rbp-B0h]
  __int128 v12; // [rsp+50h] [rbp-A8h] BYREF
  _RPC_ASYNC_STATE pAsync; // [rsp+60h] [rbp-98h] BYREF

  v6 = *a3;
  v11 = a4;
  v7 = gWinLogonRpcHandle;
  memset(&pAsync, 0, sizeof(pAsync));
  memset(&Event, 0, sizeof(Event));
  result = RpcAsyncInitializeHandle(&pAsync, 0x58u);
  if ( !result )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    pAsync.UserInfo = 0LL;
    pAsync.NotificationType = RpcNotificationTypeEvent;
    pAsync.u.Event = &Event;
    v12 = v6;
    ClientI_WMsgkSendPSPMessage((__int64)&pAsync, (__int64)v7, a2, &v12);
    if ( KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL) )
    {
      if ( !RpcAsyncCancelCall(&pAsync, 1) )
      {
        v9 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        RtlNtStatusToDosError(v9);
      }
    }
    result = RpcAsyncCompleteCall(&pAsync, 0LL);
    *a4 = result;
  }
  return result;
}
