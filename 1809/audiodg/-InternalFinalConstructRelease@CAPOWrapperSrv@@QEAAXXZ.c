/*
 * XREFs of ?InternalFinalConstructRelease@CAPOWrapperSrv@@QEAAXXZ @ 0x140044968
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140004400 (-CreateInstance@-$CComCreator@V-$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPE.c)
 * Callees:
 *     <none>
 */

void __fastcall CAPOWrapperSrv::InternalFinalConstructRelease(CAPOWrapperSrv *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((int *)this + 8);
}
