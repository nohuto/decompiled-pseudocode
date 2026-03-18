/*
 * XREFs of KeIsExecutingDpc @ 0x140118D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KeIsExecutingDpc()
{
  return KeGetPcr()->Prcb.DpcRequestSummary & 0x10001;
}
