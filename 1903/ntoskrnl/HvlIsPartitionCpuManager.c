/*
 * XREFs of HvlIsPartitionCpuManager @ 0x140181B50
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 HvlIsPartitionCpuManager()
{
  return (HvlpFlags >> 1) & 1;
}
