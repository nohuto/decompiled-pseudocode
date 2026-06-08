/*
 * XREFs of EvtDriverUnload @ 0x1C001C440
 * Callers:
 *     <none>
 * Callees:
 *     ProcLibDriverCleanup @ 0x1C001C454 (ProcLibDriverCleanup.c)
 */

__int64 EvtDriverUnload()
{
  return ProcLibDriverCleanup();
}
