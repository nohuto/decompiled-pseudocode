/*
 * XREFs of HvlpDiscoverTopologyLocal @ 0x140850AD4
 * Callers:
 *     HvlEnlightenProcessor @ 0x1401825E4 (HvlEnlightenProcessor.c)
 *     HvlStartBootLogicalProcessors @ 0x140185A30 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x140850AEC (HvlpDiscoverTopologyWorker.c)
 */

__int64 HvlpDiscoverTopologyLocal()
{
  return HvlpDiscoverTopologyWorker(0xFFFFFFFFLL);
}
