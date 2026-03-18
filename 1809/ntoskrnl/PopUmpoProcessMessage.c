/*
 * XREFs of PopUmpoProcessMessage @ 0x14058AF88
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1400035C0 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x140004B48 (PopUmpoProcessMessages.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x1401B9010 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x1401B9030 (ZwAlpcCancelMessage.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     PopAcquireUmpoPushLock @ 0x140589AF4 (PopAcquireUmpoPushLock.c)
 *     PopUmpoProcessPowerMessage @ 0x14058B0C0 (PopUmpoProcessPowerMessage.c)
 */

__int64 __fastcall PopUmpoProcessMessage(__int64 a1, __int64 a2)
{
  int v3; // ecx
  unsigned int v4; // eax
  int v5; // ebx
  HANDLE v7; // rbx
  _QWORD v8[9]; // [rsp+80h] [rbp-68h] BYREF

  v3 = *(unsigned __int16 *)(a1 + 4);
  v4 = v3 & 0xFFFF00FF;
  if ( (v3 & 0xFFFF00FF) == 1 )
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
        memset(v8, 0, sizeof(v8));
        v8[2] = 512LL;
        v5 = ZwAlpcAcceptConnectPort((__int64)&PopAlpcClientPort, PopAlpcServerPort, 0LL);
        if ( v5 < 0 )
        {
          ZwAlpcAcceptConnectPort((__int64)&PopAlpcClientPort, PopAlpcServerPort, 0LL);
          return (unsigned int)v5;
        }
        PopUmpoAlpcClientConnected = 1;
      }
    }
    return 0;
  }
  if ( (v3 & 0x2000) != 0 )
  {
LABEL_15:
    ZwAlpcCancelMessage(PopAlpcServerPort, 0LL, a2);
    return 0;
  }
  v5 = PopUmpoProcessPowerMessage(a1 + 40);
  if ( v5 >= 0 )
    return 0;
  return (unsigned int)v5;
}
