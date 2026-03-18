/*
 * XREFs of PoIsInitializedStopWatch @ 0x14008BB20
 * Callers:
 *     CmpFlushHive @ 0x1406344A4 (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x140660898 (CmpGenerateFlushControlData.c)
 *     HvGetHiveLogFileStatus @ 0x140660DD0 (HvGetHiveLogFileStatus.c)
 *     PopGetStopWatchByRequestType @ 0x14069E304 (PopGetStopWatchByRequestType.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140757EFC (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x140823E30 (NtCompressKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsInitializedStopWatch(_QWORD *a1)
{
  return *a1 != 0LL;
}
