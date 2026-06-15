/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180025300
 * Callers:
 *     _dynamic_initializer_for__g_csVadList__ @ 0x180001290 (_dynamic_initializer_for__g_csVadList__.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x18000A2B0 (--0CAudioSessionManager@@QEAA@XZ.c)
 *     AudioSessionManagerGetCurrentSession @ 0x18001BD20 (AudioSessionManagerGetCurrentSession.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180021E90 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x180024F80 (--0CAudioSession@@IEAA@XZ.c)
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180026B00 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ??0CServerAudioSessionControl@@IEAA@XZ @ 0x180030C08 (--0CServerAudioSessionControl@@IEAA@XZ.c)
 *     ??0AudioEffectsWatcherFactory@@QEAA@XZ @ 0x18004F87C (--0AudioEffectsWatcherFactory@@QEAA@XZ.c)
 *     ??0CAudioSrv@@QEAA@XZ @ 0x180052790 (--0CAudioSrv@@QEAA@XZ.c)
 *     ??0CVolumeStrip@@QEAA@XZ @ 0x18005AA6C (--0CVolumeStrip@@QEAA@XZ.c)
 *     ??0CAudioHealthMonitor@@QEAA@K@Z @ 0x18005B9B4 (--0CAudioHealthMonitor@@QEAA@K@Z.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x18005BA88 (--0CPolicyConfig@@QEAA@XZ.c)
 *     ??0CMonitorManager@@QEAA@XZ @ 0x18005D918 (--0CMonitorManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180060758 (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ??0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z @ 0x180060EE0 (--0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ??0AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x180060FB0 (--0AudioSrvVolumeTelemetry@@QEAA@XZ.c)
 *     ??0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z @ 0x1800C8C30 (--0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x1800D5804 (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 *     ??0CMonitor@@QEAA@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@@Z @ 0x180107368 (--0CMonitor@@QEAA@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
