/*
 * XREFs of PoIsInitializedStopWatch @ 0x14008CE20
 * Callers:
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x14068F7A0 (CmpGenerateFlushControlData.c)
 *     HvGetHiveLogFileStatus @ 0x14068FCD8 (HvGetHiveLogFileStatus.c)
 *     PopGetStopWatchByRequestType @ 0x1406E15F4 (PopGetStopWatchByRequestType.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14075C790 (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x140823530 (NtCompressKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsInitializedStopWatch(_QWORD *a1)
{
  return *a1 != 0LL;
}
