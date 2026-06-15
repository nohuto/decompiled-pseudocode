/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x14000E284
 * Callers:
 *     _dynamic_initializer_for__g_CritSecSadMap__ @ 0x140001110 (_dynamic_initializer_for__g_CritSecSadMap__.c)
 *     _dynamic_initializer_for__g_CritSecSubmixList__ @ 0x140001150 (_dynamic_initializer_for__g_CritSecSubmixList__.c)
 *     ??0GraphStreamingResourceManager@@QEAA@XZ @ 0x140003BA4 (--0GraphStreamingResourceManager@@QEAA@XZ.c)
 *     ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x14000E1E0 (--0CCrossProcessBaseEndpoint@@IEAA@XZ.c)
 *     ??0CSystemAudioDeviceBase@@QEAA@XZ @ 0x14000E368 (--0CSystemAudioDeviceBase@@QEAA@XZ.c)
 *     ??0CAudioDeviceGraph@@QEAA@XZ @ 0x14000E9DC (--0CAudioDeviceGraph@@QEAA@XZ.c)
 *     ??0CpuManager@@QEAA@XZ @ 0x14002C500 (--0CpuManager@@QEAA@XZ.c)
 *     ??0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ @ 0x140057450 (--0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ.c)
 *     ??$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@3@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@0@@Z @ 0x14005AE88 (--$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@-$AtomicObjBase@UClockingSec.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14002A524 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
