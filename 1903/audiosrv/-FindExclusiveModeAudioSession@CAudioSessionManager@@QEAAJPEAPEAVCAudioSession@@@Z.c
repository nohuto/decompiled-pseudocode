/*
 * XREFs of ?FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z @ 0x1800D6B2C
 * Callers:
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F92B8 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x1800425D0 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?IsExclusiveModeSession@CAudioSession@@QEAAHXZ @ 0x1800CF470 (-IsExclusiveModeSession@CAudioSession@@QEAAHXZ.c)
 *     ?FindNextNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@PEAV312@@Z @ 0x1800D6C04 (-FindNextNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::FindExclusiveModeAudioSession(
        CAudioSessionManager *this,
        struct CAudioSession **a2)
{
  char *v3; // rsi
  struct CAudioSession *v4; // rdi
  __int64 StartPosition; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+30h] [rbp-18h]

  v3 = (char *)this + 56;
  v4 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64)v3);
  if ( StartPosition )
  {
    do
    {
      v4 = *(struct CAudioSession **)(StartPosition + 80);
      if ( v4 && (unsigned int)CAudioSession::IsExclusiveModeSession(*(CAudioSession **)(StartPosition + 80)) )
        break;
      v4 = 0LL;
      StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::FindNextNode(
                        v3,
                        StartPosition);
    }
    while ( StartPosition );
    if ( v4 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  *a2 = v4;
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v4 == 0LL ? 0x80070490 : 0;
}
