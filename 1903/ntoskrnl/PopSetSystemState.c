/*
 * XREFs of PopSetSystemState @ 0x1401812C4
 * Callers:
 *     PoSetUserPresent @ 0x140181280 (PoSetUserPresent.c)
 *     PoSetSystemState @ 0x1402F7770 (PoSetSystemState.c)
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 *     PopAllowAwayModeSettingCallback @ 0x140789C30 (PopAllowAwayModeSettingCallback.c)
 * Callees:
 *     PopResetIdleTime @ 0x1400EE900 (PopResetIdleTime.c)
 *     PopUserPresentSet @ 0x140181308 (PopUserPresentSet.c)
 *     PopDiagTraceSetSystemState @ 0x1401813D0 (PopDiagTraceSetSystemState.c)
 */

__int64 __fastcall PopSetSystemState(int a1, unsigned int a2)
{
  char v3; // bl
  __int64 result; // rax

  if ( (a1 & 0xFFFFFFF8) == 0 )
  {
    v3 = a1;
    result = PopDiagTraceSetSystemState();
    if ( (v3 & 1) != 0 )
      result = PopResetIdleTime();
    if ( (v3 & 4) != 0 )
      return PopUserPresentSet(a2);
  }
  return result;
}
