/*
 * XREFs of ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00E1B64
 * Callers:
 *     PowerConnectionEvent @ 0x1C0049038 (PowerConnectionEvent.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00E1A40 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     RIMSendLatencyMgtRequest @ 0x1C009DC40 (RIMSendLatencyMgtRequest.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

NTSTATUS __fastcall SetInputModeWithCrit(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  _DWORD InputBuffer[2]; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]

  v3 = a1;
  if ( !gSystemIsAoAc )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  InputBuffer[1] = 0;
  InputBuffer[0] = 28;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      RIMSendLatencyMgtRequest(1u);
      *(_DWORD *)gpsi |= 0x2000u;
      dword_1C01CE254 = 1;
      *(_DWORD *)gpsi &= ~0x4000u;
      dword_1C01CE258 = 0;
      v6 = 1;
    }
    else
    {
      *(_DWORD *)gpsi &= ~0x2000u;
      dword_1C01CE254 = 0;
      *(_DWORD *)gpsi |= 0x4000u;
      dword_1C01CE258 = 1;
      v6 = 2;
    }
  }
  else
  {
    *(_DWORD *)gpsi &= ~0x4000u;
    dword_1C01CE258 = 0;
    *(_DWORD *)gpsi &= ~0x2000u;
    dword_1C01CE254 = 0;
    if ( (int)IsWakeRITForConfigSwitchSupported() >= 0 )
      WakeRITForConfigSwitch();
    v6 = 0;
  }
  return ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0xCu, 0LL, 0);
}
