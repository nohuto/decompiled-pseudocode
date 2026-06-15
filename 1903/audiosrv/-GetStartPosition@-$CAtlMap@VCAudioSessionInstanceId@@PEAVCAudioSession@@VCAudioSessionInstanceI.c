/*
 * XREFs of ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x1800425D0
 * Callers:
 *     VADServerUserSessionChanged @ 0x180029328 (VADServerUserSessionChanged.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800423A0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ??1CAudioSessionManager@@EEAA@XZ @ 0x1800D5B58 (--1CAudioSessionManager@@EEAA@XZ.c)
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800D6788 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z @ 0x1800D6A48 (-FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z.c)
 *     ?FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z @ 0x1800D6B2C (-FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800D6C80 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800D7F38 (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(
        __int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // r8d
  __int64 v3; // rdx

  if ( !*(_QWORD *)(a1 + 8) )
    return 0LL;
  v2 = *(_DWORD *)(a1 + 16);
  v3 = 0LL;
  if ( !v2 )
    return 0LL;
  while ( 1 )
  {
    result = *(_QWORD *)(*(_QWORD *)a1 + 8 * v3);
    if ( result )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= v2 )
      return 0LL;
  }
  return result;
}
