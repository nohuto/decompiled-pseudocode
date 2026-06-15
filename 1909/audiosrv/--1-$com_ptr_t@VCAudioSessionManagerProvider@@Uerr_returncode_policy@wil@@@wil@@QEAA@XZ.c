/*
 * XREFs of ??1?$com_ptr_t@VCAudioSessionManagerProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180046F44
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001CC80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     _CPolicyConfig::DisconnectHelper_::_1_::dtor$0 @ 0x18006D9E2 (_CPolicyConfig--DisconnectHelper_--_1_--dtor$0.c)
 *     _VAD_AudiosrvAudioDGProcessTerminated_::_1_::dtor$0 @ 0x180070F0D (_VAD_AudiosrvAudioDGProcessTerminated_--_1_--dtor$0.c)
 *     _dynamic_atexit_destructor_for__g_SingletonAudioSessionManagerProvider__ @ 0x180074AA0 (_dynamic_atexit_destructor_for__g_SingletonAudioSessionManagerProvider__.c)
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$9 @ 0x1800BFE10 (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$9.c)
 *     _CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup_::_1_::dtor$0 @ 0x1800F5ECA (_CAudioResourceManager--ConfigureAuxiliaryInputStreamForStreamGroup_--_1_--dtor$0.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$18 @ 0x1800F79B0 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$18.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180067C24 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::com_ptr_t<CAudioSessionManagerProvider,wil::err_returncode_policy>::~com_ptr_t<CAudioSessionManagerProvider,wil::err_returncode_policy>(
        __int64 a1)
{
  __int64 v1; // r10

  if ( *(_QWORD *)a1 && !ATL::SafeDecrementReferenceMultiThread((int *)(*(_QWORD *)a1 + 12LL)) )
  {
    if ( v1 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
}
