/*
 * XREFs of HvlIsPartitionCpuManager @ 0x140182240
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 HvlIsPartitionCpuManager()
{
  return (HvlpFlags >> 1) & 1;
}
