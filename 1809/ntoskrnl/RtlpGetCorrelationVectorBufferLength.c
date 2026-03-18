/*
 * XREFs of RtlpGetCorrelationVectorBufferLength @ 0x140896A20
 * Callers:
 *     RtlpGetCorrelationVectorEndPosition @ 0x1402F3E74 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1402F3EB8 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlExtendCorrelationVector @ 0x1408966A0 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x1408966F0 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x140896860 (RtlValidateCorrelationVector.c)
 *     RtlpGetLastContiguosBase64Position @ 0x140896A44 (RtlpGetLastContiguosBase64Position.c)
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
