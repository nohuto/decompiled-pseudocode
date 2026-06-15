/*
 * XREFs of ?Release@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBJA@EAAKXZ @ 0x140019940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerOutputEndpoint>::Release(__int64 a1)
{
  return ATL::CComObject<CCrossProcessClientOutputEndpoint>::Release(a1 - 400);
}
