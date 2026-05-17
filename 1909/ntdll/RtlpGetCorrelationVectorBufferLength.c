/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x18007356C
 * Callers:
 *     RtlExtendCorrelationVector @ 0x180072B10 (RtlExtendCorrelationVector.c)
 *     RtlpGetCorrelationVectorEndPosition @ 0x180072B54 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlIncrementCorrelationVector @ 0x180072BA0 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1800F5DC0 (RtlValidateCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x1800F5EA0 (RtlpGetLastContiguosBase64Position.c)
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
