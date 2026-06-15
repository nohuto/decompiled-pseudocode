/*
 * XREFs of ??1SaDeviceResourceParams@@QEAA@XZ @ 0x180025704
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023730 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     _lambda_0a015809dd6257f91f177da0fa925ef4_::operator() @ 0x180065420 (_lambda_0a015809dd6257f91f177da0fa925ef4_--operator().c)
 *     __lambda_0a015809dd6257f91f177da0fa925ef4_::operator()_::_1_::dtor$1 @ 0x1800655A0 (__lambda_0a015809dd6257f91f177da0fa925ef4_--operator()_--_1_--dtor$1.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$14 @ 0x1800EC226 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$14.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$7 @ 0x1800EDEBD (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SaDeviceResourceParams::~SaDeviceResourceParams(SaDeviceResourceParams *this)
{
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(struct IAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
}
