/*
 * XREFs of IoEnqueueIrp @ 0x14081D5E0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueThreadIrp @ 0x1400BC2C0 (IopQueueThreadIrp.c)
 */

__int64 __fastcall IoEnqueueIrp(__int64 a1, __int64 a2, __int64 a3)
{
  return IopQueueThreadIrp(a1, a2, a3);
}
