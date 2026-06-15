/*
 * XREFs of ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180027BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180010F4C (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180027ED0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180045BEC (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180046998 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x1800646A8 (-StartInactiveTimer@CAudioSession@@QEAAXXZ.c)
 *     ?UpdateLastInactivationTime@CAudioSession@@QEAAXXZ @ 0x180064738 (-UpdateLastInactivationTime@CAudioSession@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     WPP_SF_Sdd @ 0x1800C37C8 (WPP_SF_Sdd.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPerStreamVolumeAudioSession::NewState(CPerStreamVolumeAudioSession *this, enum _AudioSessionState a2)
{
  int v4; // esi
  CAudioSessionManager *v5; // rcx
  __int64 v6; // rdx
  int v7; // eax

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
      (unsigned int)&WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
      *((_QWORD *)this + 96),
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
      CAudioSession::UpdateLastInactivationTime(this);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          78LL,
          &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
          *((_QWORD *)this + 96));
      }
      *((_BYTE *)this + 1016) = 0;
      CAudioSession::StartInactiveTimer(this);
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
        WPP_SF_q(*((_QWORD *)v5 + 2), 85LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, this);
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
        &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
        *((_QWORD *)this + 96));
    }
    *((_BYTE *)this + 1016) = 1;
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
    if ( *((_BYTE *)this + 1024) )
    {
      CPerStreamVolumeAudioSession::PersistSessionConfiguration(this);
      CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
    }
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 72LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, this);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 10, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 4) + 32LL))((char *)this + 32);
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 4) + 24LL))((char *)this + 32, 1LL);
  }
}
