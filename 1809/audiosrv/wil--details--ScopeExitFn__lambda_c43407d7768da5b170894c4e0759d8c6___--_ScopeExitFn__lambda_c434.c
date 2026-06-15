/*
 * XREFs of wil::details::ScopeExitFn__lambda_c43407d7768da5b170894c4e0759d8c6___::_ScopeExitFn__lambda_c43407d7768da5b170894c4e0759d8c6___ @ 0x180065394
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023730 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     _BuildDeviceGraphForStream_::_1_::dtor$2 @ 0x180065DAE (_BuildDeviceGraphForStream_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall wil::details::ScopeExitFn__lambda_c43407d7768da5b170894c4e0759d8c6___::_ScopeExitFn__lambda_c43407d7768da5b170894c4e0759d8c6___(
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
