/*
 * XREFs of ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x18001DA3C
 * Callers:
 *     ??_GCPerStreamVolumeAudioSession@@EEAAPEAXI@Z @ 0x18001DA00 (--_GCPerStreamVolumeAudioSession@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180045BEC (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 */

void __fastcall CPerStreamVolumeAudioSession::~CPerStreamVolumeAudioSession(CPerStreamVolumeAudioSession *this)
{
  *(_QWORD *)this = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)this + 1) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)this + 2) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)this + 3) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 4) = &CPerStreamVolumeAudioSession::`vftable'{for `CUnknown'};
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, this);
  }
  if ( *((_BYTE *)this + 1024) )
    CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 27);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 1032));
  CAudioSession::~CAudioSession(this);
}
