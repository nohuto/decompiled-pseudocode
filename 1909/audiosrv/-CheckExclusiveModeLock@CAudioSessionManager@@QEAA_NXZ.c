/*
 * XREFs of ?CheckExclusiveModeLock@CAudioSessionManager@@QEAA_NXZ @ 0x1800484DC
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001CC80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAudioSessionManager::CheckExclusiveModeLock(CAudioSessionManager *this)
{
  return _InterlockedCompareExchange((volatile signed __int32 *)this + 77, 0, 0) != 0;
}
