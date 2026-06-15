/*
 * XREFs of ??1?$CComHeapPtr@G@ATL@@QEAA@XZ @ 0x1400292E8
 * Callers:
 *     _CPipeInstance::InitializeSilenceMonitorInterface_::_1_::dtor$1 @ 0x14001A892 (_CPipeInstance--InitializeSilenceMonitorInterface_--_1_--dtor$1.c)
 *     _FillAuxiliaryInputInitStruct_::_1_::dtor$2 @ 0x140029649 (_FillAuxiliaryInputInitStruct_--_1_--dtor$2.c)
 *     _Windows::Media::Devices::Internal::AudioDeviceBroker::InitializeEvents_::_1_::dtor$1 @ 0x1400498C0 (_Windows--Media--Devices--Internal--AudioDeviceBroker--InitializeEvents_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComHeapPtr<unsigned short>::~CComHeapPtr<unsigned short>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
  *a1 = 0LL;
}
