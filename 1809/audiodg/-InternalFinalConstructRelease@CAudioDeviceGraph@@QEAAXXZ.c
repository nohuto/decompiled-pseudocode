/*
 * XREFs of ?InternalFinalConstructRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x14002F298
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400041D4 (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioDeviceGraph::InternalFinalConstructRelease(CAudioDeviceGraph *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((char *)this + 24);
}
