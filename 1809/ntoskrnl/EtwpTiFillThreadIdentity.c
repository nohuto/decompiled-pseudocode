/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x140131FB4
 * Callers:
 *     EtwTiLogAllocExecVm @ 0x14067663C (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x1406766BC (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x140676914 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x1406A9180 (EtwTiLogSetContextThread.c)
 *     EtwpTimLogMitigationForProcess @ 0x1406BF19C (EtwpTimLogMitigationForProcess.c)
 *     EtwTiLogMapExecView @ 0x1406CF3E0 (EtwTiLogMapExecView.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1406D5BBC (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1408BC9B4 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x1408BCB1C (EtwTiLogSuspendResumeThread.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1408BCC80 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x1408BCFBC (EtwTimLogProhibitNonMicrosoftBinaries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpTiFillThreadIdentity(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2 + 1600;
  *(_DWORD *)(a1 + 8) = 4;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 16) = a2 + 1520;
  result = 2LL;
  *(_DWORD *)(a1 + 24) = 8;
  return result;
}
