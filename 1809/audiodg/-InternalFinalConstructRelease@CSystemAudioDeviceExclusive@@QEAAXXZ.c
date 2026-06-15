/*
 * XREFs of ?InternalFinalConstructRelease@CSystemAudioDeviceExclusive@@QEAAXXZ @ 0x140036B68
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003622C (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@SAJPEAXAEB.c)
 * Callees:
 *     <none>
 */

void __fastcall CSystemAudioDeviceExclusive::InternalFinalConstructRelease(CSystemAudioDeviceExclusive *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((int *)this + 74);
}
