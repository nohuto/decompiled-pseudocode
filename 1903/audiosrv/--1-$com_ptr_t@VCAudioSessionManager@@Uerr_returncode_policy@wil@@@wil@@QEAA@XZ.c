/*
 * XREFs of ??1?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180042A1C
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800199A0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     _CAudioSessionManagerProvider::GetAudioSessionManagerInternal_::_1_::dtor$1 @ 0x18006D7F0 (_CAudioSessionManagerProvider--GetAudioSessionManagerInternal_--_1_--dtor$1.c)
 *     _CPolicyConfig::DisconnectHelper_::_1_::dtor$1 @ 0x1800721E6 (_CPolicyConfig--DisconnectHelper_--_1_--dtor$1.c)
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$10 @ 0x1800C02CC (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$10.c)
 *     _CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup_::_1_::dtor$1 @ 0x1800F6386 (_CAudioResourceManager--ConfigureAuxiliaryInputStreamForStreamGroup_--_1_--dtor$1.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$19 @ 0x1800F7E6C (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$19.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>::~com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 104LL))(v1, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
