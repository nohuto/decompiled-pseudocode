/*
 * XREFs of ApiSetAdjustLinearity @ 0x1C0160D34
 * Callers:
 *     RIMTransformCoordinates @ 0x1C0113588 (RIMTransformCoordinates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetAdjustLinearity(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = IsAdjustLinearitySupported();
  if ( (int)result >= 0 )
    return AdjustLinearity(a1, a2, a3, a4);
  return result;
}
