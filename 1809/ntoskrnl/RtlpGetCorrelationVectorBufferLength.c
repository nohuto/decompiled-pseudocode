/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x140896A00
 * Callers:
 *     RtlpGetCorrelationVectorEndPosition @ 0x1402F3F74 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1402F3FB8 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlExtendCorrelationVector @ 0x140896680 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x1408966D0 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x140896840 (RtlValidateCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x140896A24 (RtlpGetLastContiguosBase64Position.c)
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
