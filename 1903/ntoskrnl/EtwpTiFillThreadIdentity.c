/*
 * XREFs of EtwpTiFillThreadIdentity @ 0x140132228
 * Callers:
 *     EtwTiLogAllocExecVm @ 0x14067852C (EtwTiLogAllocExecVm.c)
 *     EtwTiLogProtectExecVm @ 0x140678608 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x1406786CC (EtwTiLogReadWriteVm.c)
 *     EtwTiLogSetContextThread @ 0x1406CA754 (EtwTiLogSetContextThread.c)
 *     EtwpTimLogMitigationForProcess @ 0x1406DFC34 (EtwpTimLogMitigationForProcess.c)
 *     EtwTiLogMapExecView @ 0x1406EE8D8 (EtwTiLogMapExecView.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1406F69AC (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1408F9600 (EtwTiLogSuspendResumeProcess.c)
 *     EtwTiLogSuspendResumeThread @ 0x1408F9768 (EtwTiLogSuspendResumeThread.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1408F98CC (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x1408F9BCC (EtwTimLogProhibitNonMicrosoftBinaries.c)
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
