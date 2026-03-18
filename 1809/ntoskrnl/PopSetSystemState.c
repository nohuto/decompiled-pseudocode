/*
 * XREFs of PopSetSystemState @ 0x140177794
 * Callers:
 *     PoSetUserPresent @ 0x140177750 (PoSetUserPresent.c)
 *     PoSetSystemState @ 0x1402DBBA0 (PoSetSystemState.c)
 *     PopIssueActionRequest @ 0x1406DE870 (PopIssueActionRequest.c)
 *     PopAllowAwayModeSettingCallback @ 0x140763220 (PopAllowAwayModeSettingCallback.c)
 * Callees:
 *     PopResetIdleTime @ 0x140138B80 (PopResetIdleTime.c)
 *     PopUserPresentSet @ 0x1401777D8 (PopUserPresentSet.c)
 *     PopDiagTraceSetSystemState @ 0x1401778A0 (PopDiagTraceSetSystemState.c)
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
      result = PopResetIdleTime(3u);
    if ( (v3 & 4) != 0 )
      return PopUserPresentSet(a2);
  }
  return result;
}
