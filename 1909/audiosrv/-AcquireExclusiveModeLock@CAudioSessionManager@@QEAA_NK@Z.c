/*
 * XREFs of ?AcquireExclusiveModeLock@CAudioSessionManager@@QEAA_NK@Z @ 0x1800F5C40
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001CC80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAudioSessionManager::AcquireExclusiveModeLock(CAudioSessionManager *this, signed __int32 a2)
{
  return _InterlockedCompareExchange((volatile signed __int32 *)this + 77, a2, 0) == 0;
}
