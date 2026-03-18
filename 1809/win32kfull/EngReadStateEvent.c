/*
 * XREFs of EngReadStateEvent @ 0x1C0261270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __stdcall EngReadStateEvent(PEVENT pEvent)
{
  return KeReadStateEvent((PRKEVENT)pEvent->pKEvent);
}
