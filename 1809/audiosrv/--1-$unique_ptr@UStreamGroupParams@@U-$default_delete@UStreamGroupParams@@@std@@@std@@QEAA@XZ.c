/*
 * XREFs of ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x180012174
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18006598C (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 *     _BuildDeviceGraphForStream_::_1_::dtor$0 @ 0x180065D96 (_BuildDeviceGraphForStream_--_1_--dtor$0.c)
 *     _DeriveStreamGroupParametersForStream_::_1_::dtor$3 @ 0x18006A460 (_DeriveStreamGroupParametersForStream_--_1_--dtor$3.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EA564 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$6 @ 0x1800EC1D2 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$6.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>(LPVOID **a1)
{
  LPVOID *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    operator delete(v1[7], (const struct std::nothrow_t *)0x10);
    v1[7] = 0LL;
    CoTaskMemFree(v1[2]);
    v1[2] = 0LL;
    CoTaskMemFree(*v1);
    *v1 = 0LL;
    operator delete(v1, (const struct std::nothrow_t *)0x40);
  }
}
