/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x1800274B0
 * Callers:
 *     LdrpGenRandom @ 0x180027464 (LdrpGenRandom.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsProcessorFeaturePresent(ULONG ProcessorFeature)
{
  if ( ProcessorFeature >= 0x40 )
    return 0;
  else
    return *(_BYTE *)(ProcessorFeature + 0x7FFE0274LL);
}
