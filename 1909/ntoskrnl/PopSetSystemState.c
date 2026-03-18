/*
 * XREFs of PopSetSystemState @ 0x1401819B4
 * Callers:
 *     PoSetUserPresent @ 0x140181970 (PoSetUserPresent.c)
 *     PoSetSystemState @ 0x1402F7220 (PoSetSystemState.c)
 *     PopIssueActionRequest @ 0x140727D4C (PopIssueActionRequest.c)
 *     PopAllowAwayModeSettingCallback @ 0x14078C090 (PopAllowAwayModeSettingCallback.c)
 * Callees:
 *     PopResetIdleTime @ 0x14013B3A0 (PopResetIdleTime.c)
 *     PopUserPresentSet @ 0x1401819F8 (PopUserPresentSet.c)
 *     PopDiagTraceSetSystemState @ 0x140181AC0 (PopDiagTraceSetSystemState.c)
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
