/*
 * XREFs of ?InternalFinalConstructRelease@CSpatialCrossProcessClientOutputEndpoint@@QEAAXXZ @ 0x14005A7B8
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14005A484 (-CreateInstance@-$CComCreator@V-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@AT.c)
 * Callees:
 *     <none>
 */

void __fastcall CSpatialCrossProcessClientOutputEndpoint::InternalFinalConstructRelease(
        CSpatialCrossProcessClientOutputEndpoint *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((int *)this + 248);
}
