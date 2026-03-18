/*
 * XREFs of KiCheckThreadAffinity @ 0x140115138
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x1400570B0 (KiSearchForNewThreadOnProcessor.c)
 *     KiQueueReadyThread @ 0x1400D2350 (KiQueueReadyThread.c)
 *     KiSelectNextThread @ 0x1400D7148 (KiSelectNextThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140114D84 (KiUpdateGlobalCpuSetConfiguration.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiCheckThreadAffinity(__int64 a1)
{
  return *(_QWORD *)(a1 + 568) == KiCpuSetSequence || (*(_DWORD *)(a1 + 116) & 8) != 0;
}
