/*
 * XREFs of ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBJI@EAAKXZ @ 0x14001EDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientInputEndpoint>::AddRef(__int64 a1)
{
  return ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef(a1 - 408);
}
