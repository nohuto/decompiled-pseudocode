/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x140131F94
 * Callers:
 *     EtwTiLogAllocExecVm @ 0x14067665C (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x1406766DC (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x140676934 (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x1406A91A0 (EtwTiLogSetContextThread.c)
 *     EtwpTimLogMitigationForProcess @ 0x1406BF1BC (EtwpTimLogMitigationForProcess.c)
 *     EtwTiLogMapExecView @ 0x1406CF400 (EtwTiLogMapExecView.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1406D5BDC (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1408BC9D4 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x1408BCB3C (EtwTiLogSuspendResumeThread.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1408BCCA0 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x1408BCFDC (EtwTimLogProhibitNonMicrosoftBinaries.c)
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
