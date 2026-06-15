/*
 * XREFs of wil::details::ScopeExitFn__lambda_3ce7fdbebcc5ff8267ef03a5935776ff___::_ScopeExitFn__lambda_3ce7fdbebcc5ff8267ef03a5935776ff___ @ 0x1800F55D4
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800199A0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall wil::details::ScopeExitFn__lambda_3ce7fdbebcc5ff8267ef03a5935776ff___::_ScopeExitFn__lambda_3ce7fdbebcc5ff8267ef03a5935776ff___(
        __int64 a1)
{
  _BYTE *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = *(_BYTE **)a1;
    if ( **(_BYTE **)a1 )
    {
      result = *(_BYTE **)(a1 + 8);
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)result + 308LL), 0);
    }
  }
  return result;
}
