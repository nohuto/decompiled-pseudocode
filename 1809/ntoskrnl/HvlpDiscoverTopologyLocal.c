/*
 * XREFs of HvlpDiscoverTopologyLocal @ 0x1408179B8
 * Callers:
 *     HvlEnlightenProcessor @ 0x140178660 (HvlEnlightenProcessor.c)
 *     HvlStartBootLogicalProcessors @ 0x14017EA70 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x1408179D0 (HvlpDiscoverTopologyWorker.c)
 */

__int64 HvlpDiscoverTopologyLocal()
{
  return HvlpDiscoverTopologyWorker(0xFFFFFFFFLL);
}
