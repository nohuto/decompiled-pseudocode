/*
 * XREFs of ?IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ @ 0x180119BD4
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800199A0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CEndpointCharacteristics::IsOffloadCapable(CEndpointCharacteristics *this)
{
  return CEndpointCharacteristics::HasHardwareAudioEngine(this);
}
