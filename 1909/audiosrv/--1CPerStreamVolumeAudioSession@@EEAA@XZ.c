/*
 * XREFs of ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x18002E1A4
 * Callers:
 *     ??_GCPerStreamVolumeAudioSession@@EEAAPEAXI@Z @ 0x18002E168 (--_GCPerStreamVolumeAudioSession@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004DDBC (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
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
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, this);
  }
  if ( *((_BYTE *)this + 984) )
    CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 26);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 992));
  CAudioSession::~CAudioSession(this);
}
