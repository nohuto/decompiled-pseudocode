/*
 * XREFs of ?InternalFinalConstructRelease@CSystemAudioDeviceOffloadGraph@@QEAAXXZ @ 0x140034158
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003389C (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJPEAX.c)
 * Callees:
 *     <none>
 */

void __fastcall CSystemAudioDeviceOffloadGraph::InternalFinalConstructRelease(CSystemAudioDeviceOffloadGraph *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((int *)this + 98);
}
