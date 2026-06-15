/*
 * XREFs of ?AddRef@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140013AD0
 * Callers:
 *     ?AddRef@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x140019650 (-AddRef@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBJA@EAAKXZ @ 0x140019660 (-AddRef@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBJA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBMI@EAAKXZ @ 0x140019670 (-AddRef@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBMI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CCrossProcessServerInputEndpoint>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 480), a2);
}
