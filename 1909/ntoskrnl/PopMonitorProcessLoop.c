/*
 * XREFs of PopMonitorProcessLoop @ 0x140789728
 * Callers:
 *     PopMonitorAlpcCallback @ 0x1408B41E0 (PopMonitorAlpcCallback.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140A1F860 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1400D636C (PopUmpoSendPowerMessage.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x1401C1AF0 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1401C1D90 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopSetPowerSettingValueAcDc @ 0x14069D520 (PopSetPowerSettingValueAcDc.c)
 */

NTSTATUS PopMonitorProcessLoop()
{
  NTSTATUS result; // eax
  GUID *v1; // rcx
  __int64 v2; // [rsp+58h] [rbp-B0h] BYREF
  ULONG_PTR BufferLength; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD Src[20]; // [rsp+98h] [rbp-70h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+E8h] [rbp-20h] BYREF
  _PORT_MESSAGE ConnectionRequest; // [rsp+138h] [rbp+30h] BYREF
  int v8; // [rsp+160h] [rbp+58h]
  int v9; // [rsp+164h] [rbp+5Ch]

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(&PortAttributes, 0, sizeof(PortAttributes));
  while ( 1 )
  {
    BufferLength = 48LL;
    result = ZwAlpcSendWaitReceivePort(
               PopAlpcMonitorServerPort,
               0,
               0LL,
               0LL,
               &ConnectionRequest,
               &BufferLength,
               0LL,
               0LL);
    if ( result )
      return result;
    if ( LOBYTE(ConnectionRequest.u2.ZeroInit) == 3 )
    {
      LODWORD(v2) = v9;
      if ( v8 )
      {
        if ( v8 == 2 )
        {
          memset(Src, 0, 0x48uLL);
          Src[0] = 11;
          Src[2] = v9;
          PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
        }
        else if ( v8 == 3 )
        {
          v1 = &GUID_VIDEO_CURRENT_MONITOR_BRIGHTNESS;
          goto LABEL_18;
        }
      }
      else
      {
        v1 = &GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS;
LABEL_18:
        PopSetPowerSettingValueAcDc(v1, 4LL, &v2);
      }
    }
    else if ( LOBYTE(ConnectionRequest.u2.ZeroInit) > 4u )
    {
      if ( LOBYTE(ConnectionRequest.u2.ZeroInit) <= 6u )
      {
        ZwClose(PopAlpcMonitorClientPort);
        PopAlpcMonitorClientPort = 0LL;
      }
      else if ( LOBYTE(ConnectionRequest.u2.ZeroInit) == 10 )
      {
        if ( PopAlpcMonitorClientPort )
        {
          ZwClose(PopAlpcMonitorClientPort);
          PopAlpcMonitorClientPort = 0LL;
        }
        memset(&PortAttributes, 0, sizeof(PortAttributes));
        PortAttributes.Flags = 0x100000;
        PortAttributes.MaxMessageLength = 256LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwAlpcAcceptConnectPort(
               &PopAlpcMonitorClientPort,
               PopAlpcMonitorServerPort,
               0,
               &ObjectAttributes,
               &PortAttributes,
               0LL,
               &ConnectionRequest,
               0LL,
               1u) < 0 )
          ZwAlpcAcceptConnectPort(
            &PopAlpcMonitorClientPort,
            PopAlpcMonitorServerPort,
            0,
            &ObjectAttributes,
            &PortAttributes,
            0LL,
            &ConnectionRequest,
            0LL,
            0);
      }
    }
  }
}
