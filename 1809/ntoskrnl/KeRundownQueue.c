/*
 * XREFs of KeRundownQueue @ 0x1400F9BB0
 * Callers:
 *     <none>
 * Callees:
 *     KeRundownQueueEx @ 0x1400FA9BC (KeRundownQueueEx.c)
 */

PLIST_ENTRY __stdcall KeRundownQueue(PRKQUEUE Queue)
{
  char v1; // dl

  v1 = 1;
  return (PLIST_ENTRY)KeRundownQueueEx(Queue, v1);
}
