/*
 * XREFs of ?IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ @ 0x1801196D4
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001CC80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CEndpointCharacteristics::IsOffloadCapable(CEndpointCharacteristics *this)
{
  return CEndpointCharacteristics::HasHardwareAudioEngine(this);
}
