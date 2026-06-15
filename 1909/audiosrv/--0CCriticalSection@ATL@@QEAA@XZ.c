/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180027F50
 * Callers:
 *     _dynamic_initializer_for__g_csVadList__ @ 0x180001290 (_dynamic_initializer_for__g_csVadList__.c)
 *     AudioSessionManagerGetCurrentSession @ 0x18001F000 (AudioSessionManagerGetCurrentSession.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180024AE0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x180027BD0 (--0CAudioSession@@IEAA@XZ.c)
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180029750 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ??0CServerAudioSessionControl@@IEAA@XZ @ 0x180033A98 (--0CServerAudioSessionControl@@IEAA@XZ.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x180036E34 (--0CAudioSessionManager@@QEAA@XZ.c)
 *     ??0AudioEffectsWatcherFactory@@QEAA@XZ @ 0x18005073C (--0AudioEffectsWatcherFactory@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18005C198 (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ??0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z @ 0x18005C920 (--0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ??0AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x18005C9F0 (--0AudioSrvVolumeTelemetry@@QEAA@XZ.c)
 *     ??0CAudioHealthMonitor@@QEAA@K@Z @ 0x18005EE58 (--0CAudioHealthMonitor@@QEAA@K@Z.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x18005EF2C (--0CPolicyConfig@@QEAA@XZ.c)
 *     ??0CMonitorManager@@QEAA@XZ @ 0x180060378 (--0CMonitorManager@@QEAA@XZ.c)
 *     ??0CAudioSrv@@QEAA@XZ @ 0x180060EA0 (--0CAudioSrv@@QEAA@XZ.c)
 *     ??0CVolumeStrip@@QEAA@XZ @ 0x18006333C (--0CVolumeStrip@@QEAA@XZ.c)
 *     ??0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z @ 0x1800C8780 (--0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x1800D53B4 (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 *     ??0CMonitor@@QEAA@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@@Z @ 0x180106E68 (--0CMonitor@@QEAA@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
