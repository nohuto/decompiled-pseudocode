/*
 * XREFs of PowerConnectionEvent @ 0x1C0049038
 * Callers:
 *     SetConnectCompletedState @ 0x1C0048FF0 (SetConnectCompletedState.c)
 *     SetConnectedState @ 0x1C0095590 (SetConnectedState.c)
 *     xxxRemoteConnect @ 0x1C0098740 (xxxRemoteConnect.c)
 * Callees:
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0037220 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00E1B64 (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PowerConnectionEvent(int a1)
{
  int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int InputBuffer; // [rsp+40h] [rbp+8h] BYREF
  int OutputBuffer; // [rsp+48h] [rbp+10h] BYREF
  int v7; // [rsp+4Ch] [rbp+14h]

  InputBuffer = a1;
  v1 = gbConnected != 0;
  if ( dword_1C01CE1AC != v1 )
  {
    dword_1C01CE1AC = gbConnected != 0;
    CInputGlobals::UpdateLastInputTime(
      (__int64)gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      14);
    LOBYTE(InputBuffer) = v1;
    BYTE1(InputBuffer) = gProtocolType == 0;
    if ( ZwPowerInformation(PowerInformationLevelMaximum|SystemReserveHiberFile, &InputBuffer, 2u, &OutputBuffer, 8u) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    if ( v1 )
    {
      giPowerSessionActivityTimeOutMs = 1000 * OutputBuffer;
      giPowerOffTimeOutMs = 1000 * v7;
      if ( gSystemIsAoAc )
        SetInputModeWithCrit(0LL);
    }
    else
    {
      if ( v7 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
      if ( OutputBuffer )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
      giPowerSessionActivityTimeOutMs = 0;
      giPowerOffTimeOutMs = 0;
    }
  }
}
