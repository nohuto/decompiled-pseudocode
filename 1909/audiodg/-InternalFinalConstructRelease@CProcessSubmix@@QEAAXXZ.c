/*
 * XREFs of ?InternalFinalConstructRelease@CProcessSubmix@@QEAAXXZ @ 0x14003F350
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140010FD0 (-CreateInstance@-$CComCreator@V-$CComObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPE.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcessSubmix::InternalFinalConstructRelease(CProcessSubmix *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((int *)this + 84);
}
