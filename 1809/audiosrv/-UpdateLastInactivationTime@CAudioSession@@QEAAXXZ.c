/*
 * XREFs of ?UpdateLastInactivationTime@CAudioSession@@QEAAXXZ @ 0x180064738
 * Callers:
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180027BF0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002A450 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x18002D1D0 (--0CAudioSession@@IEAA@XZ.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180043110 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioSession::UpdateLastInactivationTime(CAudioSession *this)
{
  *((_QWORD *)this + 49) = GetTickCount64();
}
