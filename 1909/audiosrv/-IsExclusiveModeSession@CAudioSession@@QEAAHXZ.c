/*
 * XREFs of ?IsExclusiveModeSession@CAudioSession@@QEAAHXZ @ 0x1800CF010
 * Callers:
 *     ?FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z @ 0x1800D66DC (-FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800C8BA0 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::IsExclusiveModeSession(CAudioSession *this)
{
  unsigned int v2; // edi
  unsigned __int64 i; // rsi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v6 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x8Du, (__int64)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, 0LL);
  }
  for ( i = 0LL; i < *((_QWORD *)this + 13); ++i )
  {
    if ( *(_BYTE *)(*(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                                 (_QWORD *)this + 12,
                                 i)
                  + 44LL) )
      v2 = 1;
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
