/*
 * XREFs of ?FindNextNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@PEAV312@@Z @ 0x1800D6C04
 * Callers:
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z @ 0x1800D6A48 (-FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z.c)
 *     ?FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z @ 0x1800D6B2C (-FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x1800D73CC (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::FindNextNode(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  __int64 v4; // rdx

  result = a2;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 88);
    if ( !v3 )
    {
      v4 = (unsigned int)(*(_DWORD *)(a2 + 96) % *(_DWORD *)(a1 + 16) + 1);
      do
      {
        if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 16) )
          break;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 8 * v4) )
          v3 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
        v4 = (unsigned int)(v4 + 1);
      }
      while ( !v3 );
    }
    return v3;
  }
  return result;
}
