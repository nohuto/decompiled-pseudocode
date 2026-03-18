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

__int64 __fastcall PopUmpoProcessMessage(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  int v3; // ebx
  HANDLE v5; // rbx
  _OWORD v6[8]; // [rsp+50h] [rbp-39h] BYREF

  memset(v6, 0, 120);
  v2 = *(unsigned __int16 *)(a1 + 4) & 0xFFFF00FF;
  if ( v2 == 1 )
    goto LABEL_15;
  if ( v2 <= 1 )
    return 0;
  if ( v2 > 3 )
  {
    if ( v2 > 4 )
    {
      if ( v2 <= 6 )
      {
        PopUmpoAlpcClientConnected = 0;
        PopAcquireUmpoPushLock(1);
        v5 = PopAlpcClientPort;
        PopAlpcClientPort = 0LL;
        ExReleasePushLockEx((ULONG_PTR)&PopUmpoPushLock, 0LL);
        KeLeaveCriticalRegion();
        ZwClose(v5);
        return (unsigned int)-1073740032;
      }
      if ( v2 == 10 )
      {
        *((_QWORD *)&v6[0] + 1) = 0LL;
        *(_QWORD *)&v6[1] = 0LL;
        DWORD2(v6[1]) = 512;
        *(_QWORD *)&v6[4] = 512LL;
        LODWORD(v6[0]) = 48;
        v6[2] = 0LL;
        v3 = ZwAlpcAcceptConnectPort((__int64)&PopAlpcClientPort, PopAlpcServerPort, 0LL);
        if ( v3 < 0 )
        {
          ZwAlpcAcceptConnectPort((__int64)&PopAlpcClientPort, PopAlpcServerPort, 0LL);
          return (unsigned int)v3;
        }
        PopUmpoAlpcClientConnected = 1;
      }
    }
    return 0;
  }
  if ( (*(_WORD *)(a1 + 4) & 0x2000) != 0 )
  {
LABEL_15:
    ZwAlpcCancelMessage(PopAlpcServerPort, 0LL, a2);
    return 0;
  }
  v3 = PopUmpoProcessPowerMessage(a1 + 40);
  if ( v3 >= 0 )
    return 0;
  return (unsigned int)v3;
}
