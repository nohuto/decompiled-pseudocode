/*
 * XREFs of EtwProviderEnabled @ 0x1400F1800
 * Callers:
 *     KeInsertQueueApc @ 0x1400F1500 (KeInsertQueueApc.c)
 *     EtwTraceMemoryAcg @ 0x1400F17A8 (EtwTraceMemoryAcg.c)
 *     EtwTiLogQueueApcThread @ 0x140312A70 (EtwTiLogQueueApcThread.c)
 *     EtwTraceWorkingSetSwap @ 0x14066C988 (EtwTraceWorkingSetSwap.c)
 *     EtwTiLogAllocExecVm @ 0x1406777FC (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x14067787C (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x140677AD4 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x1406AA420 (EtwTiLogSetContextThread.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1406C3600 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTiLogMapExecView @ 0x1406D0680 (EtwTiLogMapExecView.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406D221C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1408BDC74 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x1408BDDDC (EtwTiLogSuspendResumeThread.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1408BE940 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x14005B930 (EtwpLevelKeywordEnabled.c)
 */

BOOLEAN __stdcall EtwProviderEnabled(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword)
{
  __int64 v3; // r8
  BOOLEAN v4; // r9
  __int64 v5; // r10
  unsigned __int8 v6; // r11

  if ( !RegHandle )
    return 0;
  if ( EtwpLevelKeywordEnabled(*(_QWORD *)(RegHandle + 32) + 96LL, Level, Keyword)
    || *(_BYTE *)(v5 + 101) != v4 && EtwpLevelKeywordEnabled(*(_QWORD *)(v5 + 40) + 96LL, v6, v3) )
  {
    return 1;
  }
  return v4;
}
