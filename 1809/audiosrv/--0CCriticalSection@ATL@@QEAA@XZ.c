/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18002D550
 * Callers:
 *     _dynamic_initializer_for__g_csVadList__ @ 0x180001250 (_dynamic_initializer_for__g_csVadList__.c)
 *     ??0CServerAudioSessionControl@@IEAA@XZ @ 0x1800042F0 (--0CServerAudioSessionControl@@IEAA@XZ.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x18002000C (--0CAudioSessionManager@@QEAA@XZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002A450 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x18002D1D0 (--0CAudioSession@@IEAA@XZ.c)
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x18002D580 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     AudioSessionManagerGetCurrentSession @ 0x180033B50 (AudioSessionManagerGetCurrentSession.c)
 *     ??0AudioEffectsWatcherFactory@@QEAA@XZ @ 0x1800490DC (--0AudioEffectsWatcherFactory@@QEAA@XZ.c)
 *     ??0CAudioSrv@@QEAA@XZ @ 0x180051D38 (--0CAudioSrv@@QEAA@XZ.c)
 *     ??0CMonitorManager@@QEAA@XZ @ 0x18005A2C0 (--0CMonitorManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18005A56C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ??0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z @ 0x18005B68C (--0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ??0AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x18005B75C (--0AudioSrvVolumeTelemetry@@QEAA@XZ.c)
 *     ??0CVolumeStrip@@QEAA@XZ @ 0x18005B7F8 (--0CVolumeStrip@@QEAA@XZ.c)
 *     ??0CAudioHealthMonitor@@QEAA@K@Z @ 0x18005F2F4 (--0CAudioHealthMonitor@@QEAA@K@Z.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x18005F3C8 (--0CPolicyConfig@@QEAA@XZ.c)
 *     ??0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z @ 0x1800BA410 (--0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x1800C6EF8 (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 *     ??0CMonitor@@QEAA@XZ @ 0x1800FAD98 (--0CMonitor@@QEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
