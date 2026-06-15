/*
 * XREFs of ?Release@CUnknown@@UEAAKXZ @ 0x180062AF0
 * Callers:
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18002B9E8 (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?Release@PhoneCallAudio@@UEAAKXZ @ 0x180062AC0 (-Release@PhoneCallAudio@@UEAAKXZ.c)
 *     ?Release@PersistedEndpointPolicyRule@@UEAAKXZ @ 0x180062AD0 (-Release@PersistedEndpointPolicyRule@@UEAAKXZ.c)
 *     ?Release@AudioDeviceMgr@@UEAAKXZ @ 0x180062AE0 (-Release@AudioDeviceMgr@@UEAAKXZ.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800CF960 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800D00E0 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@EEAAKXZ @ 0x1800D0D50 (-Release@CPerEndpointVolumeAudioSession@@EEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CUnknown::Release(CUnknown *this)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CUnknown *))(*(_QWORD *)this + 32LL))(this);
    (*(void (__fastcall **)(CUnknown *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v2;
}
