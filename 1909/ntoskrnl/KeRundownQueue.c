/*
 * XREFs of KeRundownQueue @ 0x14013CE40
 * Callers:
 *     <none>
 * Callees:
 *     KeRundownQueueEx @ 0x1400E34CC (KeRundownQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRundownQueue(PRKQUEUE Queue)
{
  return (PLIST_ENTRY)KeRundownQueueEx((__int64)Queue, 1);
}
