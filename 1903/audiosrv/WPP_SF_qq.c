/*
 * XREFs of WPP_SF_qq @ 0x1800D2488
 * Callers:
 *     AUDIOSESSIONMANAGER_rundown @ 0x180008990 (AUDIOSESSIONMANAGER_rundown.c)
 *     ?NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@H@Z @ 0x180021AD0 (-NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@H@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x1800255C0 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180025F90 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180026E00 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x1800297F8 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18002B600 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ??1CAudioSessionStore@@AEAA@XZ @ 0x18003993C (--1CAudioSessionStore@@AEAA@XZ.c)
 *     ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x180040400 (-FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180049C30 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x180049E80 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18005DA28 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ @ 0x1800CD63C (-DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ.c)
 *     ?GetStreamAmbHeadTracking@CVADServer@@UEAAJ_KPEAH@Z @ 0x1800E5130 (-GetStreamAmbHeadTracking@CVADServer@@UEAAJ_KPEAH@Z.c)
 *     ?GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z @ 0x1800E5310 (-GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z.c)
 *     ?ResetEndpoint@CVADServer@@UEAAJ_K@Z @ 0x1800E62C0 (-ResetEndpoint@CVADServer@@UEAAJ_K@Z.c)
 *     ?SetStreamAmbHeadTracking@CVADServer@@UEAAJ_KH@Z @ 0x1800E6670 (-SetStreamAmbHeadTracking@CVADServer@@UEAAJ_KH@Z.c)
 *     ?SetStreamAmbMetadata@CVADServer@@UEAAJ_KPEBUAMBISONICS_PARAMS@@@Z @ 0x1800E67E0 (-SetStreamAmbMetadata@CVADServer@@UEAAJ_KPEBUAMBISONICS_PARAMS@@@Z.c)
 *     ?SetStreamAmbRotation@CVADServer@@UEAAJ_KMMMM@Z @ 0x1800E6950 (-SetStreamAmbRotation@CVADServer@@UEAAJ_KMMMM@Z.c)
 *     ?SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z @ 0x1800E6A90 (-SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18010A510 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?OnCaptureMonitorTerminated@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18010B110 (-OnCaptureMonitorTerminated@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 *     ??1CMonitor@@IEAA@XZ @ 0x18010DC84 (--1CMonitor@@IEAA@XZ.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x18010E5A0 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 *     ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x18010F914 (-MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qq(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
