/*
 * XREFs of RtlExtendCorrelationVector @ 0x1408D46B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCorrelationVectorEndPosition @ 0x140312514 (RtlpGetCorrelationVectorEndPosition.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x1408D4A1C (RtlpGetCorrelationVectorBufferLength.c)
 */

DWORD __cdecl RtlExtendCorrelationVector(PCORRELATION_VECTOR CorrelationVector)
{
  __int64 v1; // rdx
  int CorrelationVectorEndPosition; // eax
  __int64 v4; // rdx
  int CorrelationVectorBufferLength; // eax
  __int64 v6; // r8
  DWORD v7; // r11d

  CorrelationVectorEndPosition = RtlpGetCorrelationVectorEndPosition((__int64)CorrelationVector, v1);
  if ( CorrelationVectorEndPosition < 0 )
    return -2147483643;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(
                                    CorrelationVector,
                                    v4,
                                    CorrelationVectorEndPosition);
  if ( (int)v6 >= CorrelationVectorBufferLength - 3 )
    return -2147483643;
  *(_WORD *)&CorrelationVector->Vector[v6] = 12334;
  CorrelationVector->Vector[v6 + 2] = v7;
  return v7;
}
