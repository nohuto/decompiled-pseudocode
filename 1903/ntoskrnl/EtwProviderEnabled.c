/*
 * XREFs of EtwProviderEnabled @ 0x1400AF010
 * Callers:
 *     KeInsertQueueApc @ 0x1400AECB0 (KeInsertQueueApc.c)
 *     EtwTraceMemoryAcg @ 0x1400AEFB0 (EtwTraceMemoryAcg.c)
 *     EtwpLogMemNodeInfo @ 0x14032F068 (EtwpLogMemNodeInfo.c)
 *     EtwTiLogInsertQueueUserApc @ 0x140330AD0 (EtwTiLogInsertQueueUserApc.c)
 *     EtwTiLogAllocExecVm @ 0x14067852C (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x140678608 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x1406786CC (EtwTiLogReadWriteVm.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x140681798 (EtwTiLogDeviceObjectLoadUnload.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406A4DFC (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTraceWorkingSetSwap @ 0x1406A5714 (EtwTraceWorkingSetSwap.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1406C4800 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTiLogSetContextThread @ 0x1406CA754 (EtwTiLogSetContextThread.c)
 *     EtwTiLogMapExecView @ 0x1406EE8D8 (EtwTiLogMapExecView.c)
 *     EtwTiLogDriverObjectLoad @ 0x1407090A8 (EtwTiLogDriverObjectLoad.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x1407644D4 (EtwTiLogDriverObjectUnLoad.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1408F9600 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x1408F9768 (EtwTiLogSuspendResumeThread.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1408FA260 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1400366C0 (EtwpLevelKeywordEnabled.c)
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
