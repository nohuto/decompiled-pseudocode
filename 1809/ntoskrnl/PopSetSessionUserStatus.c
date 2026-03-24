/*
 * XREFs of PopSetSessionUserStatus @ 0x1406DC9B8
 * Callers:
 *     PopConsoleSessionPassiveInput @ 0x1406DC3A0 (PopConsoleSessionPassiveInput.c)
 *     PopRemoteSessionActiveInput @ 0x1406DC494 (PopRemoteSessionActiveInput.c)
 *     PopSessionInputChange @ 0x1406DC500 (PopSessionInputChange.c)
 *     PopSessionDisconnected @ 0x1406E1F4C (PopSessionDisconnected.c)
 *     PopCheckConsoleTimeouts @ 0x140878C94 (PopCheckConsoleTimeouts.c)
 *     PopInputDisabled @ 0x140878E78 (PopInputDisabled.c)
 * Callees:
 *     PopPrintEx @ 0x14014242C (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x14058B338 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x1406DC750 (PopDiagTraceSessionStates.c)
 *     PopEvaluateGlobalUserStatus @ 0x1406DCA98 (PopEvaluateGlobalUserStatus.c)
 *     PopPrintUserActivityPresence @ 0x1406DCBC8 (PopPrintUserActivityPresence.c)
 *     PopExtendConnectionState @ 0x140761D3C (PopExtendConnectionState.c)
 */

__int64 __fastcall PopSetSessionUserStatus(unsigned int a1, unsigned int a2)
{
  const wchar_t *v4; // rax
  unsigned int Src; // [rsp+40h] [rbp+8h] BYREF

  if ( PopConsoleContext == a1 && a1 != -1 )
    dword_14040FDC0 = a2;
  Src = a2;
  v4 = (const wchar_t *)PopPrintUserActivityPresence(a2);
  PopPrintEx(3u, "PopAdaptive: Session %u user presence/activity state: %S\n", a1, v4);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_INPUT_STATE, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, a1, 0, 4u, &Src);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, a1, 1, 4u, &Src);
  if ( PopMaximumConnectionSessions )
  {
    if ( a1 >= PopMaximumConnectionSessions )
      PopExtendConnectionState(a1);
    if ( PopMaximumConnectionSessions )
    {
      if ( a2 )
        _bittestandreset((signed __int32 *)PopConnectionBitmap.Buffer, a1);
      else
        _bittestandset((signed __int32 *)PopConnectionBitmap.Buffer, a1);
    }
  }
  return PopEvaluateGlobalUserStatus();
}
