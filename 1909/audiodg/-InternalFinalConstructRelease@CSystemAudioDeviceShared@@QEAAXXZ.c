/*
 * XREFs of ?InternalFinalConstructRelease@CSystemAudioDeviceShared@@QEAAXXZ @ 0x140032F84
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400113E4 (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_G.c)
 * Callees:
 *     <none>
 */

void __fastcall CSystemAudioDeviceShared::InternalFinalConstructRelease(CSystemAudioDeviceShared *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((int *)this + 92);
}
