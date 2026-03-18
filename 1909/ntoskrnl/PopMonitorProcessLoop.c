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

__int64 PopMonitorProcessLoop()
{
  __int64 result; // rax
  GUID *v1; // rcx
  _OWORD v2[4]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD Src[20]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v4[9]; // [rsp+E8h] [rbp-20h] BYREF
  __int16 v5; // [rsp+13Ch] [rbp+34h]
  int v6; // [rsp+160h] [rbp+58h]
  int v7; // [rsp+164h] [rbp+5Ch]

  memset(&v2[1], 0, 0x30uLL);
  memset(v4, 0, sizeof(v4));
  while ( 1 )
  {
    *((_QWORD *)&v2[0] + 1) = 48LL;
    result = ZwAlpcSendWaitReceivePort((__int64)PopAlpcMonitorServerPort, 0LL, 0LL);
    if ( (_DWORD)result )
      return result;
    if ( (unsigned __int8)v5 == 3 )
    {
      LODWORD(v2[0]) = v7;
      if ( v6 )
      {
        if ( v6 == 2 )
        {
          memset(Src, 0, 0x48uLL);
          Src[0] = 11;
          Src[2] = v7;
          PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
        }
        else if ( v6 == 3 )
        {
          v1 = &GUID_VIDEO_CURRENT_MONITOR_BRIGHTNESS;
          goto LABEL_18;
        }
      }
      else
      {
        v1 = &GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS;
LABEL_18:
        PopSetPowerSettingValueAcDc(v1, 4LL, v2);
      }
    }
    else if ( (unsigned __int8)v5 > 4u )
    {
      if ( (unsigned __int8)v5 <= 6u )
      {
        ZwClose(PopAlpcMonitorClientPort);
        PopAlpcMonitorClientPort = 0LL;
      }
      else if ( (unsigned __int8)v5 == 10 )
      {
        if ( PopAlpcMonitorClientPort )
        {
          ZwClose(PopAlpcMonitorClientPort);
          PopAlpcMonitorClientPort = 0LL;
        }
        memset(v4, 0, sizeof(v4));
        LODWORD(v4[0]) = 0x100000;
        v4[2] = 256LL;
        LODWORD(v2[1]) = 48;
        *((_QWORD *)&v2[1] + 1) = 0LL;
        DWORD2(v2[2]) = 512;
        *(_QWORD *)&v2[2] = 0LL;
        v2[3] = 0LL;
        if ( (int)ZwAlpcAcceptConnectPort((__int64)&PopAlpcMonitorClientPort, (__int64)PopAlpcMonitorServerPort, 0LL) < 0 )
          ZwAlpcAcceptConnectPort((__int64)&PopAlpcMonitorClientPort, (__int64)PopAlpcMonitorServerPort, 0LL);
      }
    }
  }
}
