/*
 * XREFs of RtlULongLongSub @ 0x1400B2BD0
 * Callers:
 *     PopFxScheduleDeviceIdleTimer @ 0x1400B270C (PopFxScheduleDeviceIdleTimer.c)
 *     KiAdjustTimer2DueTimes @ 0x140179644 (KiAdjustTimer2DueTimes.c)
 *     IopFillTriageDumpDataBlocks @ 0x140296AEC (IopFillTriageDumpDataBlocks.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x14067B598 (LdrpResSearchResourceInsideDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongSub(ULONGLONG ullMinuend, ULONGLONG ullSubtrahend, ULONGLONG *pullResult)
{
  ULONGLONG v3; // r9

  if ( ullMinuend < ullSubtrahend )
    v3 = -1LL;
  else
    v3 = ullMinuend - ullSubtrahend;
  *pullResult = v3;
  return ullMinuend < ullSubtrahend ? 0xC0000095 : 0;
}
