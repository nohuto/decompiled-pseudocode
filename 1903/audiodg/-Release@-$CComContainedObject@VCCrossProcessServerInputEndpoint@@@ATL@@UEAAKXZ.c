/*
 * XREFs of ?Release@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140051130
 * Callers:
 *     ?Release@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x1400194F0 (-Release@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBJA@EAAKXZ @ 0x140019500 (-Release@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBJA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBMI@EAAKXZ @ 0x140019510 (-Release@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBMI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 480) + 16LL))(*(_QWORD *)(a1 + 480));
}
