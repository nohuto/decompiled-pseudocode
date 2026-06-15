/*
 * XREFs of ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14002933C
 * Callers:
 *     ??$MakeAndInitialize@VCCPAudioHistoryReader@@UICPAudioHistoryReader@@AEA_KAEA_KAEAHAEAPEAUVolatileControlData@@AEAPEAUSharedMessageQueueItem@@AEAIAEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryReader@@AEA_K1AEAHAEAPEAUVolatileControlData@@AEAPEAUSharedMessageQueueItem@@AEAI55@Z @ 0x140017880 (--$MakeAndInitialize@VCCPAudioHistoryReader@@UICPAudioHistoryReader@@AEA_KAEA_KAEAHAEAPEAUVolati.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Media::Devices::Internal::AudioDeviceBroker_Windows::Media::Devices::Internal::IAudioDeviceBroker_void___&__::_1_::dtor$0 @ 0x140019AD2 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Media--Devices--Internal--AudioDeviceBroker.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApoEndpoint_CApoEndpoint_IDeviceGraphObjectCache___&_BRIDGE_STREAM_DESCRIPTOR___&_IAudioProcessingObject___&_IAudioMediaType___&_unsigned_int_&__::_1_::dtor$0 @ 0x140029218 (_Microsoft--WRL--Details--MakeAndInitialize_CApoEndpoint_CApoEndpoint_IDeviceGraphObjectCache___.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CpuManager_CpuManager__::_1_::dtor$0 @ 0x14002C4C9 (_Microsoft--WRL--Details--MakeAndInitialize_CpuManager_CpuManager__--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CCPAudioHistoryControl_ICPAudioHistoryControl_ICrossProcessMemory___&__::_1_::dtor$0 @ 0x1400518CA (_Microsoft--WRL--Details--MakeAndInitialize_CCPAudioHistoryControl_ICPAudioHistoryControl_ICross.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
