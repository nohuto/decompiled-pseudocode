/*
 * XREFs of HvlpDiscoverTopologyLocal @ 0x1408513D4
 * Callers:
 *     HvlEnlightenProcessor @ 0x140181EF4 (HvlEnlightenProcessor.c)
 *     HvlStartBootLogicalProcessors @ 0x140185480 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x1408513EC (HvlpDiscoverTopologyWorker.c)
 */

__int64 HvlpDiscoverTopologyLocal()
{
  return HvlpDiscoverTopologyWorker(0xFFFFFFFFLL);
}
