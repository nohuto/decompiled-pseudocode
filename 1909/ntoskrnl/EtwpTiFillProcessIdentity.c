/*
 * XREFs of EtwpTiFillProcessIdentity @ 0x140132A70
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x140330530 (EtwTiLogInsertQueueUserApc.c)
 *     EtwTiLogAllocExecVm @ 0x14067DC3C (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x14067DD18 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x14067DDDC (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x1406C916C (EtwTiLogSetContextThread.c)
 *     EtwpTimLogMitigationForProcess @ 0x1406E0F44 (EtwpTimLogMitigationForProcess.c)
 *     EtwTiLogMapExecView @ 0x1406F0428 (EtwTiLogMapExecView.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1406F876C (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1408F8FE0 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x1408F9148 (EtwTiLogSuspendResumeThread.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1408F92AC (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x1408F95AC (EtwTimLogProhibitNonMicrosoftBinaries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpTiFillProcessIdentity(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 result; // rax

  a1[1] = 4LL;
  *a1 = a2 + 744;
  a1[2] = a2 + 784;
  a1[3] = 8LL;
  *a3 = *(_QWORD *)(a2 + 1912) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
  a1[4] = a3;
  a1[5] = 8LL;
  a1[6] = a2 + 1784;
  a1[7] = 1LL;
  a1[8] = a2 + 1785;
  a1[9] = 1LL;
  a1[10] = a2 + 1786;
  result = 6LL;
  a1[11] = 1LL;
  return result;
}
