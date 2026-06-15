/*
 * XREFs of ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18002B9E8
 * Callers:
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800284D0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x18002B6A0 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800CD600 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800D00E0 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180062AF0 (-Release@CUnknown@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 *     WPP_SF_Sq @ 0x1800D1CB4 (WPP_SF_Sq.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::StopSessionPersistanceTimer(CPerStreamVolumeAudioSession *this)
{
  __int64 v3; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v5; // [rsp+38h] [rbp-10h]

  if ( *((_BYTE *)this + 984) )
  {
    v5 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 1040);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        120,
        (unsigned int)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
        *((_QWORD *)this + 91),
        *((_QWORD *)this + 135));
    }
    if ( *((_QWORD *)this + 135) )
    {
      v3 = _InterlockedExchange64((volatile __int64 *)this + 135, 0LL);
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        v3,
        0LL,
        0LL,
        0);
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, __int64))(*(_QWORD *)ThreadPool + 32LL))(
        ThreadPool,
        v3,
        1LL);
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64))(*(_QWORD *)ThreadPool + 16LL))(ThreadPool, v3);
      if ( *((_QWORD *)this + 136) )
      {
        (*(void (__fastcall **)(struct CAudioThreadPool *))(*(_QWORD *)ThreadPool + 64LL))(ThreadPool);
        *((_QWORD *)this + 136) = 0LL;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          121LL,
          &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
          *((_QWORD *)this + 91));
      }
      CUnknown::Release((CPerStreamVolumeAudioSession *)((char *)this + 32));
    }
    if ( v5 )
      LeaveCriticalSection(lpCriticalSection);
  }
  return 0LL;
}
