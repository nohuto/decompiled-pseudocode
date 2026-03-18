/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x140132A38
 * Callers:
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

__int64 __fastcall EtwpTiFillThreadIdentity(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2 + 1616;
  *(_DWORD *)(a1 + 8) = 4;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 16) = a2 + 1536;
  result = 2LL;
  *(_DWORD *)(a1 + 24) = 8;
  return result;
}
