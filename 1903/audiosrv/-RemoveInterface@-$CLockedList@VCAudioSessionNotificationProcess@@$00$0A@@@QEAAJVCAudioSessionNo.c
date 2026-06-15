/*
 * XREFs of ?RemoveInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800D7DD8
 * Callers:
 *     ?DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x1800D66D0 (-DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z @ 0x18004E898 (-RemoveAt@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800C9050 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ??1CAudioSessionNotificationProcess@@QEAA@XZ @ 0x1800D5F0C (--1CAudioSessionNotificationProcess@@QEAA@XZ.c)
 *     ??8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z @ 0x1800D5F44 (--8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z.c)
 *     ?RemoveAt@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x1800D7CC4 (-RemoveAt@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotific.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<CAudioSessionNotificationProcess,1,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        CAudioSessionNotificationProcess *this)
{
  __int64 *v2; // r14
  LPCRITICAL_SECTION v3; // rbx
  unsigned int v4; // esi
  unsigned int i; // r12d
  _QWORD *v6; // rax
  bool v7; // al
  ULONG_PTR *p_SpinCount; // r15
  ATL::CAtlException *v10; // [rsp+28h] [rbp-40h] BYREF

  v2 = (__int64 *)this;
  v3 = lpCriticalSection;
  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; (unsigned __int64)i < *(_QWORD *)&v3[1].LockCount; ++i )
  {
    try
    {
      v6 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                       &v3[1].DebugInfo,
                       i);
      v7 = operator==(v6, v2);
    }
    catch ( ATL::CAtlException *v10 )
    {
      v3 = lpCriticalSection;
      v2 = (__int64 *)this;
      v4 = *(_DWORD *)v10;
      break;
    }
    if ( v7 )
    {
      p_SpinCount = &v3[1].SpinCount;
      if ( (PRTL_CRITICAL_SECTION_DEBUG)i >= v3[2].DebugInfo )
        ATL::AtlThrowImpl(-2147024809);
      --*(_DWORD *)(*p_SpinCount + 4LL * i);
      if ( (PRTL_CRITICAL_SECTION_DEBUG)i >= v3[2].DebugInfo )
        ATL::AtlThrowImpl(-2147024809);
      if ( !*(_DWORD *)(*p_SpinCount + 4LL * i) )
      {
        ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::RemoveAt(
          &v3[1].DebugInfo,
          i);
        ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(&v3[1].SpinCount, i);
        break;
      }
    }
  }
  LeaveCriticalSection(v3);
  CAudioSessionNotificationProcess::~CAudioSessionNotificationProcess((CAudioSessionNotificationProcess *)v2);
  return v4;
}
