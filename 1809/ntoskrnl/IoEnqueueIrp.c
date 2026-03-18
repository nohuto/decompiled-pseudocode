/*
 * XREFs of IoEnqueueIrp @ 0x14081C400
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueThreadIrp @ 0x1400BC360 (IopQueueThreadIrp.c)
 */

__int64 __fastcall IoEnqueueIrp(__int64 a1, __int64 a2, __int64 a3)
{
  return IopQueueThreadIrp(a1, a2, a3);
}
