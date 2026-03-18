/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x1408D4A1C
 * Callers:
 *     RtlpGetCorrelationVectorEndPosition @ 0x140312514 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x140312558 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlExtendCorrelationVector @ 0x1408D46B0 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x1408D4700 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1408D4860 (RtlValidateCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1408D4A40 (RtlpGetLastContiguosBase64Position.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetCorrelationVectorBufferLength(_BYTE *a1)
{
  __int64 result; // rax

  if ( *a1 == 1 )
    return 65LL;
  result = 0xFFFFFFFFLL;
  if ( *a1 == 2 )
    return 129LL;
  return result;
}
