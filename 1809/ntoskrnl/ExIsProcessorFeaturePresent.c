/*
 * XREFs of ExIsProcessorFeaturePresent @ 0x140139820
 * Callers:
 *     PiIsDriverBlocked @ 0x14067FCB0 (PiIsDriverBlocked.c)
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
