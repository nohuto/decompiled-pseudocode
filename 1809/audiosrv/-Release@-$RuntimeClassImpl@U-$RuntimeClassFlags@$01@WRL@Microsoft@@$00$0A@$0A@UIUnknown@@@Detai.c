/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020980
 * Callers:
 *     GetAudioSessionManager @ 0x18000F1D0 (GetAudioSessionManager.c)
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180020460 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 *     VADServerUserSessionChanged @ 0x1800205C8 (VADServerUserSessionChanged.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x1800266B0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x18005C450 (-CreateAudioSessionManagerProvider@@YAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VCAudioSessionManagerProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x18005FB18 (-InternalRelease@-$ComPtr@VCAudioSessionManagerProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$com_ptr_t@VCAudioSessionManagerProvider@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVCAudioSessionManagerProvider@@XZ @ 0x1800AFD3C (--I-$com_ptr_t@VCAudioSessionManagerProvider@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVCAudi.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800B14F8 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800B3314 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     ?DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z @ 0x1800D1F94 (-DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x1800D1FDC (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1800D5330 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800EA36C (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV-$ComPtr@UIStreamGr.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EA564 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063980 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        __int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10

  v1 = ATL::SafeDecrementReferenceMultiThread((int *)(a1 + 12));
  if ( !v1 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, v1 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}
