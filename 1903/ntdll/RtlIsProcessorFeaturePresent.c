/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x180020C60
 * Callers:
 *     sub_180020C18 @ 0x180020C18 (sub_180020C18.c)
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
