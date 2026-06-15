/*
 * XREFs of ??1?$out_param_t@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800479F8
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001CC80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::out_param_t<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = *(_QWORD *)(a1 + 8);
    v2 = **(_QWORD **)a1;
    **(_QWORD **)a1 = v1;
    if ( v2 )
      LODWORD(v1) = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(v2);
  }
  return v1;
}
