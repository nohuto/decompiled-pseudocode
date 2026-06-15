/*
 * XREFs of ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18002BF40
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180021E90 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18002B600 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800C9050 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?Add@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAA_KAEBVCAudioSessionNotificationProcess@@@Z @ 0x1800D60BC (-Add@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotification.c)
 *     ?CallDestructors@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@CAXPEAVCAudioSessionNotificationProcess@@_K@Z @ 0x1800D63C4 (-CallDestructors@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSession.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<CAudioSessionNotificationProcess,1,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, __int64 *))
{
  void (__fastcall ***v2)(_QWORD, __int64 *); // r15
  LPCRITICAL_SECTION v3; // r14
  CAudioSessionNotificationProcess *v4; // rbx
  unsigned __int64 v5; // rsi
  unsigned int i; // edi
  unsigned int j; // edi
  __int64 v9; // rax
  ATL::CAtlException *v10; // [rsp+28h] [rbp-60h] BYREF
  ATL::CAtlException *v11; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v12[3]; // [rsp+40h] [rbp-48h] BYREF
  int v13; // [rsp+58h] [rbp-30h]
  __int64 v16; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v17; // [rsp+A8h] [rbp+20h]

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0LL;
  memset(v12, 0, sizeof(v12));
  v13 = 0;
  v5 = 0LL;
  v17 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; ; ++i )
  {
    LODWORD(v16) = i;
    if ( (unsigned __int64)i >= *(_QWORD *)&v3[1].LockCount )
      break;
    try
    {
      v9 = ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v3[1], i);
      ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::Add(
        v12,
        v9);
      v17 = ++v5;
    }
    catch ( ATL::CAtlException *v10 )
    {
      if ( *(_DWORD *)v10 == -1073741571 )
        _o__resetstkoflw();
      v3 = lpCriticalSection;
      v2 = a2;
      v5 = v17;
      i = v16;
    }
    v4 = (CAudioSessionNotificationProcess *)v12[0];
  }
  LeaveCriticalSection(v3);
  for ( j = 0; j < v5; ++j )
  {
    try
    {
      v16 = *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](v12, j);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      (**v2)(v2, &v16);
    }
    catch ( ATL::CAtlException *v11 )
    {
      if ( *(_DWORD *)v11 == -1073741571 )
        _o__resetstkoflw();
      v2 = a2;
      v4 = (CAudioSessionNotificationProcess *)v12[0];
      v5 = v17;
      continue;
    }
  }
  if ( v4 )
  {
    ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::CallDestructors(v4);
    free(v4);
  }
  return 0LL;
}
