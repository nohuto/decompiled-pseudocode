/*
 * XREFs of PopSetSystemState @ 0x1401778B4
 * Callers:
 *     PoSetUserPresent @ 0x140177870 (PoSetUserPresent.c)
 *     PoSetSystemState @ 0x1402DBE90 (PoSetSystemState.c)
 *     PopIssueActionRequest @ 0x1406DFAF0 (PopIssueActionRequest.c)
 *     PopAllowAwayModeSettingCallback @ 0x1407643F0 (PopAllowAwayModeSettingCallback.c)
 * Callees:
 *     PopResetIdleTime @ 0x140138CA0 (PopResetIdleTime.c)
 *     PopUserPresentSet @ 0x1401778F8 (PopUserPresentSet.c)
 *     PopDiagTraceSetSystemState @ 0x1401779C0 (PopDiagTraceSetSystemState.c)
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
