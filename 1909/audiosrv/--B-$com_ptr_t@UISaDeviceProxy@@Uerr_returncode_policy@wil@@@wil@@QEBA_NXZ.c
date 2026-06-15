/*
 * XREFs of ??B?$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ @ 0x18001FE10
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001CC80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::operator bool(_QWORD *a1)
{
  return *a1 != 0LL;
}
