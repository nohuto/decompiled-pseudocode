/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x180087F20
 * Callers:
 *     RtlExtendCorrelationVector @ 0x180087D60 (RtlExtendCorrelationVector.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x180087DA4 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlIncrementCorrelationVector @ 0x180087DF0 (RtlIncrementCorrelationVector.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x180087ED4 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlValidateCorrelationVector @ 0x1800F8180 (RtlValidateCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1800F8264 (RtlpGetLastContiguosBase64Position.c)
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
