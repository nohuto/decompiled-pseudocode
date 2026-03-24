/*
 * XREFs of HvlpDiscoverTopologyLocal @ 0x140817998
 * Callers:
 *     HvlEnlightenProcessor @ 0x140178680 (HvlEnlightenProcessor.c)
 *     HvlStartBootLogicalProcessors @ 0x14017EA90 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x1408179B0 (HvlpDiscoverTopologyWorker.c)
 */

__int64 HvlpDiscoverTopologyLocal()
{
  return HvlpDiscoverTopologyWorker(0xFFFFFFFFLL);
}
