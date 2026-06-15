/*
 * XREFs of ?Release@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKA@EAAKXZ @ 0x1400194C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::Release(__int64 a1)
{
  return ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::Release(a1 - 416);
}
