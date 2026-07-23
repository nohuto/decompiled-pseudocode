/*
 * XREFs of PopSetSessionUserStatus @ 0x1406DDC58
 * Callers:
 *     PopConsoleSessionPassiveInput @ 0x1406DD640 (PopConsoleSessionPassiveInput.c)
 *     PopRemoteSessionActiveInput @ 0x1406DD734 (PopRemoteSessionActiveInput.c)
 *     PopSessionInputChange @ 0x1406DD7A0 (PopSessionInputChange.c)
 *     PopSessionDisconnected @ 0x1406E31EC (PopSessionDisconnected.c)
 *     PopCheckConsoleTimeouts @ 0x140879EF4 (PopCheckConsoleTimeouts.c)
 *     PopInputDisabled @ 0x14087A0D8 (PopInputDisabled.c)
 * Callees:
 *     PopPrintEx @ 0x14014252C (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x14058C338 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x1406DD9F0 (PopDiagTraceSessionStates.c)
 *     PopEvaluateGlobalUserStatus @ 0x1406DDD38 (PopEvaluateGlobalUserStatus.c)
 *     PopPrintUserActivityPresence @ 0x1406DDE68 (PopPrintUserActivityPresence.c)
 *     PopExtendConnectionState @ 0x140762F2C (PopExtendConnectionState.c)
 */

__int64 __fastcall PopSetSessionUserStatus(unsigned int a1, unsigned int a2)
{
  const wchar_t *v4; // rax
  unsigned int Src; // [rsp+40h] [rbp+8h] BYREF

  if ( PopConsoleContext == a1 && a1 != -1 )
    dword_140410E40 = a2;
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
