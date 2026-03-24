/*
 * XREFs of PopFxCompleteDevicePowerRequired @ 0x140100168
 * Callers:
 *     PopFxProcessWork @ 0x1400FE390 (PopFxProcessWork.c)
 *     PoFxReportDevicePoweredOn @ 0x140170C80 (PoFxReportDevicePoweredOn.c)
 *     PopFxDeliverDevicePowerRequired @ 0x140177CA4 (PopFxDeliverDevicePowerRequired.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x1400FE804 (PopFxAddLogEntry.c)
 *     PopPluginDevicePower @ 0x1400FF334 (PopPluginDevicePower.c)
 *     PopDiagTraceFxDevicePowered @ 0x140100100 (PopDiagTraceFxDevicePowered.c)
 *     PopFxBugCheck @ 0x1402D74C0 (PopFxBugCheck.c)
 */

char __fastcall PopFxCompleteDevicePowerRequired(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v2; // bl
  int v5; // eax

  v2 = 0;
  v5 = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36));
  if ( v5 < 0 )
    PopFxBugCheck(0x613uLL, BugCheckParameter2, 0LL, 1uLL);
  if ( v5 )
  {
    if ( a2 )
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0, 16, 0LL);
  }
  else
  {
    PopDiagTraceFxDevicePowered(*(_QWORD *)(BugCheckParameter2 + 48));
    if ( !a2 )
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0, 16, 1LL);
    return PopPluginDevicePower(BugCheckParameter2, 1, a2);
  }
  return v2;
}
