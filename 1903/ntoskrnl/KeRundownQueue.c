/*
 * XREFs of KeRundownQueue @ 0x14013C860
 * Callers:
 *     <none>
 * Callees:
 *     KeRundownQueueEx @ 0x1400AA4CC (KeRundownQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRundownQueue(PRKQUEUE Queue)
{
  return (PLIST_ENTRY)KeRundownQueueEx((__int64)Queue, 1);
}
