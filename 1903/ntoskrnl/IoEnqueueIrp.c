/*
 * XREFs of IoEnqueueIrp @ 0x1408564B0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueThreadIrp @ 0x14003BA80 (IopQueueThreadIrp.c)
 */

__int64 __fastcall IoEnqueueIrp(__int64 a1, __int64 a2)
{
  return IopQueueThreadIrp(a1, a2);
}
