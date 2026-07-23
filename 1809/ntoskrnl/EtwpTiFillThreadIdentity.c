/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x140132084
 * Callers:
 *     EtwTiLogAllocExecVm @ 0x1406777FC (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x14067787C (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x140677AD4 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x1406AA420 (EtwTiLogSetContextThread.c)
 *     EtwpTimLogMitigationForProcess @ 0x1406C043C (EtwpTimLogMitigationForProcess.c)
 *     EtwTiLogMapExecView @ 0x1406D0680 (EtwTiLogMapExecView.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1406D6E5C (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1408BDC74 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x1408BDDDC (EtwTiLogSuspendResumeThread.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1408BDF40 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x1408BE27C (EtwTimLogProhibitNonMicrosoftBinaries.c)
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
