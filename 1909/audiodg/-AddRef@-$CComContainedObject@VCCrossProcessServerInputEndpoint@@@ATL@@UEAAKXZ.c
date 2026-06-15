/*
 * XREFs of ?AddRef@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x14004E2B0
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x1400195A0 (-AddRef@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBJA@EAAKXZ @ 0x1400195B0 (-AddRef@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBJA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBMI@EAAKXZ @ 0x1400195C0 (-AddRef@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBMI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 480) + 8LL))(*(_QWORD *)(a1 + 480));
}
