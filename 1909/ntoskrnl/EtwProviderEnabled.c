/*
 * XREFs of EtwProviderEnabled @ 0x1400E5560
 * Callers:
 *     KeInsertQueueApc @ 0x1400E5200 (KeInsertQueueApc.c)
 *     EtwTraceMemoryAcg @ 0x1400E5500 (EtwTraceMemoryAcg.c)
 *     EtwpLogMemNodeInfo @ 0x14032EAC8 (EtwpLogMemNodeInfo.c)
 *     EtwTiLogInsertQueueUserApc @ 0x140330530 (EtwTiLogInsertQueueUserApc.c)
 *     EtwTraceWorkingSetSwap @ 0x140673710 (EtwTraceWorkingSetSwap.c)
 *     EtwTiLogAllocExecVm @ 0x14067DC3C (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x14067DD18 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x14067DDDC (EtwTiLogReadWriteVm.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x14069FCF8 (EtwTiLogDeviceObjectLoadUnload.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1406C39C0 (EtwpCrimsonProvEnableCallback.c)
 *     EtwTiLogSetContextThread @ 0x1406C916C (EtwTiLogSetContextThread.c)
 *     EtwTiLogMapExecView @ 0x1406F0428 (EtwTiLogMapExecView.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406F4DFC (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTiLogDriverObjectLoad @ 0x14070AE88 (EtwTiLogDriverObjectLoad.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140768FD4 (EtwTiLogDriverObjectUnLoad.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1408F8FE0 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x1408F9148 (EtwTiLogSuspendResumeThread.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1408F9C40 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140036AB0 (EtwpLevelKeywordEnabled.c)
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
