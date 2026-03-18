/*
 * XREFs of PopSetSessionUserStatus @ 0x140724120
 * Callers:
 *     PopSessionInputChange @ 0x140723C24 (PopSessionInputChange.c)
 *     PopConsoleSessionPassiveInput @ 0x140723D54 (PopConsoleSessionPassiveInput.c)
 *     PopRemoteSessionActiveInput @ 0x1407240B4 (PopRemoteSessionActiveInput.c)
 *     PopSessionDisconnected @ 0x1407295AC (PopSessionDisconnected.c)
 *     PopCheckConsoleTimeouts @ 0x1408B5F14 (PopCheckConsoleTimeouts.c)
 *     PopInputDisabled @ 0x1408B605C (PopInputDisabled.c)
 * Callees:
 *     PopPrintEx @ 0x140126458 (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x1406A12E8 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x1406EF03C (PopDiagTraceSessionStates.c)
 *     PopEvaluateGlobalUserStatus @ 0x140724200 (PopEvaluateGlobalUserStatus.c)
 *     PopPrintUserActivityPresence @ 0x140724330 (PopPrintUserActivityPresence.c)
 *     PopExtendConnectionState @ 0x140788BAC (PopExtendConnectionState.c)
 */

__int64 __fastcall PopSetSessionUserStatus(unsigned int a1, unsigned int a2)
{
  const wchar_t *v4; // rax
  unsigned int Src; // [rsp+40h] [rbp+8h] BYREF

  if ( PopConsoleContext == a1 && a1 != -1 )
    dword_140438820 = a2;
  Src = a2;
  v4 = (const wchar_t *)PopPrintUserActivityPresence(a2);
  PopPrintEx(3u, (__int64)"PopAdaptive: Session %u user presence/activity state: %S\n", a1, v4);
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
