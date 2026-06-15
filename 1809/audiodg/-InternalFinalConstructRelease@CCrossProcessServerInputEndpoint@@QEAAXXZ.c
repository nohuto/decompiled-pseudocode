/*
 * XREFs of ?InternalFinalConstructRelease@CCrossProcessServerInputEndpoint@@QEAAXXZ @ 0x140051BA8
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400517AC (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 * Callees:
 *     <none>
 */

void __fastcall CCrossProcessServerInputEndpoint::InternalFinalConstructRelease(CCrossProcessServerInputEndpoint *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((int *)this + 120);
}
