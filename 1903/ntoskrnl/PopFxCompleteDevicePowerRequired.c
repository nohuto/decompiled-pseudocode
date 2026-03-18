/*
 * XREFs of PopFxCompleteDevicePowerRequired @ 0x1400B0564
 * Callers:
 *     PopFxProcessWork @ 0x1400B0C20 (PopFxProcessWork.c)
 *     PoFxReportDevicePoweredOn @ 0x14017ACE0 (PoFxReportDevicePoweredOn.c)
 *     PopFxDeliverDevicePowerRequired @ 0x1401814D0 (PopFxDeliverDevicePowerRequired.c)
 * Callees:
 *     PopDiagTraceFxDevicePowered @ 0x1400B08C0 (PopDiagTraceFxDevicePowered.c)
 *     PopFxAddLogEntry @ 0x1400B1094 (PopFxAddLogEntry.c)
 *     PopPluginDevicePower @ 0x1400B1C04 (PopPluginDevicePower.c)
 *     PopFxBugCheck @ 0x1402F2050 (PopFxBugCheck.c)
 */

char __fastcall PopFxCompleteDevicePowerRequired(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v2; // bl
  int v5; // eax
  __int64 v6; // rdx

  v2 = 0;
  v5 = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36));
  if ( v5 < 0 )
    PopFxBugCheck(0x613uLL, BugCheckParameter2, 0LL, 1uLL);
  if ( v5 )
  {
    if ( a2 )
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0LL, 16LL);
  }
  else
  {
    PopDiagTraceFxDevicePowered(*(_QWORD *)(BugCheckParameter2 + 48));
    if ( !a2 )
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0LL, 16LL);
    LOBYTE(v6) = 1;
    return PopPluginDevicePower(BugCheckParameter2, v6, a2);
  }
  return v2;
}
