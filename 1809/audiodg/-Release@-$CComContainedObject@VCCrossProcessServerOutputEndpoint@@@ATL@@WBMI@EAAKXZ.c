/*
 * XREFs of ?Release@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBMI@EAAKXZ @ 0x14001F0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::Release(__int64 a1)
{
  return ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::Release(a1 - 456);
}
