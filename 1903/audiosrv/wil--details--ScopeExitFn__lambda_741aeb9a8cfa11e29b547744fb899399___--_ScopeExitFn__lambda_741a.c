/*
 * XREFs of wil::details::ScopeExitFn__lambda_741aeb9a8cfa11e29b547744fb899399___::_ScopeExitFn__lambda_741aeb9a8cfa11e29b547744fb899399___ @ 0x1800F55FC
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800199A0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     _BuildDeviceGraphForStream_::_1_::dtor$2 @ 0x1800727A0 (_BuildDeviceGraphForStream_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall wil::details::ScopeExitFn__lambda_741aeb9a8cfa11e29b547744fb899399___::_ScopeExitFn__lambda_741aeb9a8cfa11e29b547744fb899399___(
        __int64 a1)
{
  RPC_STATUS result; // eax

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    return RpcRevertToSelf();
  }
  return result;
}
