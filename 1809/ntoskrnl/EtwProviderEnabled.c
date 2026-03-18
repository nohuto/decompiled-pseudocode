/*
 * XREFs of EtwProviderEnabled @ 0x1400F1760
 * Callers:
 *     KeInsertQueueApc @ 0x1400F1460 (KeInsertQueueApc.c)
 *     EtwTraceMemoryAcg @ 0x1400F1708 (EtwTraceMemoryAcg.c)
 *     EtwTiLogQueueApcThread @ 0x140312780 (EtwTiLogQueueApcThread.c)
 *     EtwTraceWorkingSetSwap @ 0x14066B7E8 (EtwTraceWorkingSetSwap.c)
 *     EtwTiLogAllocExecVm @ 0x14067665C (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x1406766DC (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x140676934 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x1406A91A0 (EtwTiLogSetContextThread.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1406C2380 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTiLogMapExecView @ 0x1406CF400 (EtwTiLogMapExecView.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406D0F9C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1408BC9D4 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x1408BCB3C (EtwTiLogSuspendResumeThread.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1408BD6A0 (EtwpTiVadQueryEventWriteCallback.c)
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
