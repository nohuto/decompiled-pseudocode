/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x140897C60
 * Callers:
 *     RtlpGetCorrelationVectorEndPosition @ 0x1402F4164 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1402F41A8 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlExtendCorrelationVector @ 0x1408978E0 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x140897930 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x140897AA0 (RtlValidateCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x140897C84 (RtlpGetLastContiguosBase64Position.c)
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
