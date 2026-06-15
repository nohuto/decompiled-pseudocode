/*
 * XREFs of ?AddRef@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ @ 0x1400506F0
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@W7EAAKXZ @ 0x14001ECD0 (-AddRef@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBJA@EAAKXZ @ 0x14001ECE0 (-AddRef@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBJA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBJI@EAAKXZ @ 0x14001ECF0 (-AddRef@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBJI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKA@EAAKXZ @ 0x14001ED00 (-AddRef@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMA@EAAKXZ @ 0x14001ED10 (-AddRef@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBNI@EAAKXZ @ 0x14001ED20 (-AddRef@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBNI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBMI@EAAKXZ @ 0x14001ED60 (-AddRef@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBMI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBOA@EAAKXZ @ 0x14001ED70 (-AddRef@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBOA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 488) + 8LL))(*(_QWORD *)(a1 + 488));
}
