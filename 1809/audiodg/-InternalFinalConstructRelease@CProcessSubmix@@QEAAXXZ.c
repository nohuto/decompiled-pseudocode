/*
 * XREFs of ?InternalFinalConstructRelease@CProcessSubmix@@QEAAXXZ @ 0x140042304
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140003F9C (-CreateInstance@-$CComCreator@V-$CComObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPE.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcessSubmix::InternalFinalConstructRelease(CProcessSubmix *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((int *)this + 84);
}
