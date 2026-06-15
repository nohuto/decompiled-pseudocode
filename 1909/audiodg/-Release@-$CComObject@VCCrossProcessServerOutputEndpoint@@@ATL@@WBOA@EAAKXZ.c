/*
 * XREFs of ?Release@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBOA@EAAKXZ @ 0x1400199D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerOutputEndpoint>::Release(__int64 a1)
{
  return ATL::CComObject<CCrossProcessClientOutputEndpoint>::Release(a1 - 480);
}
