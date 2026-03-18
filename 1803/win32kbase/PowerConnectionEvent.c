/*
 * XREFs of PowerConnectionEvent @ 0x1C00A456C
 * Callers:
 *     SetConnectCompletedState @ 0x1C00A1570 (SetConnectCompletedState.c)
 *     SetConnectedState @ 0x1C00A15B0 (SetConnectedState.c)
 *     xxxRemoteConnect @ 0x1C00A1760 (xxxRemoteConnect.c)
 * Callees:
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0036000 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00A2BD4 (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PowerConnectionEvent(int a1)
{
  int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  int InputBuffer; // [rsp+40h] [rbp+8h] BYREF
  int OutputBuffer; // [rsp+48h] [rbp+10h] BYREF
  int v6; // [rsp+4Ch] [rbp+14h]

  InputBuffer = a1;
  v1 = gbConnected != 0;
  if ( dword_1C01A3074 != v1 )
  {
    dword_1C01A3074 = gbConnected != 0;
    CInputGlobals::UpdateLastInputTime(
      (__int64)gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      0xEu);
    LOBYTE(InputBuffer) = v1;
    BYTE1(InputBuffer) = gProtocolType == 0;
    if ( ZwPowerInformation(PowerInformationLevelMaximum|SystemReserveHiberFile, &InputBuffer, 2u, &OutputBuffer, 8u) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
    if ( v1 )
    {
      giPowerSessionActivityTimeOutMs = 1000 * OutputBuffer;
      giPowerOffTimeOutMs = 1000 * v6;
      if ( gSystemIsAoAc )
        SetInputModeWithCrit(0LL, v2);
    }
    else
    {
      if ( v6 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
      if ( OutputBuffer )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
      giPowerSessionActivityTimeOutMs = 0;
      giPowerOffTimeOutMs = 0;
    }
  }
}
