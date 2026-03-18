/*
 * XREFs of EtwpTiFillProcessIdentity @ 0x140131FCC
 * Callers:
 *     EtwTiLogQueueApcThread @ 0x140312780 (EtwTiLogQueueApcThread.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140582AF0 (EtwTimLogRedirectionTrustPolicy.c)
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

__int64 __fastcall EtwpTiFillProcessIdentity(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 result; // rax

  a1[1] = 4LL;
  *a1 = a2 + 736;
  a1[2] = a2 + 776;
  a1[3] = 8LL;
  *a3 = *(_QWORD *)(a2 + 1864) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
  a1[4] = a3;
  a1[5] = 8LL;
  a1[6] = a2 + 1736;
  a1[7] = 1LL;
  a1[8] = a2 + 1737;
  a1[9] = 1LL;
  a1[10] = a2 + 1738;
  result = 6LL;
  a1[11] = 1LL;
  return result;
}
