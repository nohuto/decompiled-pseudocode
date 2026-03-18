/*
 * XREFs of KiCheckThreadAffinity @ 0x1400F9574
 * Callers:
 *     KiSearchForNewThread @ 0x1400130A4 (KiSearchForNewThread.c)
 *     KiSelectNextThread @ 0x1400136A0 (KiSelectNextThread.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140041AF0 (KiSearchForNewThreadOnProcessor.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1400F9424 (KiUpdateGlobalCpuSetConfiguration.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiCheckThreadAffinity(__int64 a1)
{
  return *(_QWORD *)(a1 + 568) == KiCpuSetSequence || (*(_DWORD *)(a1 + 116) & 8) != 0;
}
