/*
 * XREFs of ?AddRef@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140013920
 * Callers:
 *     ?AddRef@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x140019260 (-AddRef@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBJA@EAAKXZ @ 0x140019270 (-AddRef@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBJA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBMI@EAAKXZ @ 0x140019280 (-AddRef@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBMI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerInputEndpoint>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 480));
}
