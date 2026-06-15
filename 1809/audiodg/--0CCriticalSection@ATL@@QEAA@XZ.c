/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x1400055A0
 * Callers:
 *     _dynamic_initializer_for__g_CritSecSadMap__ @ 0x140001110 (_dynamic_initializer_for__g_CritSecSadMap__.c)
 *     _dynamic_initializer_for__g_CritSecSubmixList__ @ 0x140001150 (_dynamic_initializer_for__g_CritSecSubmixList__.c)
 *     ??0CpuManager@@QEAA@XZ @ 0x1400013E8 (--0CpuManager@@QEAA@XZ.c)
 *     ??0CAudioDeviceGraph@@QEAA@XZ @ 0x14000508C (--0CAudioDeviceGraph@@QEAA@XZ.c)
 *     ??0CSystemAudioDeviceBase@@QEAA@XZ @ 0x1400051C8 (--0CSystemAudioDeviceBase@@QEAA@XZ.c)
 *     ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x140005364 (--0CCrossProcessBaseEndpoint@@IEAA@XZ.c)
 *     ??0GraphStreamingResourceManager@@QEAA@XZ @ 0x14000AF90 (--0GraphStreamingResourceManager@@QEAA@XZ.c)
 *     ??0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ @ 0x1400592D4 (--0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ.c)
 *     ??$MakeAtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@4@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@0@@Z @ 0x14005D010 (--$MakeAtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@USto.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
