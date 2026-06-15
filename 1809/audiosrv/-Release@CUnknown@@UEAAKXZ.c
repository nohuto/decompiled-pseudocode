/*
 * XREFs of ?Release@CUnknown@@UEAAKXZ @ 0x18005E140
 * Callers:
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180010F4C (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?Release@PhoneCallAudio@@UEAAKXZ @ 0x18005E110 (-Release@PhoneCallAudio@@UEAAKXZ.c)
 *     ?Release@PersistedEndpointPolicyRule@@UEAAKXZ @ 0x18005E120 (-Release@PersistedEndpointPolicyRule@@UEAAKXZ.c)
 *     ?Release@AudioDeviceMgr@@UEAAKXZ @ 0x18005E130 (-Release@AudioDeviceMgr@@UEAAKXZ.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800C1490 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800C1C10 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@EEAAKXZ @ 0x1800C28D0 (-Release@CPerEndpointVolumeAudioSession@@EEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
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
