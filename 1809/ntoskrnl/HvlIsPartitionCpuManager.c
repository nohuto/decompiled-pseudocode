/*
 * XREFs of HvlIsPartitionCpuManager @ 0x140178400
 * Callers:
 *     PopInitPlatformSettings @ 0x1409DDD88 (PopInitPlatformSettings.c)
 * Callees:
 *     <none>
 */

__int64 HvlIsPartitionCpuManager()
{
  return ((unsigned int)HvlpFlags >> 1) & 1;
}
