/*
 * XREFs of UIntSub @ 0x1C0116CE0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall UIntSub(UINT uMinuend, UINT uSubtrahend, UINT *puResult)
{
  UINT v3; // edx

  if ( uMinuend < 4 )
    v3 = -1;
  else
    v3 = uMinuend - 4;
  *puResult = v3;
  return uMinuend < 4 ? 0x80070216 : 0;
}
