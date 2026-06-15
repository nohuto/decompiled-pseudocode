/*
 * XREFs of ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x1800646A8
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x180007DE0 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUI.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180027BF0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002A450 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180043110 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 */

void __fastcall CAudioSession::StartInactiveTimer(CAudioSession *this)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+44h] [rbp+Ch]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 84LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, this);
  }
  v2 = *((_QWORD *)this + 75);
  v3 = -10000LL * *((unsigned int *)this + 78);
  v4 = -10000 * *((_DWORD *)this + 78);
  v5 = HIDWORD(v3);
  (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, int *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
    ThreadPool,
    v2,
    &v4,
    0LL,
    100);
}
