/*
 * XREFs of ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMA@EAAKXZ @ 0x14001EDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientInputEndpoint>::AddRef(__int64 a1)
{
  return ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef(a1 - 448);
}
