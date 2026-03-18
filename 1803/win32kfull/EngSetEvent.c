/*
 * XREFs of EngSetEvent @ 0x1C0249180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __stdcall EngSetEvent(PEVENT pEvent)
{
  return KeSetEvent((PRKEVENT)pEvent->pKEvent, 0, 0);
}
