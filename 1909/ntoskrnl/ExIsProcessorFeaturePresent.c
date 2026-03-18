/*
 * XREFs of ExIsProcessorFeaturePresent @ 0x14013C100
 * Callers:
 *     PiIsDriverBlocked @ 0x14070BEAC (PiIsDriverBlocked.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExIsProcessorFeaturePresent(ULONG ProcessorFeature)
{
  if ( ProcessorFeature >= 0x40 )
    return 0;
  else
    return *(_BYTE *)(ProcessorFeature - 0x87FFFFFFD8CLL);
}
