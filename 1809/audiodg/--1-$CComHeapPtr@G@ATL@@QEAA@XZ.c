/*
 * XREFs of ??1?$CComHeapPtr@G@ATL@@QEAA@XZ @ 0x140030DF8
 * Callers:
 *     _CAudioDeviceGraph::InitializePump_::_1_::dtor$2 @ 0x14001F6D2 (_CAudioDeviceGraph--InitializePump_--_1_--dtor$2.c)
 *     _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$28 @ 0x14001FF80 (_CPipeInstance--InitializeAPOInterfaces_--_1_--dtor$28.c)
 *     _FillAuxiliaryInputInitStruct_::_1_::dtor$2 @ 0x1400311DD (_FillAuxiliaryInputInitStruct_--_1_--dtor$2.c)
 *     _Windows::Media::Devices::Internal::AudioDeviceBroker::InitializeEvents_::_1_::dtor$1 @ 0x14004BFD7 (_Windows--Media--Devices--Internal--AudioDeviceBroker--InitializeEvents_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComHeapPtr<unsigned short>::~CComHeapPtr<unsigned short>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
  *a1 = 0LL;
}
