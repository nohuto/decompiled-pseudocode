/*
 * XREFs of ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800284D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180028760 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18002B9E8 (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004DDBC (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004E950 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 *     WPP_SF_Sdd @ 0x1800D1BA8 (WPP_SF_Sdd.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPerStreamVolumeAudioSession::NewState(CPerStreamVolumeAudioSession *this, enum _AudioSessionState a2)
{
  int v4; // esi
  CAudioSessionManager *v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rax
  int v9; // [rsp+70h] [rbp+8h] BYREF
  int v10; // [rsp+74h] [rbp+Ch]

  _InterlockedIncrement((volatile signed __int32 *)this + 10);
  v4 = *((_DWORD *)this + 102);
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      76,
      (unsigned int)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
      *((_QWORD *)this + 91),
      v4,
      a2,
      -2LL);
    v5 = WPP_GLOBAL_Control;
  }
  if ( v4 )
  {
    if ( v4 == 1 && a2 == AudioSessionStateInactive )
    {
      GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 420));
      *((_QWORD *)this + 49) = GetTickCount64();
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          78LL,
          &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
          *((_QWORD *)this + 91));
      }
      *((_BYTE *)this + 976) = 0;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 84LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, this);
      }
      v8 = -10000LL * *((unsigned int *)this + 78);
      v9 = -10000 * *((_DWORD *)this + 78);
      v10 = HIDWORD(v8);
      (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, int *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        *((_QWORD *)this + 75),
        &v9,
        0LL,
        100);
    }
  }
  else if ( a2 == AudioSessionStateActive )
  {
    if ( *((_QWORD *)this + 75) )
    {
      v6 = *((_QWORD *)this + 75);
      if ( v5 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v5 + 28) & 0x40) != 0
        && *((_BYTE *)v5 + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)v5 + 2), 85LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, this);
        v6 = *((_QWORD *)this + 75);
      }
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        v6,
        0LL,
        0LL,
        0);
      (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64))(*(_QWORD *)ThreadPool + 32LL))(
        ThreadPool,
        *((_QWORD *)this + 75),
        1LL);
    }
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 412));
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        77LL,
        &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
        *((_QWORD *)this + 91));
    }
    *((_BYTE *)this + 976) = 1;
  }
  *((_DWORD *)this + 102) = a2;
  if ( a2 == AudioSessionStateActive )
  {
    v7 = *((_DWORD *)this + 76);
    if ( (v7 & 0x200000) != 0 )
      *((_DWORD *)this + 76) = v7 & 0xFFDFFFFF;
  }
  if ( v4 != a2 )
  {
    (*(void (__fastcall **)(CPerStreamVolumeAudioSession *))(*(_QWORD *)this + 8LL))(this);
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 496));
    (*(void (__fastcall **)(CPerStreamVolumeAudioSession *))(*(_QWORD *)this + 16LL))(this);
  }
  if ( a2 == AudioSessionStateExpired )
  {
    CPerStreamVolumeAudioSession::StopSessionPersistanceTimer(this);
    if ( *((_BYTE *)this + 984) )
    {
      CPerStreamVolumeAudioSession::PersistSessionConfiguration(this);
      CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
    }
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 72LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, this);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 10, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 4) + 32LL))((char *)this + 32);
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 4) + 24LL))((char *)this + 32, 1LL);
  }
}
