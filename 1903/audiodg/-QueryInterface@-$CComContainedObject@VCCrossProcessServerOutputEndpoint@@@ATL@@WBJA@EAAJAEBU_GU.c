/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400192C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::QueryInterface(__int64 a1)
{
  return ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::QueryInterface(a1 - 400);
}
