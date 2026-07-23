/*
 * XREFs of PopUmpoProcessMessage @ 0x14069DA6C
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1400D636C (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x1400F0418 (PopUmpoProcessMessages.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x1401C1AF0 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x1401C1B10 (ZwAlpcCancelMessage.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopAcquireUmpoPushLock @ 0x1406720EC (PopAcquireUmpoPushLock.c)
 *     PopUmpoProcessPowerMessage @ 0x14069DBA8 (PopUmpoProcessPowerMessage.c)
 */

__int64 __fastcall PopUmpoProcessMessage(PPORT_MESSAGE ConnectionRequest, PALPC_CONTEXT_ATTR MessageContext)
{
  unsigned int v4; // eax
  NTSTATUS v5; // ebx
  HANDLE v7; // rbx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+80h] [rbp-9h] BYREF

  memset(&PortAttributes, 0, sizeof(PortAttributes));
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v4 = (unsigned __int16)ConnectionRequest->u2.s2.Type & 0xFFFF00FF;
  if ( v4 == 1 )
    goto LABEL_15;
  if ( v4 <= 1 )
    return 0;
  if ( v4 > 3 )
  {
    if ( v4 > 4 )
    {
      if ( v4 <= 6 )
      {
        PopUmpoAlpcClientConnected = 0;
        PopAcquireUmpoPushLock(1);
        v7 = PopAlpcClientPort;
        PopAlpcClientPort = 0LL;
        ExReleasePushLockEx((ULONG_PTR)&PopUmpoPushLock, 0LL);
        KeLeaveCriticalRegion();
        ZwClose(v7);
        return (unsigned int)-1073740032;
      }
      if ( v4 == 10 )
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = 0LL;
        ObjectAttributes.Attributes = 512;
        PortAttributes.MaxMessageLength = 512LL;
        ObjectAttributes.Length = 48;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v5 = ZwAlpcAcceptConnectPort(
               &PopAlpcClientPort,
               PopAlpcServerPort,
               0,
               &ObjectAttributes,
               &PortAttributes,
               0LL,
               ConnectionRequest,
               0LL,
               PopUmpoAlpcClientConnected == 0);
        if ( v5 < 0 )
        {
          ZwAlpcAcceptConnectPort(
            &PopAlpcClientPort,
            PopAlpcServerPort,
            0,
            &ObjectAttributes,
            &PortAttributes,
            0LL,
            ConnectionRequest,
            0LL,
            0);
          return (unsigned int)v5;
        }
        PopUmpoAlpcClientConnected = 1;
      }
    }
    return 0;
  }
  if ( (ConnectionRequest->u2.s2.Type & 0x2000) != 0 )
  {
LABEL_15:
    ZwAlpcCancelMessage(PopAlpcServerPort, 0, MessageContext);
    return 0;
  }
  v5 = PopUmpoProcessPowerMessage(&ConnectionRequest[1]);
  if ( v5 >= 0 )
    return 0;
  return (unsigned int)v5;
}
