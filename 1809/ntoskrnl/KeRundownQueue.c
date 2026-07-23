/*
 * XREFs of KeRundownQueue @ 0x1400F9C30
 * Callers:
 *     <none>
 * Callees:
 *     KeRundownQueueEx @ 0x1400FAA3C (KeRundownQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRundownQueue(PRKQUEUE Queue)
{
  char v1; // dl

  v1 = 1;
  return (PLIST_ENTRY)KeRundownQueueEx(Queue, v1);
}
