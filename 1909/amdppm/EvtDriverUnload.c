/*
 * XREFs of EvtDriverUnload @ 0x1C0020160
 * Callers:
 *     <none>
 * Callees:
 *     ProcLibDriverCleanup @ 0x1C0020174 (ProcLibDriverCleanup.c)
 */

__int64 EvtDriverUnload()
{
  return ProcLibDriverCleanup();
}
