/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18001FDEC
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001CC80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$17 @ 0x1800F79A4 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$17.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$22 @ 0x1800F79E0 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$22.c)
 * Callees:
 *     <none>
 */

void *__fastcall wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>(
        __int64 a1)
{
  SaDeviceParams **v1; // rdx
  void *result; // rax
  SaDeviceParams *v3; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = *(SaDeviceParams ***)a1;
    result = *(void **)(a1 + 8);
    v3 = **(SaDeviceParams ***)a1;
    **(_QWORD **)a1 = result;
    if ( v3 )
      return SaDeviceParams::`scalar deleting destructor'(v3, (unsigned int)v1);
  }
  return result;
}
